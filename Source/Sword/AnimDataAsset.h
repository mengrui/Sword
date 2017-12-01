// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Animation/AnimSequence.h"
#include "UnrealTemplate.h"
#include "Animation/AnimMetaData.h"
#include "AnimDataAsset.generated.h"

USTRUCT(Blueprintable)
struct SWORD_API FAttackCombo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<INT> InputIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimSequence*> AnimSequence;
};

/**
 * 
 */
UCLASS(Blueprintable)
class SWORD_API UAnimDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAttackCombo> Combos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimSequence*> SpecialAttack;
};
