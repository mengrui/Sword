// Fill out your copyright notice in the Description page of Project Settings.
#include "TrackCollisionComponent.h"
#include "Sword.h"
#include "Engine.h"

void UTrackCollisionComponent::StartTrace(EObjectTypeQuery InTraceChannel)
{
	if (NumSection == 0)
	{
		return;
	}

	TraceChannel = InTraceChannel;
	bTrace = true;
	FVector StepVec = (TailPosition - HeadPosition)/float(NumSection);

	LastCheckPoints.SetNum(NumSection);
	for (int32 i = 0; i<LastCheckPoints.Num(); i++)
	{
		FVector Pos =  HeadPosition + StepVec*(0.5f + i);
		LastCheckPoints[i] =  ComponentToWorld.TransformPosition(Pos);
	}
}

void UTrackCollisionComponent::EndTrace()
{
	bTrace = false;
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
	FVector StepVec = (TailPosition - HeadPosition) / float(NumSection);
	TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
	ObjectTypes.Add(TraceChannel);
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(GetOwner());

	for (int32 i = 0; i<LastCheckPoints.Num(); i++)
	{
		FVector CurPos = HeadPosition + StepVec*(0.5f + i);
		CurPos = ComponentToWorld.TransformPosition(CurPos);
		FVector LastPos = LastCheckPoints[i];
		bool bHit = UKismetSystemLibrary::BoxTraceSingleForObjects(
			this,
			LastPos, CurPos, FVector(0, Thickness, StepVec.Size()*0.5f),
			ComponentToWorld.GetRotation().Rotator(),
			ObjectTypes,
			true, IgnoreActors,
			bDebugDraw?EDrawDebugTrace::Type::ForDuration:EDrawDebugTrace::None, 
			Hit, true);
		
		LastCheckPoints[i] = CurPos;
		if (bHit)
		{
			OnComponentHit.Broadcast(this, Hit.GetActor(),Hit.GetComponent(), Hit.Normal, Hit);
			EndTrace();
			return;
		}
	}
}


