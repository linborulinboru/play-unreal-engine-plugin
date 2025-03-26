// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StandardIntegrityToken.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EIntegrityDialogResponseCode : uint8;
enum class EStandardIntegrityErrorCode : uint8;
#ifdef PLAYINTEGRITY_StandardIntegrityToken_generated_h
#error "StandardIntegrityToken.generated.h already included, missing '#pragma once' in StandardIntegrityToken.h"
#endif
#define PLAYINTEGRITY_StandardIntegrityToken_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_41_DELEGATE \
PLAYINTEGRITY_API void FShowDialogStandardOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ShowDialogStandardOperationCompletedDelegate, EStandardIntegrityErrorCode Error, EIntegrityDialogResponseCode Response);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowDialog);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStandardIntegrityToken(); \
	friend struct Z_Construct_UClass_UStandardIntegrityToken_Statics; \
public: \
	DECLARE_CLASS(UStandardIntegrityToken, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayIntegrity"), NO_API) \
	DECLARE_SERIALIZER(UStandardIntegrityToken)


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStandardIntegrityToken(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStandardIntegrityToken(UStandardIntegrityToken&&); \
	UStandardIntegrityToken(const UStandardIntegrityToken&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStandardIntegrityToken); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStandardIntegrityToken); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStandardIntegrityToken) \
	NO_API virtual ~UStandardIntegrityToken();


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_49_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINTEGRITY_API UClass* StaticClass<class UStandardIntegrityToken>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityToken_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
