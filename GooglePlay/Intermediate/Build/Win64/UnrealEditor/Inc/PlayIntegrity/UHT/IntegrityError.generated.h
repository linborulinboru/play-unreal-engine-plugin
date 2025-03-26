// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntegrityError.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLAYINTEGRITY_IntegrityError_generated_h
#error "IntegrityError.generated.h already included, missing '#pragma once' in IntegrityError.h"
#endif
#define PLAYINTEGRITY_IntegrityError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityError_h


#define FOREACH_ENUM_EINTEGRITYERRORCODE(op) \
	op(EIntegrityErrorCode::Integrity_NO_ERROR) \
	op(EIntegrityErrorCode::Integrity_API_NOT_AVAILABLE) \
	op(EIntegrityErrorCode::Integrity_PLAY_STORE_NOT_FOUND) \
	op(EIntegrityErrorCode::Integrity_NETWORK_ERROR) \
	op(EIntegrityErrorCode::Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND) \
	op(EIntegrityErrorCode::Integrity_APP_NOT_INSTALLED) \
	op(EIntegrityErrorCode::Integrity_PLAY_SERVICES_NOT_FOUND) \
	op(EIntegrityErrorCode::Integrity_APP_UID_MISMATCH) \
	op(EIntegrityErrorCode::Integrity_TOO_MANY_REQUESTS) \
	op(EIntegrityErrorCode::Integrity_CANNOT_BIND_TO_SERVICE) \
	op(EIntegrityErrorCode::Integrity_NONCE_TOO_SHORT) \
	op(EIntegrityErrorCode::Integrity_NONCE_TOO_LONG) \
	op(EIntegrityErrorCode::Integrity_GOOGLE_SERVER_UNAVAILABLE) \
	op(EIntegrityErrorCode::Integrity_NONCE_IS_NOT_BASE64) \
	op(EIntegrityErrorCode::Integrity_PLAY_STORE_VERSION_OUTDATED) \
	op(EIntegrityErrorCode::Integrity_PLAY_SERVICES_VERSION_OUTDATED) \
	op(EIntegrityErrorCode::Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID) \
	op(EIntegrityErrorCode::Integrity_CLIENT_TRANSIENT_ERROR) \
	op(EIntegrityErrorCode::Integrity_INTERNAL_ERROR) \
	op(EIntegrityErrorCode::Integrity_INITIALIZATION_NEEDED) \
	op(EIntegrityErrorCode::Integrity_INITIALIZATION_FAILED) \
	op(EIntegrityErrorCode::Integrity_INVALID_ARGUMENT) \
	op(EIntegrityErrorCode::Integrity_UNKNOWN) \
	op(EIntegrityErrorCode::Integrity_REQUEST_CANCELED) 

enum class EIntegrityErrorCode : uint8;
template<> struct TIsUEnumClass<EIntegrityErrorCode> { enum { Value = true }; };
template<> PLAYINTEGRITY_API UEnum* StaticEnum<EIntegrityErrorCode>();

#define FOREACH_ENUM_ESTANDARDINTEGRITYERRORCODE(op) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_NO_ERROR) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_API_NOT_AVAILABLE) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_NOT_FOUND) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_NETWORK_ERROR) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_APP_NOT_INSTALLED) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_NOT_FOUND) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_APP_UID_MISMATCH) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_TOO_MANY_REQUESTS) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_CANNOT_BIND_TO_SERVICE) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_VERSION_OUTDATED) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_HASH_TOO_LONG) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_CLIENT_TRANSIENT_ERROR) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_INTERNAL_ERROR) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_NEEDED) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_FAILED) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_INVALID_ARGUMENT) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_UNKNOWN) \
	op(EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_CANCELED) 

enum class EStandardIntegrityErrorCode : uint8;
template<> struct TIsUEnumClass<EStandardIntegrityErrorCode> { enum { Value = true }; };
template<> PLAYINTEGRITY_API UEnum* StaticEnum<EStandardIntegrityErrorCode>();

#define FOREACH_ENUM_EINTEGRITYDIALOGRESPONSECODE(op) \
	op(EIntegrityDialogResponseCode::IntegrityDialog_UNAVAILABLE) \
	op(EIntegrityDialogResponseCode::IntegrityDialog_FAILED) \
	op(EIntegrityDialogResponseCode::IntegrityDialog_CANCELED) \
	op(EIntegrityDialogResponseCode::IntegrityDialog_SUCCESSFUL) \
	op(EIntegrityDialogResponseCode::IntegrityDialog_UNKNOWN) 

enum class EIntegrityDialogResponseCode : uint8;
template<> struct TIsUEnumClass<EIntegrityDialogResponseCode> { enum { Value = true }; };
template<> PLAYINTEGRITY_API UEnum* StaticEnum<EIntegrityDialogResponseCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
