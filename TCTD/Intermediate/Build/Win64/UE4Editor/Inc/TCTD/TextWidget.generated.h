// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TCTD_TextWidget_generated_h
#error "TextWidget.generated.h already included, missing '#pragma once' in TextWidget.h"
#endif
#define TCTD_TextWidget_generated_h

#define TCTD_Source_TCTD_TextWidget_h_15_SPARSE_DATA
#define TCTD_Source_TCTD_TextWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDisplayText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define TCTD_Source_TCTD_TextWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDisplayText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define TCTD_Source_TCTD_TextWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextWidget(); \
	friend struct Z_Construct_UClass_UTextWidget_Statics; \
public: \
	DECLARE_CLASS(UTextWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(UTextWidget)


#define TCTD_Source_TCTD_TextWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTextWidget(); \
	friend struct Z_Construct_UClass_UTextWidget_Statics; \
public: \
	DECLARE_CLASS(UTextWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TCTD"), NO_API) \
	DECLARE_SERIALIZER(UTextWidget)


#define TCTD_Source_TCTD_TextWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextWidget(UTextWidget&&); \
	NO_API UTextWidget(const UTextWidget&); \
public:


#define TCTD_Source_TCTD_TextWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextWidget(UTextWidget&&); \
	NO_API UTextWidget(const UTextWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextWidget)


#define TCTD_Source_TCTD_TextWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define TCTD_Source_TCTD_TextWidget_h_12_PROLOG
#define TCTD_Source_TCTD_TextWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_TextWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_TextWidget_h_15_SPARSE_DATA \
	TCTD_Source_TCTD_TextWidget_h_15_RPC_WRAPPERS \
	TCTD_Source_TCTD_TextWidget_h_15_INCLASS \
	TCTD_Source_TCTD_TextWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TCTD_Source_TCTD_TextWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TCTD_Source_TCTD_TextWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TCTD_Source_TCTD_TextWidget_h_15_SPARSE_DATA \
	TCTD_Source_TCTD_TextWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TCTD_Source_TCTD_TextWidget_h_15_INCLASS_NO_PURE_DECLS \
	TCTD_Source_TCTD_TextWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TCTD_API UClass* StaticClass<class UTextWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TCTD_Source_TCTD_TextWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
