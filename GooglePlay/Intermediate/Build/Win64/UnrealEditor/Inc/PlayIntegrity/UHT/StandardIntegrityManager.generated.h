// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StandardIntegrityManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStandardIntegrityTokenProvider;
enum class EStandardIntegrityErrorCode : uint8;
struct FPrepareIntegrityTokenRequest;
#ifdef PLAYINTEGRITY_StandardIntegrityManager_generated_h
#error "StandardIntegrityManager.generated.h already included, missing '#pragma once' in StandardIntegrityManager.h"
#endif
#define PLAYINTEGRITY_StandardIntegrityManager_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_44_DELEGATE \
PLAYINTEGRITY_API void FPrepareIntegrityOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& PrepareIntegrityOperationCompletedDelegate, EStandardIntegrityErrorCode Error, UStandardIntegrityTokenProvider* Response);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrepareIntegrityToken);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStandardIntegrityManager(); \
	friend struct Z_Construct_UClass_UStandardIntegrityManager_Statics; \
public: \
	DECLARE_CLASS(UStandardIntegrityManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayIntegrity"), NO_API) \
	DECLARE_SERIALIZER(UStandardIntegrityManager)


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStandardIntegrityManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStandardIntegrityManager(UStandardIntegrityManager&&); \
	UStandardIntegrityManager(const UStandardIntegrityManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStandardIntegrityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStandardIntegrityManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStandardIntegrityManager) \
	NO_API virtual ~UStandardIntegrityManager();


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_49_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINTEGRITY_API UClass* StaticClass<class UStandardIntegrityManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
