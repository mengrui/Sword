// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SwordAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SWORD_API USwordAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	class UAnimSequence* GetComboAnimSequence(class UAnimDataAsset* Asset,int InputIndex);

	UFUNCTION(BlueprintCallable)
	class UAnimMetaData* GetMetaData(UAnimSequence* Sequnce,int Index) const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int> ComboInputCache;
};
