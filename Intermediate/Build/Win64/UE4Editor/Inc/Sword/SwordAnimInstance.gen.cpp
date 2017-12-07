// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SwordAnimInstance.h"
#include "Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordAnimInstance() {}
// Cross Module References
	SWORD_API UClass* Z_Construct_UClass_USwordAnimInstance_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_USwordAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Sword();
	SWORD_API UFunction* Z_Construct_UFunction_USwordAnimInstance_GetComboAnimSequence();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UAnimDataAsset_NoRegister();
	SWORD_API UFunction* Z_Construct_UFunction_USwordAnimInstance_GetMetaData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
// End Cross Module References
	void USwordAnimInstance::StaticRegisterNativesUSwordAnimInstance()
	{
		UClass* Class = USwordAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComboAnimSequence", (Native)&USwordAnimInstance::execGetComboAnimSequence },
			{ "GetMetaData", (Native)&USwordAnimInstance::execGetMetaData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USwordAnimInstance_GetComboAnimSequence()
	{
		struct SwordAnimInstance_eventGetComboAnimSequence_Parms
		{
			UAnimDataAsset* Asset;
			int32 InputIndex;
			UAnimSequence* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SwordAnimInstance_eventGetComboAnimSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InputIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordAnimInstance_eventGetComboAnimSequence_Parms, InputIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset = { UE4CodeGen_Private::EPropertyClass::Object, "Asset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordAnimInstance_eventGetComboAnimSequence_Parms, Asset), Z_Construct_UClass_UAnimDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Asset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USwordAnimInstance, "GetComboAnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SwordAnimInstance_eventGetComboAnimSequence_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USwordAnimInstance_GetMetaData()
	{
		struct SwordAnimInstance_eventGetMetaData_Parms
		{
			UAnimSequence* Sequnce;
			int32 Index;
			const UAnimMetaData* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000582, 1, nullptr, STRUCT_OFFSET(SwordAnimInstance_eventGetMetaData_Parms, ReturnValue), Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordAnimInstance_eventGetMetaData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequnce = { UE4CodeGen_Private::EPropertyClass::Object, "Sequnce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordAnimInstance_eventGetMetaData_Parms, Sequnce), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Index,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sequnce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USwordAnimInstance, "GetMetaData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SwordAnimInstance_eventGetMetaData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USwordAnimInstance_NoRegister()
	{
		return USwordAnimInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_USwordAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Sword,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USwordAnimInstance_GetComboAnimSequence, "GetComboAnimSequence" }, // 3080516310
				{ &Z_Construct_UFunction_USwordAnimInstance_GetMetaData, "GetMetaData" }, // 718847411
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "AnimInstance" },
				{ "IncludePath", "SwordAnimInstance.h" },
				{ "ModuleRelativePath", "SwordAnimInstance.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboInputCache_MetaData[] = {
				{ "Category", "SwordAnimInstance" },
				{ "ModuleRelativePath", "SwordAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComboInputCache = { UE4CodeGen_Private::EPropertyClass::Array, "ComboInputCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USwordAnimInstance, ComboInputCache), METADATA_PARAMS(NewProp_ComboInputCache_MetaData, ARRAY_COUNT(NewProp_ComboInputCache_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComboInputCache_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ComboInputCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboInputCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboInputCache_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USwordAnimInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USwordAnimInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(USwordAnimInstance, 573380914);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwordAnimInstance(Z_Construct_UClass_USwordAnimInstance, &USwordAnimInstance::StaticClass, TEXT("/Script/Sword"), TEXT("USwordAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwordAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
