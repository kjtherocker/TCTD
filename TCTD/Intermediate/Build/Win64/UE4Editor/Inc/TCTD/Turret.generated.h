// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TCTD_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define TCTD_Turret_generated_h

#define TCTD_Source_TCTD_Turret_h_15_SPARSE_DATA
#define TCTD_Source_TCTD_Turret_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execEnemyWasKilled);


#define TCTD_Source_TCTD_Turret_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execEnemyWasKilled);


#define TCTD_Source_TCTD_Turret_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define TCTD_Source_TCTD_Turret_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define TCTD_Source_TCTD_Turret_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public:


#define TCTD_Source_TCTD_Turret_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret)


#define TCTD_Source_TCTD_Turret_h_15_PRIVATE_PROPERTY_OFFSET
#define TCTD_Source_TCTD_Turret_h_12_PROLOG
#define TCTD_Source_TCTD_Turret_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_Turret_h_15_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_Turret_h_15_SPARSE_DATA \
	TCTD_Source_TCTD_Turret_h_15_RPC_WRAPPERS \
	TCTD_Source_TCTD_Turret_h_15_INCLASS \
	TCTD_Source_TCTD_Turret_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTD_Source_TCTD_Turret_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_Turret_h_15_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_Turret_h_15_SPARSE_DATA \
	TCTD_Source_TCTD_Turret_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTD_Source_TCTD_Turret_h_15_INCLASS_NO_PURE_DECLS \
	TCTD_Source_TCTD_Turret_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTD_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTD_Source_TCTD_Turret_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
