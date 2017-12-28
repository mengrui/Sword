// Fill out your copyright notice in the Description page of Project Settings.

#include "TrackCollisionComponent.h"
#include "Engine.h"
#include "Kismet/KismetStringLibrary.h"

void UTrackCollisionComponent::StartTrace(EObjectTypeQuery InTraceChannel)
{
	if (NumSection == 0)
	{
		return;
	}

	TraceChannel = InTraceChannel;
	bTrace = true;
	FVector Extent = GetScaledBoxExtent();
	
	FVector StepVec = (FVector(0,0, Extent.Z) - FVector(0, 0, -Extent.Z)) / float(NumSection);

	LastCheckPoints.SetNum(NumSection);
	for (int32 i = 0; i < LastCheckPoints.Num(); i++)
	{
		FVector Pos = FVector(0, 0, -Extent.Z) + StepVec*(0.5f + i);
		LastCheckPoints[i] = GetComponentTransform().TransformPosition(Pos);
	}
}

void UTrackCollisionComponent::EndTrace()
{
	bTrace = false;
	bActive = false;
}

void UTrackCollisionComponent::OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	Super::OnUpdateTransform(UpdateTransformFlags, Teleport);
	if (!bTrace) return;

	if (LastCheckPoints.Num() != NumSection)
	{
		StartTrace(TraceChannel);
	}

	FHitResult Hit;
	FVector Extent = GetScaledBoxExtent();
	FVector StepVec = (FVector(0, 0, Extent.Z) - FVector(0, 0, -Extent.Z)) / float(NumSection);
	TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
	ObjectTypes.Add(TraceChannel);
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(GetOwner());

	bool newActive = false;
	for (int32 i = 0; i < LastCheckPoints.Num(); i++)
	{
		FVector CurPos = FVector(0, 0, -Extent.Z) + StepVec*(0.5f + i);
		CurPos = GetComponentTransform().TransformPosition(CurPos);
		FVector LastPos = LastCheckPoints[i];
		//UKismetSystemLibrary::PrintWarning(UKismetStringLibrary::Conv_FloatToString((CurPos - LastPos).Size()/ GetWorld()->GetDeltaSeconds()));
		if ((CurPos - LastPos).Size()>GetWorld()->GetDeltaSeconds()* 200)
		{
			newActive = true;
		}
	}

	if (bActive == false && newActive == true)
	{
		OnComponentActivated.Broadcast(this, true);
	}

	if (newActive == false && bActive == true)
	{
		OnComponentDeactivated.Broadcast(this);
	}

	bActive = newActive;

	if (bActive)
	{
		for (int32 i = 0; i < LastCheckPoints.Num(); i++)
		{
			FVector CurPos = FVector(0, 0, -Extent.Z) + StepVec*(0.5f + i);
			CurPos = GetComponentTransform().TransformPosition(CurPos);
			FVector LastPos = LastCheckPoints[i];
			bool bHit = UKismetSystemLibrary::BoxTraceSingleForObjects(
				this,
				LastPos, CurPos, FVector(Extent.X, Extent.Y, StepVec.Size()*0.5f),
				GetComponentTransform().GetRotation().Rotator(),
				ObjectTypes,
				true, IgnoreActors,
				bDebugDraw ? EDrawDebugTrace::Type::ForDuration : EDrawDebugTrace::None,
				Hit, true);

			LastCheckPoints[i] = CurPos;
			if (bHit)
			{
				OnComponentHit.Broadcast(this, Hit.GetActor(), Hit.GetComponent(), Hit.Normal, Hit);
				EndTrace();
				return;
			}
		}
	}
}

