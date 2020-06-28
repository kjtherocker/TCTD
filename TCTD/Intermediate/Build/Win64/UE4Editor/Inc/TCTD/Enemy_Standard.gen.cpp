// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/Enemy_Standard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Standard() {}
// Cross Module References
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Standard_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_AEnemy_Standard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TCTD();
// End Cross Module References
	void AEnemy_Standard::StaticRegisterNativesAEnemy_Standard()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_Standard_NoRegister()
	{
		return AEnemy_Standard::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Standard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Standard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Standard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy_Standard.h" },
		{ "ModuleRelativePath", "Enemy_Standard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Standard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Standard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Standard_Statics::ClassParams = {
		&AEnemy_Standard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Standard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Standard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Standard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Standard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Standard, 2325642580);
	template<> TCTD_API UClass* StaticClass<AEnemy_Standard>()
	{
		return AEnemy_Standard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Standard(Z_Construct_UClass_AEnemy_Standard, &AEnemy_Standard::StaticClass, TEXT("/Script/TCTD"), TEXT("AEnemy_Standard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Standard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
