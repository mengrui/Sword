// Fill out your copyright notice in the Description page of Project Settings.

#include "SwordAnimInstance.h"
#include "AnimDataAsset.h"
#include "CustomData.h"

UAnimSequence* USwordAnimInstance::GetComboAnimSequence(class UAnimDataAsset* Asset, int InputIndex)
{
	if (Asset == nullptr) return nullptr;
	
	ComboInputCache.Add(InputIndex);
	for (int i=0;i<Asset->Combos.Num();i++)
	{
		auto indices = Asset->Combos[i].InputIndex;
		const TArray<UAnimSequence*>& Anims = Asset->Combos[i].AnimSequence;
		if (ComboInputCache.Num()<= indices.Num() && ComboInputCache.Num() <= Anims.Num())
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

UAnimMetaData* USwordAnimInstance::GetMetaData(UAnimSequence* Sequnce,int Index) const
{
	if (Sequnce)
	{
		if (Sequnce->GetMetaData().Num()>Index)
		{
			return Sequnce->GetMetaData()[Index];
		}
	}

	return nullptr;
}
