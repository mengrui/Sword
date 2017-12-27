// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CustomData.h"
#include "SwordCharacter.generated.h"

UENUM(BlueprintType)
enum EBodyPose
{
	EBodyPose_Stand UMETA(DisplayName = "Stand"),
	EBodyPose_FaceUp UMETA(DisplayName = "FaceUp"),
	EBodyPose_FaceDown UMETA(DisplayName = "FaceDown"),
};

UCLASS(config=Game)
class ASwordCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	ASwordCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Pawn)
	class UAnimDataAsset*		AnimSet;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<EHitType> CurHitType;
public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:
	UFUNCTION(BlueprintCallable)
	class UAnimSequence* GetComboAnimSequence(int InputIndex);

	UFUNCTION(BlueprintPure)
	bool CanMove() const;

	void Tick(float DeltaSeconds);

	virtual void Landed(const FHitResult& Hit);

	UFUNCTION()
	virtual void OnRep_ActionInput();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> ComboInputCache;

	UFUNCTION(BlueprintCallable)
	void PlayAction(int attackType);
	
	UFUNCTION(BlueprintImplementableEvent)
	void playAnim(UAnimSequence* seq);

	UPROPERTY(BlueprintReadWrite, Replicated)
	bool Blocking;

	UFUNCTION(BlueprintSetter)
	void SetActionInput(int index)
	{
		int count = (ActionInput >> 16) + 1;
		count = count << 16;
		index &= 0x0000ffff;
		ActionInput = count | index;
	}

	UFUNCTION(BlueprintGetter)
	int GetActionInput() const
	{
		return ActionInput & 0x0000ffff;
	}

	UPROPERTY(BlueprintReadWrite,ReplicatedUsing=OnRep_ActionInput, BlueprintSetter=SetActionInput, BlueprintGetter=GetActionInput)
	int ActionInput = 0;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)
	//TEnumAsByte<EBodyPose> BodyPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanAttack = true;

	UFUNCTION()
	void LandNotify()
	{
		Landed(FHitResult());
	}

	UPROPERTY(ReplicatedUsing= LandNotify)
	int LandHit;
};

