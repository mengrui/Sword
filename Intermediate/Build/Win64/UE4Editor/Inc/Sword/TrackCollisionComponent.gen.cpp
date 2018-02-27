// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TrackCollisionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackCollisionComponent() {}
// Cross Module References
	SWORD_API UClass* Z_Construct_UClass_UTrackCollisionComponent_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_UTrackCollisionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_Sword();
	SWORD_API UFunction* Z_Construct_UFunction_UTrackCollisionComponent_EndTrace();
	SWORD_API UFunction* Z_Construct_UFunction_UTrackCollisionComponent_StartTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
	void UTrackCollisionComponent::StaticRegisterNativesUTrackCollisionComponent()
	{
		UClass* Class = UTrackCollisionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTrace", (Native)&UTrackCollisionComponent::execEndTrace },
			{ "StartTrace", (Native)&UTrackCollisionComponent::execStartTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTrackCollisionComponent_EndTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "TrackCollisionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackCollisionComponent, "EndTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTrackCollisionComponent_StartTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Trace" },
				{ "ModuleRelativePath", "TrackCollisionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTrackCollisionComponent, "StartTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTrackCollisionComponent_NoRegister()
	{
		return UTrackCollisionComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTrackCollisionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBoxComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Sword,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTrackCollisionComponent_EndTrace, "EndTrace" }, // 2480630299
				{ &Z_Construct_UFunction_UTrackCollisionComponent_StartTrace, "StartTrace" }, // 1252037767
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Utility" },
				{ "HideCategories", "Lighting Mobile Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "TrackCollisionComponent.h" },
				{ "ModuleRelativePath", "TrackCollisionComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannels_MetaData[] = {
				{ "Category", "TrackCollisionComponent" },
				{ "ModuleRelativePath", "TrackCollisionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceChannels = { UE4CodeGen_Private::EPropertyClass::Array, "TraceChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTrackCollisionComponent, TraceChannels), METADATA_PARAMS(NewProp_TraceChannels_MetaData, ARRAY_COUNT(NewProp_TraceChannels_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannels_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSection_MetaData[] = {
				{ "Category", "TrackCollisionComponent" },
				{ "ModuleRelativePath", "TrackCollisionComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumSection = { UE4CodeGen_Private::EPropertyClass::Float, "NumSection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTrackCollisionComponent, NumSection), METADATA_PARAMS(NewProp_NumSection_MetaData, ARRAY_COUNT(NewProp_NumSection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[] = {
				{ "Category", "TrackCollisionComponent" },
				{ "ModuleRelativePath", "TrackCollisionComponent.h" },
			};
#endif
			auto NewProp_bDebugDraw_SetBit = [](void* Obj){ ((UTrackCollisionComponent*)Obj)->bDebugDraw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugDraw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTrackCollisionComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugDraw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugDraw_MetaData, ARRAY_COUNT(NewProp_bDebugDraw_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TraceChannels_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugDraw,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTrackCollisionComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTrackCollisionComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrackCollisionComponent, 3871760714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrackCollisionComponent(Z_Construct_UClass_UTrackCollisionComponent, &UTrackCollisionComponent::StaticClass, TEXT("/Script/Sword"), TEXT("UTrackCollisionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackCollisionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
