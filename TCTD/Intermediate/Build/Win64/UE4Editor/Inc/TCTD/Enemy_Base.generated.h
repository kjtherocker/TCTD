// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCTD_Enemy_Base_generated_h
#error "Enemy_Base.generated.h already included, missing '#pragma once' in Enemy_Base.h"
#endif
#define TCTD_Enemy_Base_generated_h

#define TCTD_Source_TCTD_Enemy_Base_h_16_DELEGATE \
struct _Script_TCTD_eventEnemyDeath_Parms \
{ \
	FString Enemyname; \
}; \
static inline void FEnemyDeath_DelegateWrapper(const FMulticastScriptDelegate& EnemyDeath, const FString& Enemyname) \
{ \
	_Script_TCTD_eventEnemyDeath_Parms Parms; \
	Parms.Enemyname=Enemyname; \
	EnemyDeath.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TCTD_Source_TCTD_Enemy_Base_h_15_DELEGATE \
static inline void FEnemyGotToGoal_DelegateWrapper(const FMulticastScriptDelegate& EnemyGotToGoal) \
{ \
	EnemyGotToGoal.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TCTD_Source_TCTD_Enemy_Base_h_14_DELEGATE \
struct _Script_TCTD_eventEnemyMoney_Parms \
{ \
	float Enemymoney; \
}; \
static inline void FEnemyMoney_DelegateWrapper(const FMulticastScriptDelegate& EnemyMoney, float Enemymoney) \
{ \
	_Script_TCTD_eventEnemyMoney_Parms Parms; \
	Parms.Enemymoney=Enemymoney; \
	EnemyMoney.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TCTD_Source_TCTD_Enemy_Base_h_23_SPARSE_DATA
#define TCTD_Source_TCTD_Enemy_Base_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define TCTD_Source_TCTD_Enemy_Base_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define TCTD_Source_TCTD_Enemy_Base_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define TCTD_Source_TCTD_Enemy_Base_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Base(); \
	friend struct Z_Construct_UClass_AEnemy_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Base)


#define TCTD_Source_TCTD_Enemy_Base_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public:


#define TCTD_Source_TCTD_Enemy_Base_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Base(AEnemy_Base&&); \
	NO_API AEnemy_Base(const AEnemy_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Base)


#define TCTD_Source_TCTD_Enemy_Base_h_23_PRIVATE_PROPERTY_OFFSET
#define TCTD_Source_TCTD_Enemy_Base_h_20_PROLOG
#define TCTD_Source_TCTD_Enemy_Base_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_Enemy_Base_h_23_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_Enemy_Base_h_23_SPARSE_DATA \
	TCTD_Source_TCTD_Enemy_Base_h_23_RPC_WRAPPERS \
	TCTD_Source_TCTD_Enemy_Base_h_23_INCLASS \
	TCTD_Source_TCTD_Enemy_Base_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTD_Source_TCTD_Enemy_Base_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_Enemy_Base_h_23_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_Enemy_Base_h_23_SPARSE_DATA \
	TCTD_Source_TCTD_Enemy_Base_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTD_Source_TCTD_Enemy_Base_h_23_INCLASS_NO_PURE_DECLS \
	TCTD_Source_TCTD_Enemy_Base_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTD_API UClass* StaticClass<class AEnemy_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTD_Source_TCTD_Enemy_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
