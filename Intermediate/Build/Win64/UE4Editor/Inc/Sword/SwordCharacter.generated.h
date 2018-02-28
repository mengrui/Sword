// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
#ifdef SWORD_SwordCharacter_generated_h
#error "SwordCharacter.generated.h already included, missing '#pragma once' in SwordCharacter.h"
#endif
#define SWORD_SwordCharacter_generated_h

#define Sword_Source_Sword_SwordCharacter_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActionInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetActionInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionInput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActionInput(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_attackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAction(Z_Param_attackType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActionInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ActionInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComboAnimSequence) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InputIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimSequence**)Z_Param__Result=this->GetComboAnimSequence(Z_Param_InputIndex); \
		P_NATIVE_END; \
	}


#define Sword_Source_Sword_SwordCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActionInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetActionInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActionInput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActionInput(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAction) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_attackType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAction(Z_Param_attackType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ActionInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ActionInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanMove(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComboAnimSequence) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InputIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimSequence**)Z_Param__Result=this->GetComboAnimSequence(Z_Param_InputIndex); \
		P_NATIVE_END; \
	}


#define Sword_Source_Sword_SwordCharacter_h_22_EVENT_PARMS
#define Sword_Source_Sword_SwordCharacter_h_22_CALLBACK_WRAPPERS
#define Sword_Source_Sword_SwordCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwordCharacter(); \
	friend SWORD_API class UClass* Z_Construct_UClass_ASwordCharacter(); \
public: \
	DECLARE_CLASS(ASwordCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(ASwordCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Sword_Source_Sword_SwordCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASwordCharacter(); \
	friend SWORD_API class UClass* Z_Construct_UClass_ASwordCharacter(); \
public: \
	DECLARE_CLASS(ASwordCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(ASwordCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Sword_Source_Sword_SwordCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwordCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwordCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordCharacter(ASwordCharacter&&); \
	NO_API ASwordCharacter(const ASwordCharacter&); \
public:


#define Sword_Source_Sword_SwordCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordCharacter(ASwordCharacter&&); \
	NO_API ASwordCharacter(const ASwordCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwordCharacter)


#define Sword_Source_Sword_SwordCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASwordCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASwordCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CurHitType() { return STRUCT_OFFSET(ASwordCharacter, CurHitType); }


#define Sword_Source_Sword_SwordCharacter_h_19_PROLOG \
	Sword_Source_Sword_SwordCharacter_h_22_EVENT_PARMS


#define Sword_Source_Sword_SwordCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_SwordCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_SwordCharacter_h_22_RPC_WRAPPERS \
	Sword_Source_Sword_SwordCharacter_h_22_CALLBACK_WRAPPERS \
	Sword_Source_Sword_SwordCharacter_h_22_INCLASS \
	Sword_Source_Sword_SwordCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sword_Source_Sword_SwordCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_SwordCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_SwordCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Sword_Source_Sword_SwordCharacter_h_22_CALLBACK_WRAPPERS \
	Sword_Source_Sword_SwordCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Sword_Source_Sword_SwordCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sword_Source_Sword_SwordCharacter_h


#define FOREACH_ENUM_EBODYPOSE(op) \
	op(EBodyPose_Stand) \
	op(EBodyPose_FaceUp) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
