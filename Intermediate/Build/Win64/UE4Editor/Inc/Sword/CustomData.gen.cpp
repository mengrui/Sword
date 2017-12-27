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
	SWORD_API UEnum* Z_Construct_UEnum_Sword_EHitType();
	UPackage* Z_Construct_UPackage__Script_Sword();
	SWORD_API UClass* Z_Construct_UClass_UCustomData_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UCustomData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData();
// End Cross Module References
	static UEnum* EHitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sword_EHitType, Z_Construct_UPackage__Script_Sword(), TEXT("EHitType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHitType(EHitType_StaticEnum, TEXT("/Script/Sword"), TEXT("EHitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sword_EHitType_CRC() { return 4186018471U; }
	UEnum* Z_Construct_UEnum_Sword_EHitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sword();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHitType"), 0, Get_Z_Construct_UEnum_Sword_EHitType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHit_Inplace", (int64)EHit_Inplace },
				{ "EHit_InplaceDown", (int64)EHit_InplaceDown },
				{ "EHit_BackDown", (int64)EHit_BackDown },
				{ "EHit_Floating", (int64)EHit_Floating },
				{ "EHit_Stun", (int64)EHit_Stun },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EHit_BackDown.DisplayName", "BackDown" },
				{ "EHit_Floating.DisplayName", "Floating" },
				{ "EHit_Inplace.DisplayName", "Inplace" },
				{ "EHit_InplaceDown.DisplayName", "InplaceDown" },
				{ "EHit_Stun.DisplayName", "Stun" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sword,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHitType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHitType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitType_MetaData[] = {
				{ "Category", "CustomData" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitType = { UE4CodeGen_Private::EPropertyClass::Byte, "HitType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCustomData, HitType), Z_Construct_UEnum_Sword_EHitType, METADATA_PARAMS(NewProp_HitType_MetaData, ARRAY_COUNT(NewProp_HitType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceEndTime_MetaData[] = {
				{ "Category", "CustomData" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "TraceEndTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCustomData, TraceEndTime), METADATA_PARAMS(NewProp_TraceEndTime_MetaData, ARRAY_COUNT(NewProp_TraceEndTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStartTime_MetaData[] = {
				{ "Category", "CustomData" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "TraceStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCustomData, TraceStartTime), METADATA_PARAMS(NewProp_TraceStartTime_MetaData, ARRAY_COUNT(NewProp_TraceStartTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboNextTime_MetaData[] = {
				{ "Category", "CustomData" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboNextTime = { UE4CodeGen_Private::EPropertyClass::Float, "ComboNextTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCustomData, ComboNextTime), METADATA_PARAMS(NewProp_ComboNextTime_MetaData, ARRAY_COUNT(NewProp_ComboNextTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboStartTime_MetaData[] = {
				{ "Category", "CustomData" },
				{ "ModuleRelativePath", "CustomData.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ComboStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "ComboStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCustomData, ComboStartTime), METADATA_PARAMS(NewProp_ComboStartTime_MetaData, ARRAY_COUNT(NewProp_ComboStartTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceEndTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboNextTime,
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
	IMPLEMENT_CLASS(UCustomData, 535087470);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomData(Z_Construct_UClass_UCustomData, &UCustomData::StaticClass, TEXT("/Script/Sword"), TEXT("UCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
