// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "CustomData.generated.h"

UENUM(BlueprintType)
enum EHitType
{
	EHit_Inplace UMETA(DisplayName = "Inplace"),
	EHit_InplaceDown UMETA(DisplayName = "InplaceDown"),
	EHit_BackDown UMETA(DisplayName = "BackDown"),
	EHit_Floating UMETA(DisplayName = "Floating"),
	EHit_Stun UMETA(DisplayName = "Stun")
};
/**
 * 
 */
UCLASS(Blueprintable)
class SWORD_API UCustomData : public UAnimMetaData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ComboStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ComboNextTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHitType> HitType;
};
