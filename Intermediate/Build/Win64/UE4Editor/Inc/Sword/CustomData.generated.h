// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORD_CustomData_generated_h
#error "CustomData.generated.h already included, missing '#pragma once' in CustomData.h"
#endif
#define SWORD_CustomData_generated_h

#define Sword_Source_Sword_CustomData_h_24_RPC_WRAPPERS
#define Sword_Source_Sword_CustomData_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Sword_Source_Sword_CustomData_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomData(); \
	friend SWORD_API class UClass* Z_Construct_UClass_UCustomData(); \
public: \
	DECLARE_CLASS(UCustomData, UAnimMetaData, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(UCustomData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Sword_Source_Sword_CustomData_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCustomData(); \
	friend SWORD_API class UClass* Z_Construct_UClass_UCustomData(); \
public: \
	DECLARE_CLASS(UCustomData, UAnimMetaData, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(UCustomData) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Sword_Source_Sword_CustomData_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomData(UCustomData&&); \
	NO_API UCustomData(const UCustomData&); \
public:


#define Sword_Source_Sword_CustomData_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomData(UCustomData&&); \
	NO_API UCustomData(const UCustomData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomData)


#define Sword_Source_Sword_CustomData_h_24_PRIVATE_PROPERTY_OFFSET
#define Sword_Source_Sword_CustomData_h_21_PROLOG
#define Sword_Source_Sword_CustomData_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_CustomData_h_24_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_CustomData_h_24_RPC_WRAPPERS \
	Sword_Source_Sword_CustomData_h_24_INCLASS \
	Sword_Source_Sword_CustomData_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sword_Source_Sword_CustomData_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_CustomData_h_24_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_CustomData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Sword_Source_Sword_CustomData_h_24_INCLASS_NO_PURE_DECLS \
	Sword_Source_Sword_CustomData_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sword_Source_Sword_CustomData_h


#define FOREACH_ENUM_EHITTYPE(op) \
	op(EHit_Inplace) \
	op(EHit_InplaceDown) \
	op(EHit_BackDown) \
	op(EHit_Floating) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
