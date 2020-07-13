// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCTD_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define TCTD_PlayerPawn_generated_h

#define TCTD_Source_TCTD_PlayerPawn_h_21_SPARSE_DATA
#define TCTD_Source_TCTD_PlayerPawn_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddMoney); \
	DECLARE_FUNCTION(execEnemyWon);


#define TCTD_Source_TCTD_PlayerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddMoney); \
	DECLARE_FUNCTION(execEnemyWon);


#define TCTD_Source_TCTD_PlayerPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define TCTD_Source_TCTD_PlayerPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend struct Z_Construct_UClass_APlayerPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn)


#define TCTD_Source_TCTD_PlayerPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define TCTD_Source_TCTD_PlayerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define TCTD_Source_TCTD_PlayerPawn_h_21_PRIVATE_PROPERTY_OFFSET
#define TCTD_Source_TCTD_PlayerPawn_h_18_PROLOG
#define TCTD_Source_TCTD_PlayerPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_PlayerPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_PlayerPawn_h_21_SPARSE_DATA \
	TCTD_Source_TCTD_PlayerPawn_h_21_RPC_WRAPPERS \
	TCTD_Source_TCTD_PlayerPawn_h_21_INCLASS \
	TCTD_Source_TCTD_PlayerPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTD_Source_TCTD_PlayerPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_PlayerPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_PlayerPawn_h_21_SPARSE_DATA \
	TCTD_Source_TCTD_PlayerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTD_Source_TCTD_PlayerPawn_h_21_INCLASS_NO_PURE_DECLS \
	TCTD_Source_TCTD_PlayerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTD_API UClass* StaticClass<class APlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTD_Source_TCTD_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
