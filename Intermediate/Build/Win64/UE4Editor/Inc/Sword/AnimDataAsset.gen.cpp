// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AnimDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDataAsset() {}
// Cross Module References
	SWORD_API UClass* Z_Construct_UClass_UAnimDataAsset_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UAnimDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Sword();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void UAnimDataAsset::StaticRegisterNativesUAnimDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UAnimDataAsset_NoRegister()
	{
		return UAnimDataAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_Sword,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AnimDataAsset.h" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationMap_MetaData[] = {
				{ "Category", "AnimDataAsset" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_AnimationMap = { UE4CodeGen_Private::EPropertyClass::Map, "AnimationMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UAnimDataAsset, AnimationMap), METADATA_PARAMS(NewProp_AnimationMap_MetaData, ARRAY_COUNT(NewProp_AnimationMap_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AnimationMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "AnimationMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "AnimationMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationMap_ValueProp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimDataAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimDataAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimDataAsset, 2487955319);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimDataAsset(Z_Construct_UClass_UAnimDataAsset, &UAnimDataAsset::StaticClass, TEXT("/Script/Sword"), TEXT("UAnimDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
