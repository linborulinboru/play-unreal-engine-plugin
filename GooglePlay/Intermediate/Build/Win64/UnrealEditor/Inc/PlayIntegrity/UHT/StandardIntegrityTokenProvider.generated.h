// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StandardIntegrityTokenProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStandardIntegrityToken;
enum class EStandardIntegrityErrorCode : uint8;
struct FStandardIntegrityTokenRequest;
#ifdef PLAYINTEGRITY_StandardIntegrityTokenProvider_generated_h
#error "StandardIntegrityTokenProvider.generated.h already included, missing '#pragma once' in StandardIntegrityTokenProvider.h"
#endif
#define PLAYINTEGRITY_StandardIntegrityTokenProvider_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_43_DELEGATE \
PLAYINTEGRITY_API void FStandardRequestOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& StandardRequestOperationCompletedDelegate, EStandardIntegrityErrorCode Error, UStandardIntegrityToken* Response);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequest);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStandardIntegrityTokenProvider(); \
	friend struct Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics; \
public: \
	DECLARE_CLASS(UStandardIntegrityTokenProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayIntegrity"), NO_API) \
	DECLARE_SERIALIZER(UStandardIntegrityTokenProvider)


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStandardIntegrityTokenProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStandardIntegrityTokenProvider(UStandardIntegrityTokenProvider&&); \
	UStandardIntegrityTokenProvider(const UStandardIntegrityTokenProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStandardIntegrityTokenProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStandardIntegrityTokenProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStandardIntegrityTokenProvider) \
	NO_API virtual ~UStandardIntegrityTokenProvider();


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_48_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINTEGRITY_API UClass* StaticClass<class UStandardIntegrityTokenProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
