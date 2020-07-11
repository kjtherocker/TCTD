// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TCTD/TextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextWidget() {}
// Cross Module References
	TCTD_API UClass* Z_Construct_UClass_UTextWidget_NoRegister();
	TCTD_API UClass* Z_Construct_UClass_UTextWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TCTD();
// End Cross Module References
	DEFINE_FUNCTION(UTextWidget::execSetDisplayText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_gmt_NewDisplayText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayText(Z_Param_Out_gmt_NewDisplayText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextWidget::execGetDisplayText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayText();
		P_NATIVE_END;
	}
	void UTextWidget::StaticRegisterNativesUTextWidget()
	{
		UClass* Class = UTextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayText", &UTextWidget::execGetDisplayText },
			{ "SetDisplayText", &UTextWidget::execSetDisplayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics
	{
		struct TextWidget_eventGetDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextWidget_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widgets|Text" },
		{ "Comment", "/** Retrieves FText value currently held in DisplayText */" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Retrieves FText value currently held in DisplayText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextWidget, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(TextWidget_eventGetDisplayText_Parms), Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextWidget_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextWidget_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics
	{
		struct TextWidget_eventSetDisplayText_Parms
		{
			FText gmt_NewDisplayText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gmt_NewDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_gmt_NewDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::NewProp_gmt_NewDisplayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::NewProp_gmt_NewDisplayText = { "gmt_NewDisplayText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextWidget_eventSetDisplayText_Parms, gmt_NewDisplayText), METADATA_PARAMS(Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::NewProp_gmt_NewDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::NewProp_gmt_NewDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::NewProp_gmt_NewDisplayText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widgets|Text" },
		{ "Comment", "/** Assigns passed FText to DisplayText */" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "Assigns passed FText to DisplayText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextWidget, nullptr, "SetDisplayText", nullptr, nullptr, sizeof(TextWidget_eventSetDisplayText_Parms), Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextWidget_SetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextWidget_SetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextWidget_NoRegister()
	{
		return UTextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TCTD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextWidget_GetDisplayText, "GetDisplayText" }, // 3002217898
		{ &Z_Construct_UFunction_UTextWidget_SetDisplayText, "SetDisplayText" }, // 507110250
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextWidget.h" },
		{ "ModuleRelativePath", "TextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextWidget_Statics::NewProp_DisplayText_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** FText value displayed by this widget */" },
		{ "ModuleRelativePath", "TextWidget.h" },
		{ "ToolTip", "FText value displayed by this widget" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextWidget_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTextWidget, DisplayText), METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextWidget_Statics::NewProp_DisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextWidget_Statics::ClassParams = {
		&UTextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextWidget, 3999239446);
	template<> TCTD_API UClass* StaticClass<UTextWidget>()
	{
		return UTextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextWidget(Z_Construct_UClass_UTextWidget, &UTextWidget::StaticClass, TEXT("/Script/TCTD"), TEXT("UTextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
