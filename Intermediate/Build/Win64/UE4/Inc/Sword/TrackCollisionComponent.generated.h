// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SWORD_TrackCollisionComponent_generated_h
#error "TrackCollisionComponent.generated.h already included, missing '#pragma once' in TrackCollisionComponent.h"
#endif
#define SWORD_TrackCollisionComponent_generated_h

#define Sword_Source_Sword_TrackCollisionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTrace) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InTraceChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartTrace(EObjectTypeQuery(Z_Param_InTraceChannel)); \
		P_NATIVE_END; \
	}


#define Sword_Source_Sword_TrackCollisionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndTrace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartTrace) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InTraceChannel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartTrace(EObjectTypeQuery(Z_Param_InTraceChannel)); \
		P_NATIVE_END; \
	}


#define Sword_Source_Sword_TrackCollisionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrackCollisionComponent(); \
	friend SWORD_API class UClass* Z_Construct_UClass_UTrackCollisionComponent(); \
public: \
	DECLARE_CLASS(UTrackCollisionComponent, UBoxComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(UTrackCollisionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Sword_Source_Sword_TrackCollisionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTrackCollisionComponent(); \
	friend SWORD_API class UClass* Z_Construct_UClass_UTrackCollisionComponent(); \
public: \
	DECLARE_CLASS(UTrackCollisionComponent, UBoxComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Sword"), NO_API) \
	DECLARE_SERIALIZER(UTrackCollisionComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Sword_Source_Sword_TrackCollisionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackCollisionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackCollisionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackCollisionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackCollisionComponent(UTrackCollisionComponent&&); \
	NO_API UTrackCollisionComponent(const UTrackCollisionComponent&); \
public:


#define Sword_Source_Sword_TrackCollisionComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTrackCollisionComponent(UTrackCollisionComponent&&); \
	NO_API UTrackCollisionComponent(const UTrackCollisionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackCollisionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackCollisionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackCollisionComponent)


#define Sword_Source_Sword_TrackCollisionComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define Sword_Source_Sword_TrackCollisionComponent_h_12_PROLOG
#define Sword_Source_Sword_TrackCollisionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_TrackCollisionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_TrackCollisionComponent_h_15_RPC_WRAPPERS \
	Sword_Source_Sword_TrackCollisionComponent_h_15_INCLASS \
	Sword_Source_Sword_TrackCollisionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sword_Source_Sword_TrackCollisionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sword_Source_Sword_TrackCollisionComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Sword_Source_Sword_TrackCollisionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Sword_Source_Sword_TrackCollisionComponent_h_15_INCLASS_NO_PURE_DECLS \
	Sword_Source_Sword_TrackCollisionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sword_Source_Sword_TrackCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
