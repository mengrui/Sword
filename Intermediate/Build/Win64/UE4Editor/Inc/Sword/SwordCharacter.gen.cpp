// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SwordCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwordCharacter() {}
// Cross Module References
	SWORD_API UEnum* Z_Construct_UEnum_Sword_EBodyPose();
	UPackage* Z_Construct_UPackage__Script_Sword();
	SWORD_API UClass* Z_Construct_UClass_ASwordCharacter_NoRegister();
	SWORD_API UClass* Z_Construct_UClass_ASwordCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_CanMove();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_EndTrace();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_GetActionInput();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_GetComboAnimSequence();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_LandNotify();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_OnRep_ActionInput();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_PlayAction();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_playAnim();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_SetActionInput();
	SWORD_API UFunction* Z_Construct_UFunction_ASwordCharacter_StartTrace();
	SWORD_API UEnum* Z_Construct_UEnum_Sword_EHitType();
	SWORD_API UClass* Z_Construct_UClass_UAnimDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* EBodyPose_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Sword_EBodyPose, Z_Construct_UPackage__Script_Sword(), TEXT("EBodyPose"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyPose(EBodyPose_StaticEnum, TEXT("/Script/Sword"), TEXT("EBodyPose"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Sword_EBodyPose_CRC() { return 2094508180U; }
	UEnum* Z_Construct_UEnum_Sword_EBodyPose()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Sword();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyPose"), 0, Get_Z_Construct_UEnum_Sword_EBodyPose_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyPose_Stand", (int64)EBodyPose_Stand },
				{ "EBodyPose_FaceUp", (int64)EBodyPose_FaceUp },
				{ "EBodyPose_FaceDown", (int64)EBodyPose_FaceDown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EBodyPose_FaceDown.DisplayName", "FaceDown" },
				{ "EBodyPose_FaceUp.DisplayName", "FaceUp" },
				{ "EBodyPose_Stand.DisplayName", "Stand" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Sword,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBodyPose",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBodyPose",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ASwordCharacter_EndTrace = FName(TEXT("EndTrace"));
	void ASwordCharacter::EndTrace()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASwordCharacter_EndTrace),NULL);
	}
	static FName NAME_ASwordCharacter_playAnim = FName(TEXT("playAnim"));
	void ASwordCharacter::playAnim(UAnimSequence* seq)
	{
		SwordCharacter_eventplayAnim_Parms Parms;
		Parms.seq=seq;
		ProcessEvent(FindFunctionChecked(NAME_ASwordCharacter_playAnim),&Parms);
	}
	static FName NAME_ASwordCharacter_StartTrace = FName(TEXT("StartTrace"));
	void ASwordCharacter::StartTrace()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASwordCharacter_StartTrace),NULL);
	}
	void ASwordCharacter::StaticRegisterNativesASwordCharacter()
	{
		UClass* Class = ASwordCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanMove", (Native)&ASwordCharacter::execCanMove },
			{ "GetActionInput", (Native)&ASwordCharacter::execGetActionInput },
			{ "GetComboAnimSequence", (Native)&ASwordCharacter::execGetComboAnimSequence },
			{ "LandNotify", (Native)&ASwordCharacter::execLandNotify },
			{ "OnRep_ActionInput", (Native)&ASwordCharacter::execOnRep_ActionInput },
			{ "PlayAction", (Native)&ASwordCharacter::execPlayAction },
			{ "SetActionInput", (Native)&ASwordCharacter::execSetActionInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_CanMove()
	{
		struct SwordCharacter_eventCanMove_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((SwordCharacter_eventCanMove_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SwordCharacter_eventCanMove_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "CanMove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SwordCharacter_eventCanMove_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_EndTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "EndTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_GetActionInput()
	{
		struct SwordCharacter_eventGetActionInput_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SwordCharacter_eventGetActionInput_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintGetter", "" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "GetActionInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SwordCharacter_eventGetActionInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_GetComboAnimSequence()
	{
		struct SwordCharacter_eventGetComboAnimSequence_Parms
		{
			int32 InputIndex;
			UAnimSequence* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SwordCharacter_eventGetComboAnimSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InputIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordCharacter_eventGetComboAnimSequence_Parms, InputIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "GetComboAnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SwordCharacter_eventGetComboAnimSequence_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_LandNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "LandNotify", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_OnRep_ActionInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "OnRep_ActionInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_PlayAction()
	{
		struct SwordCharacter_eventPlayAction_Parms
		{
			int32 attackType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_attackType = { UE4CodeGen_Private::EPropertyClass::Int, "attackType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordCharacter_eventPlayAction_Parms, attackType), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_attackType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "PlayAction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SwordCharacter_eventPlayAction_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_playAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_seq = { UE4CodeGen_Private::EPropertyClass::Object, "seq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordCharacter_eventplayAnim_Parms, seq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_seq,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "playAnim", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(SwordCharacter_eventplayAnim_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_SetActionInput()
	{
		struct SwordCharacter_eventSetActionInput_Parms
		{
			int32 index;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index = { UE4CodeGen_Private::EPropertyClass::Int, "index", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwordCharacter_eventSetActionInput_Parms, index), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_index,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintSetter", "" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "SetActionInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SwordCharacter_eventSetActionInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwordCharacter_StartTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwordCharacter, "StartTrace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwordCharacter_NoRegister()
	{
		return ASwordCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASwordCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_Sword,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASwordCharacter_CanMove, "CanMove" }, // 3678416734
				{ &Z_Construct_UFunction_ASwordCharacter_EndTrace, "EndTrace" }, // 81994935
				{ &Z_Construct_UFunction_ASwordCharacter_GetActionInput, "GetActionInput" }, // 2336132722
				{ &Z_Construct_UFunction_ASwordCharacter_GetComboAnimSequence, "GetComboAnimSequence" }, // 1610080216
				{ &Z_Construct_UFunction_ASwordCharacter_LandNotify, "LandNotify" }, // 928829485
				{ &Z_Construct_UFunction_ASwordCharacter_OnRep_ActionInput, "OnRep_ActionInput" }, // 694111346
				{ &Z_Construct_UFunction_ASwordCharacter_PlayAction, "PlayAction" }, // 2814652579
				{ &Z_Construct_UFunction_ASwordCharacter_playAnim, "playAnim" }, // 3174181977
				{ &Z_Construct_UFunction_ASwordCharacter_SetActionInput, "SetActionInput" }, // 460948061
				{ &Z_Construct_UFunction_ASwordCharacter_StartTrace, "StartTrace" }, // 2506173287
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "SwordCharacter.h" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandHit_MetaData[] = {
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LandHit = { UE4CodeGen_Private::EPropertyClass::Int, "LandHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "LandNotify", STRUCT_OFFSET(ASwordCharacter, LandHit), METADATA_PARAMS(NewProp_LandHit_MetaData, ARRAY_COUNT(NewProp_LandHit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanAttack_MetaData[] = {
				{ "Category", "SwordCharacter" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
				{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Replicated)\nTEnumAsByte<EBodyPose> BodyPose;" },
			};
#endif
			auto NewProp_CanAttack_SetBit = [](void* Obj){ ((ASwordCharacter*)Obj)->CanAttack = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanAttack = { UE4CodeGen_Private::EPropertyClass::Bool, "CanAttack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASwordCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CanAttack_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CanAttack_MetaData, ARRAY_COUNT(NewProp_CanAttack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionInput_MetaData[] = {
				{ "BlueprintGetter", "GetActionInput" },
				{ "BlueprintSetter", "SetActionInput" },
				{ "Category", "SwordCharacter" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActionInput = { UE4CodeGen_Private::EPropertyClass::Int, "ActionInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000024, 1, "OnRep_ActionInput", STRUCT_OFFSET(ASwordCharacter, ActionInput), METADATA_PARAMS(NewProp_ActionInput_MetaData, ARRAY_COUNT(NewProp_ActionInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blocking_MetaData[] = {
				{ "Category", "SwordCharacter" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			auto NewProp_Blocking_SetBit = [](void* Obj){ ((ASwordCharacter*)Obj)->Blocking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Blocking = { UE4CodeGen_Private::EPropertyClass::Bool, "Blocking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000024, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASwordCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Blocking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Blocking_MetaData, ARRAY_COUNT(NewProp_Blocking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboInputCache_MetaData[] = {
				{ "Category", "SwordCharacter" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComboInputCache = { UE4CodeGen_Private::EPropertyClass::Array, "ComboInputCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, ComboInputCache), METADATA_PARAMS(NewProp_ComboInputCache_MetaData, ARRAY_COUNT(NewProp_ComboInputCache_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ComboInputCache_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ComboInputCache", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHitType_MetaData[] = {
				{ "Category", "SwordCharacter" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
				{ "ToolTip", "End of APawn interface" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurHitType = { UE4CodeGen_Private::EPropertyClass::Byte, "CurHitType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000004, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, CurHitType), Z_Construct_UEnum_Sword_EHitType, METADATA_PARAMS(NewProp_CurHitType_MetaData, ARRAY_COUNT(NewProp_CurHitType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSet_MetaData[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSet = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, AnimSet), Z_Construct_UClass_UAnimDataAsset_NoRegister, METADATA_PARAMS(NewProp_AnimSet_MetaData, ARRAY_COUNT(NewProp_AnimSet_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
				{ "ToolTip", "Follow camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FollowCamera_MetaData, ARRAY_COUNT(NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SwordCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASwordCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandHit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CanAttack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActionInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Blocking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboInputCache,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComboInputCache_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurHitType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimSet,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FollowCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASwordCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASwordCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwordCharacter, 1186879058);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwordCharacter(Z_Construct_UClass_ASwordCharacter, &ASwordCharacter::StaticClass, TEXT("/Script/Sword"), TEXT("ASwordCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwordCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
