// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/Enemy_Large.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Large() {}
// Cross Module References
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Large_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Large();
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Base();
	UPackage* Z_Construct_UPackage__Script_TCTD();
// End Cross Module References
	void AEnemy_Large::StaticRegisterNativesAEnemy_Large()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_Large_NoRegister()
	{
		return AEnemy_Large::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Large_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Large_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Large_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy_Large.h" },
		{ "ModuleRelativePath", "Enemy_Large.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Large_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Large>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Large_Statics::ClassParams = {
		&AEnemy_Large::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Large_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Large_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Large()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Large_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Large, 517751046);
	template<> TCTD_API UClass* StaticClass<AEnemy_Large>()
	{
		return AEnemy_Large::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Large(Z_Construct_UClass_AEnemy_Large, &AEnemy_Large::StaticClass, TEXT("/Script/TCTD"), TEXT("AEnemy_Large"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Large);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
