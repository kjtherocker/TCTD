// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/TowerNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerNode() {}
// Cross Module References
	TCTD_API UClass* Z_Construct_UClass_ATowerNode_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_ATowerNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TCTD();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATowerNode::StaticRegisterNativesATowerNode()
	{
	}
	UClass* Z_Construct_UClass_ATowerNode_NoRegister()
	{
		return ATowerNode::StaticClass();
	}
	struct Z_Construct_UClass_ATowerNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TowerNode.h" },
		{ "ModuleRelativePath", "TowerNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerNode_Statics::NewProp_Selector_MetaData[] = {
		{ "Category", "TowerNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerNode_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerNode, Selector), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerNode_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::NewProp_Selector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh_MetaData[] = {
		{ "Category", "TowerNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerNode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh = { "m_Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerNode, m_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerNode_Statics::NewProp_Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerNode_Statics::NewProp_m_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerNode_Statics::ClassParams = {
		&ATowerNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATowerNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerNode, 1580172146);
	template<> TCTD_API UClass* StaticClass<ATowerNode>()
	{
		return ATowerNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerNode(Z_Construct_UClass_ATowerNode, &ATowerNode::StaticClass, TEXT("/Script/TCTD"), TEXT("ATowerNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
