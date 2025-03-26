// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppUpdatesManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAppUpdateInfo;
class UAppUpdateOptions;
enum class EAppUpdateErrorCode : uint8;
#ifdef PLAYINAPPUPDATES_InAppUpdatesManager_generated_h
#error "InAppUpdatesManager.generated.h already included, missing '#pragma once' in InAppUpdatesManager.h"
#endif
#define PLAYINAPPUPDATES_InAppUpdatesManager_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_45_DELEGATE \
PLAYINAPPUPDATES_API void FRequestInfoOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& RequestInfoOperationCompletedDelegate, EAppUpdateErrorCode Error, UAppUpdateInfo* Response);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_56_DELEGATE \
PLAYINAPPUPDATES_API void FUpdateOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& UpdateOperationCompletedDelegate, EAppUpdateErrorCode Error);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCompleteUpdate); \
	DECLARE_FUNCTION(execStartUpdate); \
	DECLARE_FUNCTION(execRequestInfo);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppUpdatesManager(); \
	friend struct Z_Construct_UClass_UInAppUpdatesManager_Statics; \
public: \
	DECLARE_CLASS(UInAppUpdatesManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayInAppUpdates"), NO_API) \
	DECLARE_SERIALIZER(UInAppUpdatesManager)


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInAppUpdatesManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInAppUpdatesManager(UInAppUpdatesManager&&); \
	UInAppUpdatesManager(const UInAppUpdatesManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInAppUpdatesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppUpdatesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInAppUpdatesManager) \
	NO_API virtual ~UInAppUpdatesManager();


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_65_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINAPPUPDATES_API UClass* StaticClass<class UInAppUpdatesManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
