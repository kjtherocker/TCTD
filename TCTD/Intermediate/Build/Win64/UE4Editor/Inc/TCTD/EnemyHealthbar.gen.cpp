// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/EnemyHealthbar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthbar() {}
// Cross Module References
	TCTD_API UClass* Z_Construct_UClass_UEnemyHealthbar_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_UEnemyHealthbar();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_TCTD();
// End Cross Module References
	void UEnemyHealthbar::StaticRegisterNativesUEnemyHealthbar()
	{
	}
	UClass* Z_Construct_UClass_UEnemyHealthbar_NoRegister()
	{
		return UEnemyHealthbar::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyHealthbar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyHealthbar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyHealthbar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "EnemyHealthbar.h" },
		{ "ModuleRelativePath", "EnemyHealthbar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyHealthbar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyHealthbar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHealthbar_Statics::ClassParams = {
		&UEnemyHealthbar::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyHealthbar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthbar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyHealthbar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyHealthbar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyHealthbar, 3382093167);
	template<> TCTD_API UClass* StaticClass<UEnemyHealthbar>()
	{
		return UEnemyHealthbar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyHealthbar(Z_Construct_UClass_UEnemyHealthbar, &UEnemyHealthbar::StaticClass, TEXT("/Script/TCTD"), TEXT("UEnemyHealthbar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHealthbar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
