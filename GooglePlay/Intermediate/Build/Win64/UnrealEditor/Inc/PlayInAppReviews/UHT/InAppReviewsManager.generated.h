// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppReviewsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInAppReviewErrorCode : uint8;
#ifdef PLAYINAPPREVIEWS_InAppReviewsManager_generated_h
#error "InAppReviewsManager.generated.h already included, missing '#pragma once' in InAppReviewsManager.h"
#endif
#define PLAYINAPPREVIEWS_InAppReviewsManager_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_40_DELEGATE \
PLAYINAPPREVIEWS_API void FReviewOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ReviewOperationCompletedDelegate, EInAppReviewErrorCode Error);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLaunchReviewFlow); \
	DECLARE_FUNCTION(execRequestReviewFlow);


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppReviewsManager(); \
	friend struct Z_Construct_UClass_UInAppReviewsManager_Statics; \
public: \
	DECLARE_CLASS(UInAppReviewsManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayInAppReviews"), NO_API) \
	DECLARE_SERIALIZER(UInAppReviewsManager)


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInAppReviewsManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInAppReviewsManager(UInAppReviewsManager&&); \
	UInAppReviewsManager(const UInAppReviewsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInAppReviewsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppReviewsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInAppReviewsManager) \
	NO_API virtual ~UInAppReviewsManager();


#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_49_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINAPPREVIEWS_API UClass* StaticClass<class UInAppReviewsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
