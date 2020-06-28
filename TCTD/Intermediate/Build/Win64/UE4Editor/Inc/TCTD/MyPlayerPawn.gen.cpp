// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/MyPlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerPawn() {}
// Cross Module References
	TCTD_API UClass* Z_Construct_UClass_AMyPlayerPawn_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_AMyPlayerPawn();
	TCTD_API UClass* Z_Construct_UClass_APlayerPawn();
	UPackage* Z_Construct_UPackage__Script_TCTD();
// End Cross Module References
	void AMyPlayerPawn::StaticRegisterNativesAMyPlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerPawn_NoRegister()
	{
		return AMyPlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayerPawn.h" },
		{ "ModuleRelativePath", "MyPlayerPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerPawn_Statics::ClassParams = {
		&AMyPlayerPawn::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerPawn, 3252083163);
	template<> TCTD_API UClass* StaticClass<AMyPlayerPawn>()
	{
		return AMyPlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerPawn(Z_Construct_UClass_AMyPlayerPawn, &AMyPlayerPawn::StaticClass, TEXT("/Script/TCTD"), TEXT("AMyPlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
