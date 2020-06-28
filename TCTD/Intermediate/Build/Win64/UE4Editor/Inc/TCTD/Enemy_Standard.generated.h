// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCTD_Enemy_Standard_generated_h
#error "Enemy_Standard.generated.h already included, missing '#pragma once' in Enemy_Standard.h"
#endif
#define TCTD_Enemy_Standard_generated_h

#define TCTD_Source_TCTD_Enemy_Standard_h_12_SPARSE_DATA
#define TCTD_Source_TCTD_Enemy_Standard_h_12_RPC_WRAPPERS
#define TCTD_Source_TCTD_Enemy_Standard_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TCTD_Source_TCTD_Enemy_Standard_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Standard(); \
	friend struct Z_Construct_UClass_AEnemy_Standard_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Standard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Standard)


#define TCTD_Source_TCTD_Enemy_Standard_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Standard(); \
	friend struct Z_Construct_UClass_AEnemy_Standard_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Standard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Standard)


#define TCTD_Source_TCTD_Enemy_Standard_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Standard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Standard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Standard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Standard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Standard(AEnemy_Standard&&); \
	NO_API AEnemy_Standard(const AEnemy_Standard&); \
public:


#define TCTD_Source_TCTD_Enemy_Standard_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Standard(AEnemy_Standard&&); \
	NO_API AEnemy_Standard(const AEnemy_Standard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Standard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Standard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Standard)


#define TCTD_Source_TCTD_Enemy_Standard_h_12_PRIVATE_PROPERTY_OFFSET
#define TCTD_Source_TCTD_Enemy_Standard_h_9_PROLOG
#define TCTD_Source_TCTD_Enemy_Standard_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_Enemy_Standard_h_12_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_Enemy_Standard_h_12_SPARSE_DATA \
	TCTD_Source_TCTD_Enemy_Standard_h_12_RPC_WRAPPERS \
	TCTD_Source_TCTD_Enemy_Standard_h_12_INCLASS \
	TCTD_Source_TCTD_Enemy_Standard_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTD_Source_TCTD_Enemy_Standard_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_Enemy_Standard_h_12_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_Enemy_Standard_h_12_SPARSE_DATA \
	TCTD_Source_TCTD_Enemy_Standard_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTD_Source_TCTD_Enemy_Standard_h_12_INCLASS_NO_PURE_DECLS \
	TCTD_Source_TCTD_Enemy_Standard_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTD_API UClass* StaticClass<class AEnemy_Standard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTD_Source_TCTD_Enemy_Standard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
