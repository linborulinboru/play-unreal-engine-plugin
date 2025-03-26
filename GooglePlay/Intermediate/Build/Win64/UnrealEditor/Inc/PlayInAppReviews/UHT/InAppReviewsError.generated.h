// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppReviewsError.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYINAPPREVIEWS_InAppReviewsError_generated_h
#error "InAppReviewsError.generated.h already included, missing '#pragma once' in InAppReviewsError.h"
#endif
#define PLAYINAPPREVIEWS_InAppReviewsError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsError_h


#define FOREACH_ENUM_EINAPPREVIEWERRORCODE(op) \
	op(EInAppReviewErrorCode::Review_NO_ERROR) \
	op(EInAppReviewErrorCode::Review_INITIALIZATION_NEEDED) \
	op(EInAppReviewErrorCode::Review_INITIALIZATION_FAILED) \
	op(EInAppReviewErrorCode::Review_REQUEST_FLOW_NEEDED) \
	op(EInAppReviewErrorCode::Review_REQUEST_FLOW_FAILED) \
	op(EInAppReviewErrorCode::Review_INVALID_REQUEST) \
	op(EInAppReviewErrorCode::Review_PLAY_STORE_NOT_FOUND) \
	op(EInAppReviewErrorCode::Review_UNKNOWN) \
	op(EInAppReviewErrorCode::Review_REQUEST_CANCELED) 

enum class EInAppReviewErrorCode : uint8;
template<> struct TIsUEnumClass<EInAppReviewErrorCode> { enum { Value = true }; };
template<> PLAYINAPPREVIEWS_API UEnum* StaticEnum<EInAppReviewErrorCode>();

#define FOREACH_ENUM_EINAPPREVIEWSTATUS(op) \
	op(EInAppReviewStatus::Review_STATUS_UNKNOWN) \
	op(EInAppReviewStatus::Review_REQUEST_FLOW_PENDING) \
	op(EInAppReviewStatus::Review_REQUEST_FLOW_COMPLETED) \
	op(EInAppReviewStatus::Review_LAUNCH_FLOW_PENDING) \
	op(EInAppReviewStatus::Review_LAUNCH_FLOW_COMPLETED) 

enum class EInAppReviewStatus : uint8;
template<> struct TIsUEnumClass<EInAppReviewStatus> { enum { Value = true }; };
template<> PLAYINAPPREVIEWS_API UEnum* StaticEnum<EInAppReviewStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
