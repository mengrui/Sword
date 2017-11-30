// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "CustomData.generated.h"

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
};
