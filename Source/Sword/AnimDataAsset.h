// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Animation/AnimSequence.h"
#include "AnimDataAsset.generated.h"
/**
 * 
 */
UCLASS()
class SWORD_API UAnimDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TMap<FName,UAnimSequence*> AnimationMap;
};
