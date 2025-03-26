// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppUpdatesError.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYINAPPUPDATES_InAppUpdatesError_generated_h
#error "InAppUpdatesError.generated.h already included, missing '#pragma once' in InAppUpdatesError.h"
#endif
#define PLAYINAPPUPDATES_InAppUpdatesError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesError_h


#define FOREACH_ENUM_EAPPUPDATEERRORCODE(op) \
	op(EAppUpdateErrorCode::AppUpdate_NO_ERROR) \
	op(EAppUpdateErrorCode::AppUpdate_UNKNOWN_ERROR) \
	op(EAppUpdateErrorCode::AppUpdate_API_NOT_AVAILABLE) \
	op(EAppUpdateErrorCode::AppUpdate_INVALID_REQUEST) \
	op(EAppUpdateErrorCode::AppUpdate_UNAVAILABLE) \
	op(EAppUpdateErrorCode::AppUpdate_NOT_ALLOWED) \
	op(EAppUpdateErrorCode::AppUpdate_DOWNLOAD_NOT_PRESENT) \
	op(EAppUpdateErrorCode::AppUpdate_IN_PROGRESS) \
	op(EAppUpdateErrorCode::AppUpdate_PLAY_STORE_NOT_FOUND) \
	op(EAppUpdateErrorCode::AppUpdate_APP_NOT_OWNED) \
	op(EAppUpdateErrorCode::AppUpdate_INTERNAL_ERROR) \
	op(EAppUpdateErrorCode::AppUpdate_INITIALIZATION_NEEDED) \
	op(EAppUpdateErrorCode::AppUpdate_INITIALIZATION_FAILED) \
	op(EAppUpdateErrorCode::AppUpdate_REQUEST_CANCELED) 

enum class EAppUpdateErrorCode : uint8;
template<> struct TIsUEnumClass<EAppUpdateErrorCode> { enum { Value = true }; };
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateErrorCode>();

#define FOREACH_ENUM_EAPPUPDATESTATUS(op) \
	op(EAppUpdateStatus::AppUpdate_STATUS_UNKNOWN) \
	op(EAppUpdateStatus::AppUpdate_PENDING) \
	op(EAppUpdateStatus::AppUpdate_DOWNLOADING) \
	op(EAppUpdateStatus::AppUpdate_INSTALLING) \
	op(EAppUpdateStatus::AppUpdate_INSTALLED) \
	op(EAppUpdateStatus::AppUpdate_FAILED) \
	op(EAppUpdateStatus::AppUpdate_CANCELED) \
	op(EAppUpdateStatus::AppUpdate_DOWNLOADED) \
	op(EAppUpdateStatus::AppUpdate_REQUEST_INFO_PENDING) \
	op(EAppUpdateStatus::AppUpdate_REQUEST_INFO_FAILED) \
	op(EAppUpdateStatus::AppUpdate_REQUEST_INFO_COMPLETED) \
	op(EAppUpdateStatus::AppUpdate_REQUEST_START_UPDATE_PENDING) \
	op(EAppUpdateStatus::AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING) 

enum class EAppUpdateStatus : uint8;
template<> struct TIsUEnumClass<EAppUpdateStatus> { enum { Value = true }; };
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateStatus>();

#define FOREACH_ENUM_EAPPUPDATEAVAILABILITY(op) \
	op(EAppUpdateAvailability::AppUpdate_AVAILABILITY_UNKNOWN) \
	op(EAppUpdateAvailability::AppUpdate_NOT_AVAILABLE) \
	op(EAppUpdateAvailability::AppUpdate_AVAILABLE) \
	op(EAppUpdateAvailability::AppUpdate_TRIGGERED_IN_PROGRESS) 

enum class EAppUpdateAvailability : uint8;
template<> struct TIsUEnumClass<EAppUpdateAvailability> { enum { Value = true }; };
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateAvailability>();

#define FOREACH_ENUM_EAPPUPDATETYPE(op) \
	op(EAppUpdateType::AppUpdate_TYPE_UNKNOWN) \
	op(EAppUpdateType::AppUpdate_TYPE_FLEXIBLE) \
	op(EAppUpdateType::AppUpdate_TYPE_IMMEDIATE) 

enum class EAppUpdateType : uint8;
template<> struct TIsUEnumClass<EAppUpdateType> { enum { Value = true }; };
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
