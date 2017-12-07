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
	SWORD_API UScriptStruct* Z_Construct_UScriptStruct_FAttackCombo();
	UPackage* Z_Construct_UPackage__Script_Sword();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UAnimDataAsset_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UAnimDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FAttackCombo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SWORD_API uint32 Get_Z_Construct_UScriptStruct_FAttackCombo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackCombo, Z_Construct_UPackage__Script_Sword(), TEXT("AttackCombo"), sizeof(FAttackCombo), Get_Z_Construct_UScriptStruct_FAttackCombo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttackCombo(FAttackCombo::StaticStruct, TEXT("/Script/Sword"), TEXT("AttackCombo"), false, nullptr, nullptr);
static struct FScriptStruct_Sword_StaticRegisterNativesFAttackCombo
{
	FScriptStruct_Sword_StaticRegisterNativesFAttackCombo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttackCombo")),new UScriptStruct::TCppStructOps<FAttackCombo>);
	}
} ScriptStruct_Sword_StaticRegisterNativesFAttackCombo;
	UScriptStruct* Z_Construct_UScriptStruct_FAttackCombo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttackCombo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Sword();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttackCombo"), sizeof(FAttackCombo), Get_Z_Construct_UScriptStruct_FAttackCombo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackCombo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
				{ "Category", "AttackCombo" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSequence = { UE4CodeGen_Private::EPropertyClass::Array, "AnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAttackCombo, AnimSequence), METADATA_PARAMS(NewProp_AnimSequence_MetaData, ARRAY_COUNT(NewProp_AnimSequence_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputIndex_MetaData[] = {
				{ "Category", "AttackCombo" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputIndex = { UE4CodeGen_Private::EPropertyClass::Array, "InputIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAttackCombo, InputIndex), METADATA_PARAMS(NewProp_InputIndex_MetaData, ARRAY_COUNT(NewProp_InputIndex_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputIndex_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "InputIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSequence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSequence_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputIndex_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Sword,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AttackCombo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FAttackCombo),
				alignof(FAttackCombo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttackCombo_CRC() { return 2614754218U; }
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
				{ "BlueprintType", "true" },
				{ "IncludePath", "AnimDataAsset.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialAttack_MetaData[] = {
				{ "Category", "AnimDataAsset" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecialAttack = { UE4CodeGen_Private::EPropertyClass::Array, "SpecialAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnimDataAsset, SpecialAttack), METADATA_PARAMS(NewProp_SpecialAttack_MetaData, ARRAY_COUNT(NewProp_SpecialAttack_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialAttack_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpecialAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Combos_MetaData[] = {
				{ "Category", "AnimDataAsset" },
				{ "ModuleRelativePath", "AnimDataAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Combos = { UE4CodeGen_Private::EPropertyClass::Array, "Combos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAnimDataAsset, Combos), METADATA_PARAMS(NewProp_Combos_MetaData, ARRAY_COUNT(NewProp_Combos_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Combos_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Combos", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAttackCombo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecialAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecialAttack_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Combos,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Combos_Inner,
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
	IMPLEMENT_CLASS(UAnimDataAsset, 3326007557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimDataAsset(Z_Construct_UClass_UAnimDataAsset, &UAnimDataAsset::StaticClass, TEXT("/Script/Sword"), TEXT("UAnimDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
