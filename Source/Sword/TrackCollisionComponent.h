// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "TrackCollisionComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Utility, hidecategories = (Lighting, Mobile), config = Engine, editinlinenew, meta = (BlueprintSpawnableComponent))
class SWORD_API UTrackCollisionComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TrackCollisionComponent)
	bool bDebugDraw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TrackCollisionComponent)
	float  NumSection = 5;

private:
	bool bTrace = false;
	TArray<FVector> LastCheckPoints;
	EObjectTypeQuery TraceChannel = ObjectTypeQuery_MAX;
public:
	UFUNCTION(BlueprintCallable, Category = "Trace")
	void StartTrace(EObjectTypeQuery InTraceChannel);

	UFUNCTION(BlueprintCallable, Category = "Trace")
	void EndTrace();
protected:
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport = ETeleportType::None) override;
	
	bool bActive = false;
};
