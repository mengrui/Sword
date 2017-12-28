// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SwordCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/GameUserSettings.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "AnimDataAsset.h"
#include "SwordAnimInstance.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

//////////////////////////////////////////////////////////////////////////
// ASwordCharacter

ASwordCharacter::ASwordCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASwordCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASwordCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASwordCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ASwordCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ASwordCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ASwordCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ASwordCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ASwordCharacter::OnResetVR);
}


void ASwordCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ASwordCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	//Jump();
}

void ASwordCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	//StopJumping();
}

void ASwordCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if(CanMove())
		AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ASwordCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	if(CanMove()) 
		AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ASwordCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f) && CanMove())
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ASwordCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) && CanMove())
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

UAnimSequence* ASwordCharacter::GetComboAnimSequence(int InputIndex)
{
	if (AnimSet == nullptr) return nullptr;

	ComboInputCache.Add(InputIndex);
	for (int i = 0; i < AnimSet->Combos.Num(); i++)
	{
		auto indices = AnimSet->Combos[i].InputIndex;
		const TArray<UAnimSequence*>& Anims = AnimSet->Combos[i].AnimSequence;
		if (ComboInputCache.Num() <= indices.Num() && ComboInputCache.Num() <= Anims.Num())
		{
			indices.SetNum(ComboInputCache.Num());
			if (indices == ComboInputCache)
			{
				return Anims[ComboInputCache.Num() - 1];
			}
		}
	}

	return nullptr;
}

bool ASwordCharacter::CanMove() const
{
	return !Blocking;
}

void ASwordCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	auto AnimBp = GetMesh()->GetAnimInstance();
	if (AnimBp != nullptr)
	{
		if (!AnimBp->IsAnyMontagePlaying())
		{
			CanAttack = true;
			ComboInputCache.Empty();	
		}
	}

	if (GetCharacterMovement()->IsWalking())
	{
		GetCapsuleComponent()->SetCollisionObjectType(ECC_WorldDynamic);
	}
	else
	{
		GetCapsuleComponent()->SetCollisionObjectType(ECC_Pawn);
	}

	if (Role == ROLE_SimulatedProxy)
	{
		if (LastVelocityZ < 0 && GetVelocity().Z == 0)
		{
			Landed(FHitResult());
		}
		LastVelocityZ = GetVelocity().Z;
		
		//UKismetSystemLibrary::PrintWarning(UKismetStringLibrary::Conv_FloatToString(LastVelocityZ));
	}
}

void ASwordCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ASwordCharacter, Blocking, COND_None);
	DOREPLIFETIME_CONDITION(ASwordCharacter, ActionInput, COND_SimulatedOnly);
}

void ASwordCharacter::OnRep_ActionInput()
{
	PlayAction(GetActionInput());
}

void ASwordCharacter::PlayAction(int attackType)
{
	auto AnimBp = GetMesh()->GetAnimInstance();
	if (AnimBp != nullptr)
	{
		auto AnimSeq = GetComboAnimSequence(attackType);
		if (AnimSeq)
		{
			float StartTime = 0;
			EHitType hitType = EHit_Inplace;
			if (AnimSeq->GetMetaData().Num()>0)
			{
				UCustomData* data = Cast<UCustomData>(AnimSeq->GetMetaData()[0]);
				StartTime = data->ComboStartTime;
				hitType = data->HitType;
			}

			if (ComboInputCache.Num() == 1)
			{
				StartTime = 0;
			}

			static const FName SlotName(TEXT("DefaultSlot"));
			AnimBp->PlaySlotAnimationAsDynamicMontage(AnimSeq, SlotName, 0.1, 0.1, 1, 1, -1.f, StartTime);
			OnAttack();
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Action!"));;
			CurHitType = hitType;
			CanAttack = false;
		}
	}
}