// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntegrityManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIntegrityTokenResponse;
enum class EIntegrityErrorCode : uint8;
struct FIntegrityTokenRequest;
#ifdef PLAYINTEGRITY_IntegrityManager_generated_h
#error "IntegrityManager.generated.h already included, missing '#pragma once' in IntegrityManager.h"
#endif
#define PLAYINTEGRITY_IntegrityManager_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_43_DELEGATE \
PLAYINTEGRITY_API void FClassicRequestOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ClassicRequestOperationCompletedDelegate, EIntegrityErrorCode Error, UIntegrityTokenResponse* Response);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestIntegrityToken);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIntegrityManager(); \
	friend struct Z_Construct_UClass_UIntegrityManager_Statics; \
public: \
	DECLARE_CLASS(UIntegrityManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayIntegrity"), NO_API) \
	DECLARE_SERIALIZER(UIntegrityManager)


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIntegrityManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIntegrityManager(UIntegrityManager&&); \
	UIntegrityManager(const UIntegrityManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIntegrityManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntegrityManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIntegrityManager) \
	NO_API virtual ~UIntegrityManager();


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_48_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINTEGRITY_API UClass* StaticClass<class UIntegrityManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
