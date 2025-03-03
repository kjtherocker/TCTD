// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/Enemy_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Base() {}
// Cross Module References
	TCTD_API UFunction* Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TCTD();
	TCTD_API UFunction* Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature();
	TCTD_API UFunction* Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature();
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Base_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Base();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics
	{
		struct _Script_TCTD_eventEnemyDeath_Parms
		{
			FString Enemyname;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Enemyname;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::NewProp_Enemyname = { "Enemyname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TCTD_eventEnemyDeath_Parms, Enemyname), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::NewProp_Enemyname,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCTD, nullptr, "EnemyDeath__DelegateSignature", nullptr, nullptr, sizeof(_Script_TCTD_eventEnemyDeath_Parms), Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCTD, nullptr, "EnemyGotToGoal__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics
	{
		struct _Script_TCTD_eventEnemyMoney_Parms
		{
			float Enemymoney;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Enemymoney;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::NewProp_Enemymoney = { "Enemymoney", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TCTD_eventEnemyMoney_Parms, Enemymoney), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::NewProp_Enemymoney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TCTD, nullptr, "EnemyMoney__DelegateSignature", nullptr, nullptr, sizeof(_Script_TCTD_eventEnemyMoney_Parms), Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AEnemy_Base::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_aDamageTaken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_aDamageTaken);
		P_NATIVE_END;
	}
	void AEnemy_Base::StaticRegisterNativesAEnemy_Base()
	{
		UClass* Class = AEnemy_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &AEnemy_Base::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics
	{
		struct Enemy_Base_eventTakeDamage_Parms
		{
			int32 aDamageTaken;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_aDamageTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::NewProp_aDamageTaken = { "aDamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_Base_eventTakeDamage_Parms, aDamageTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::NewProp_aDamageTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Base, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Enemy_Base_eventTakeDamage_Parms), Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Base_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Base_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_Base_NoRegister()
	{
		return AEnemy_Base::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceLeftInLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceLeftInLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWaypointDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllWaypointDistances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemySpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemySpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoToWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoToWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToNextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToNextWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyGoalEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnemyGoalEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyMoneyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnemyMoneyEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyDeathEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnemyDeathEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Base_TakeDamage, "TakeDamage" }, // 1582874391
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy_Base.h" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceLeftInLevel_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceLeftInLevel = { "DistanceLeftInLevel", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, DistanceLeftInLevel), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceLeftInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceLeftInLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_AllWaypointDistances_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_AllWaypointDistances = { "AllWaypointDistances", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, AllWaypointDistances), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_AllWaypointDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_AllWaypointDistances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemySpeed_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemySpeed = { "EnemySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, EnemySpeed), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemySpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_GoToWaypoint_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_GoToWaypoint = { "GoToWaypoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, GoToWaypoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_GoToWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_GoToWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceToNextWaypoint_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceToNextWaypoint = { "DistanceToNextWaypoint", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, DistanceToNextWaypoint), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceToNextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceToNextWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Enemy_Base" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyGoalEvent_MetaData[] = {
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyGoalEvent = { "EnemyGoalEvent", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, EnemyGoalEvent), Z_Construct_UDelegateFunction_TCTD_EnemyGotToGoal__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyGoalEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyGoalEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyMoneyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Enemy_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyMoneyEvent = { "EnemyMoneyEvent", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, EnemyMoneyEvent), Z_Construct_UDelegateFunction_TCTD_EnemyMoney__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyMoneyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyMoneyEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyDeathEvent_MetaData[] = {
		{ "Comment", "//Event\x09\n" },
		{ "ModuleRelativePath", "Enemy_Base.h" },
		{ "ToolTip", "Event" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyDeathEvent = { "EnemyDeathEvent", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Base, EnemyDeathEvent), Z_Construct_UDelegateFunction_TCTD_EnemyDeath__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyDeathEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyDeathEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceLeftInLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_AllWaypointDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemySpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_GoToWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_DistanceToNextWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyGoalEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyMoneyEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Base_Statics::NewProp_EnemyDeathEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Base_Statics::ClassParams = {
		&AEnemy_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Base, 811931017);
	template<> TCTD_API UClass* StaticClass<AEnemy_Base>()
	{
		return AEnemy_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Base(Z_Construct_UClass_AEnemy_Base, &AEnemy_Base::StaticClass, TEXT("/Script/TCTD"), TEXT("AEnemy_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
