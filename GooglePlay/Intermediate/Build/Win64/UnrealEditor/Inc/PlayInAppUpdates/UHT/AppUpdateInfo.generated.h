// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppUpdateInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAppUpdateOptions;
enum class EAppUpdateAvailability : uint8;
enum class EAppUpdateStatus : uint8;
#ifdef PLAYINAPPUPDATES_AppUpdateInfo_generated_h
#error "AppUpdateInfo.generated.h already included, missing '#pragma once' in AppUpdateInfo.h"
#endif
#define PLAYINAPPUPDATES_AppUpdateInfo_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsUpdateTypeAllowed); \
	DECLARE_FUNCTION(execGetTotalBytesToDownload); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execGetClientVersionStalenessDays); \
	DECLARE_FUNCTION(execGetBytesDownloaded); \
	DECLARE_FUNCTION(execGetAvailableVersionCode); \
	DECLARE_FUNCTION(execGetAvailability);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppUpdateInfo(); \
	friend struct Z_Construct_UClass_UAppUpdateInfo_Statics; \
public: \
	DECLARE_CLASS(UAppUpdateInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayInAppUpdates"), NO_API) \
	DECLARE_SERIALIZER(UAppUpdateInfo)


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppUpdateInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAppUpdateInfo(UAppUpdateInfo&&); \
	UAppUpdateInfo(const UAppUpdateInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppUpdateInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppUpdateInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppUpdateInfo) \
	NO_API virtual ~UAppUpdateInfo();


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_30_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINAPPUPDATES_API UClass* StaticClass<class UAppUpdateInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
