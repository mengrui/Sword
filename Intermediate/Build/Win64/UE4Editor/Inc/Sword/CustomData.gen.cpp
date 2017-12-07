// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomData() {}
// Cross Module References
	SWORD_API UClass* Z_Construct_UClass_UCustomData_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UCustomData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
	UPackage* Z_Construct_UPackage__Script_Sword();
// End Cross Module References
	void UCustomData::StaticRegisterNativesUCustomData()
	{
	}
	UClass* Z_Construct_UClass_UCustomData_NoRegister()
	{
		return UCustomData::StaticClass();
	}
	UClass* Z_Construct_UClass_UCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimMetaData,
				(UObject* (*)())Z_Construct_UPackage__Script_Sword,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "CustomData.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboStartTime_MetaData[] = {
				{ "Category", "CustomData" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "ComboStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCustomData, ComboStartTime), METADATA_PARAMS(NewProp_ComboStartTime_MetaData, ARRAY_COUNT(NewProp_ComboStartTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboStartTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCustomData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCustomData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00113080u,
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
	IMPLEMENT_CLASS(UCustomData, 4091415718);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomData(Z_Construct_UClass_UCustomData, &UCustomData::StaticClass, TEXT("/Script/Sword"), TEXT("UCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
