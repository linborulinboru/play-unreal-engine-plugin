// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AppUpdateOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAppUpdateOptions;
enum class EAppUpdateErrorCode : uint8;
enum class EAppUpdateType : uint8;
#ifdef PLAYINAPPUPDATES_AppUpdateOptions_generated_h
#error "AppUpdateOptions.generated.h already included, missing '#pragma once' in AppUpdateOptions.h"
#endif
#define PLAYINAPPUPDATES_AppUpdateOptions_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAssetPackDeletionAllowed); \
	DECLARE_FUNCTION(execIsAssetPackDeletionAllowed); \
	DECLARE_FUNCTION(execGetAppUpdateType); \
	DECLARE_FUNCTION(execCreateAppUpdateOptions);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAppUpdateOptions(); \
	friend struct Z_Construct_UClass_UAppUpdateOptions_Statics; \
public: \
	DECLARE_CLASS(UAppUpdateOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayInAppUpdates"), NO_API) \
	DECLARE_SERIALIZER(UAppUpdateOptions)


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAppUpdateOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAppUpdateOptions(UAppUpdateOptions&&); \
	UAppUpdateOptions(const UAppUpdateOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAppUpdateOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAppUpdateOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAppUpdateOptions) \
	NO_API virtual ~UAppUpdateOptions();


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_35_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINAPPUPDATES_API UClass* StaticClass<class UAppUpdateOptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_AppUpdateOptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
