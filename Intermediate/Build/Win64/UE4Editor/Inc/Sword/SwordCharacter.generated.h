// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORD_SwordCharacter_generated_h
#error "SwordCharacter.generated.h already included, missing '#pragma once' in SwordCharacter.h"
#endif
#define SWORD_SwordCharacter_generated_h

#define Sword_Source_Sword_SwordCharacter_h_12_RPC_WRAPPERS
#define Sword_Source_Sword_SwordCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Sword_Source_Sword_SwordCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwordCharacter(); \
	friend SWORD_API class UClass* Z_Construct_UClass_ASwordCharacter(); \
public: \
	DECLARE_CLASS(ASwordCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(ASwordCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Sword_Source_Sword_SwordCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwordCharacter(); \
	friend SWORD_API class UClass* Z_Construct_UClass_ASwordCharacter(); \
public: \
	DECLARE_CLASS(ASwordCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(ASwordCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Sword_Source_Sword_SwordCharacter_h_12_STANDARD_CONSTRUCTORS \
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


#define Sword_Source_Sword_SwordCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwordCharacter(ASwordCharacter&&); \
	NO_API ASwordCharacter(const ASwordCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwordCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwordCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwordCharacter)


#define Sword_Source_Sword_SwordCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASwordCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASwordCharacter, FollowCamera); }


#define Sword_Source_Sword_SwordCharacter_h_9_PROLOG
#define Sword_Source_Sword_SwordCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_SwordCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_SwordCharacter_h_12_RPC_WRAPPERS \
	Sword_Source_Sword_SwordCharacter_h_12_INCLASS \
	Sword_Source_Sword_SwordCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sword_Source_Sword_SwordCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_SwordCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_SwordCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Sword_Source_Sword_SwordCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Sword_Source_Sword_SwordCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sword_Source_Sword_SwordCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
