// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/IntegrityError.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegrityError() {}

// Begin Cross Module References
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin Enum EIntegrityErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIntegrityErrorCode;
static UEnum* EIntegrityErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIntegrityErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIntegrityErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode, (UObject*)Z_Construct_UPackage__Script_PlayIntegrity(), TEXT("EIntegrityErrorCode"));
	}
	return Z_Registration_Info_UEnum_EIntegrityErrorCode.OuterSingleton;
}
template<> PLAYINTEGRITY_API UEnum* StaticEnum<EIntegrityErrorCode>()
{
	return EIntegrityErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayIntegrity\n *\n * Errors that can be encountered while using the Integrity API\n * This enum maps to the error codes defined in the Play Integrity API in\n * https://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/IntegrityErrorCode\n */" },
#endif
		{ "Integrity_API_NOT_AVAILABLE.Comment", "// Integrity API is not available.\n" },
		{ "Integrity_API_NOT_AVAILABLE.Name", "EIntegrityErrorCode::Integrity_API_NOT_AVAILABLE" },
		{ "Integrity_API_NOT_AVAILABLE.ToolTip", "Integrity API is not available." },
		{ "Integrity_APP_NOT_INSTALLED.Comment", "// The calling app is not installed.\n" },
		{ "Integrity_APP_NOT_INSTALLED.Name", "EIntegrityErrorCode::Integrity_APP_NOT_INSTALLED" },
		{ "Integrity_APP_NOT_INSTALLED.ToolTip", "The calling app is not installed." },
		{ "Integrity_APP_UID_MISMATCH.Comment", "// The calling app UID (user id) does not match the one from Package\n// Manager.\n" },
		{ "Integrity_APP_UID_MISMATCH.Name", "EIntegrityErrorCode::Integrity_APP_UID_MISMATCH" },
		{ "Integrity_APP_UID_MISMATCH.ToolTip", "The calling app UID (user id) does not match the one from Package\nManager." },
		{ "Integrity_CANNOT_BIND_TO_SERVICE.Comment", "// Binding to the service in the Play Store has failed.\n" },
		{ "Integrity_CANNOT_BIND_TO_SERVICE.Name", "EIntegrityErrorCode::Integrity_CANNOT_BIND_TO_SERVICE" },
		{ "Integrity_CANNOT_BIND_TO_SERVICE.ToolTip", "Binding to the service in the Play Store has failed." },
		{ "Integrity_CLIENT_TRANSIENT_ERROR.Comment", "// There was a transient error in the client device.\n" },
		{ "Integrity_CLIENT_TRANSIENT_ERROR.Name", "EIntegrityErrorCode::Integrity_CLIENT_TRANSIENT_ERROR" },
		{ "Integrity_CLIENT_TRANSIENT_ERROR.ToolTip", "There was a transient error in the client device." },
		{ "Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID.Comment", "// The provided cloud project number is invalid.\n" },
		{ "Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID.Name", "EIntegrityErrorCode::Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID" },
		{ "Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID.ToolTip", "The provided cloud project number is invalid." },
		{ "Integrity_GOOGLE_SERVER_UNAVAILABLE.Comment", "// Unknown internal Google server error.\n" },
		{ "Integrity_GOOGLE_SERVER_UNAVAILABLE.Name", "EIntegrityErrorCode::Integrity_GOOGLE_SERVER_UNAVAILABLE" },
		{ "Integrity_GOOGLE_SERVER_UNAVAILABLE.ToolTip", "Unknown internal Google server error." },
		{ "Integrity_INITIALIZATION_FAILED.Comment", "// There was an error initializing the Integrity API.\n" },
		{ "Integrity_INITIALIZATION_FAILED.Name", "EIntegrityErrorCode::Integrity_INITIALIZATION_FAILED" },
		{ "Integrity_INITIALIZATION_FAILED.ToolTip", "There was an error initializing the Integrity API." },
		{ "Integrity_INITIALIZATION_NEEDED.Comment", "// IntegrityManager is not initialized.\n" },
		{ "Integrity_INITIALIZATION_NEEDED.Name", "EIntegrityErrorCode::Integrity_INITIALIZATION_NEEDED" },
		{ "Integrity_INITIALIZATION_NEEDED.ToolTip", "IntegrityManager is not initialized." },
		{ "Integrity_INTERNAL_ERROR.Comment", "// Unknown internal error.\n" },
		{ "Integrity_INTERNAL_ERROR.Name", "EIntegrityErrorCode::Integrity_INTERNAL_ERROR" },
		{ "Integrity_INTERNAL_ERROR.ToolTip", "Unknown internal error." },
		{ "Integrity_INVALID_ARGUMENT.Comment", "// Invalid argument passed to the Integrity API.\n" },
		{ "Integrity_INVALID_ARGUMENT.Name", "EIntegrityErrorCode::Integrity_INVALID_ARGUMENT" },
		{ "Integrity_INVALID_ARGUMENT.ToolTip", "Invalid argument passed to the Integrity API." },
		{ "Integrity_NETWORK_ERROR.Comment", "// No available network is found.\n" },
		{ "Integrity_NETWORK_ERROR.Name", "EIntegrityErrorCode::Integrity_NETWORK_ERROR" },
		{ "Integrity_NETWORK_ERROR.ToolTip", "No available network is found." },
		{ "Integrity_NO_ERROR.Comment", "// No error has occurred.\n" },
		{ "Integrity_NO_ERROR.Name", "EIntegrityErrorCode::Integrity_NO_ERROR" },
		{ "Integrity_NO_ERROR.ToolTip", "No error has occurred." },
		{ "Integrity_NONCE_IS_NOT_BASE64.Comment", "// Nonce is not encoded as a Base64 web-safe no-wrap string.\n" },
		{ "Integrity_NONCE_IS_NOT_BASE64.Name", "EIntegrityErrorCode::Integrity_NONCE_IS_NOT_BASE64" },
		{ "Integrity_NONCE_IS_NOT_BASE64.ToolTip", "Nonce is not encoded as a Base64 web-safe no-wrap string." },
		{ "Integrity_NONCE_TOO_LONG.Comment", "// Nonce length is too long.\n" },
		{ "Integrity_NONCE_TOO_LONG.Name", "EIntegrityErrorCode::Integrity_NONCE_TOO_LONG" },
		{ "Integrity_NONCE_TOO_LONG.ToolTip", "Nonce length is too long." },
		{ "Integrity_NONCE_TOO_SHORT.Comment", "// Nonce length is too short.\n" },
		{ "Integrity_NONCE_TOO_SHORT.Name", "EIntegrityErrorCode::Integrity_NONCE_TOO_SHORT" },
		{ "Integrity_NONCE_TOO_SHORT.ToolTip", "Nonce length is too short." },
		{ "Integrity_PLAY_SERVICES_NOT_FOUND.Comment", "// Play Services is not available or version is too old.\n" },
		{ "Integrity_PLAY_SERVICES_NOT_FOUND.Name", "EIntegrityErrorCode::Integrity_PLAY_SERVICES_NOT_FOUND" },
		{ "Integrity_PLAY_SERVICES_NOT_FOUND.ToolTip", "Play Services is not available or version is too old." },
		{ "Integrity_PLAY_SERVICES_VERSION_OUTDATED.Comment", "// Play Services needs to be updated.\n" },
		{ "Integrity_PLAY_SERVICES_VERSION_OUTDATED.Name", "EIntegrityErrorCode::Integrity_PLAY_SERVICES_VERSION_OUTDATED" },
		{ "Integrity_PLAY_SERVICES_VERSION_OUTDATED.ToolTip", "Play Services needs to be updated." },
		{ "Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND.Comment", "// No Play Store account is found on device.\n" },
		{ "Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND.Name", "EIntegrityErrorCode::Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND" },
		{ "Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND.ToolTip", "No Play Store account is found on device." },
		{ "Integrity_PLAY_STORE_NOT_FOUND.Comment", "// No Play Store app is found on device or not official version is\n// installed.\n" },
		{ "Integrity_PLAY_STORE_NOT_FOUND.Name", "EIntegrityErrorCode::Integrity_PLAY_STORE_NOT_FOUND" },
		{ "Integrity_PLAY_STORE_NOT_FOUND.ToolTip", "No Play Store app is found on device or not official version is\ninstalled." },
		{ "Integrity_PLAY_STORE_VERSION_OUTDATED.Comment", "// The Play Store needs to be updated.\n" },
		{ "Integrity_PLAY_STORE_VERSION_OUTDATED.Name", "EIntegrityErrorCode::Integrity_PLAY_STORE_VERSION_OUTDATED" },
		{ "Integrity_PLAY_STORE_VERSION_OUTDATED.ToolTip", "The Play Store needs to be updated." },
		{ "Integrity_REQUEST_CANCELED.Comment", "// The previous request has been canceled in favor of a new one.\n" },
		{ "Integrity_REQUEST_CANCELED.Name", "EIntegrityErrorCode::Integrity_REQUEST_CANCELED" },
		{ "Integrity_REQUEST_CANCELED.ToolTip", "The previous request has been canceled in favor of a new one." },
		{ "Integrity_TOO_MANY_REQUESTS.Comment", "// The calling app is making too many requests to the API and hence is\n// throttled.\n" },
		{ "Integrity_TOO_MANY_REQUESTS.Name", "EIntegrityErrorCode::Integrity_TOO_MANY_REQUESTS" },
		{ "Integrity_TOO_MANY_REQUESTS.ToolTip", "The calling app is making too many requests to the API and hence is\nthrottled." },
		{ "Integrity_UNKNOWN.Comment", "// Unknown state used for initialization.\n" },
		{ "Integrity_UNKNOWN.Name", "EIntegrityErrorCode::Integrity_UNKNOWN" },
		{ "Integrity_UNKNOWN.ToolTip", "Unknown state used for initialization." },
		{ "ModuleRelativePath", "Public/IntegrityError.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayIntegrity\n\nErrors that can be encountered while using the Integrity API\nThis enum maps to the error codes defined in the Play Integrity API in\nhttps://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/IntegrityErrorCode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIntegrityErrorCode::Integrity_NO_ERROR", (int64)EIntegrityErrorCode::Integrity_NO_ERROR },
		{ "EIntegrityErrorCode::Integrity_API_NOT_AVAILABLE", (int64)EIntegrityErrorCode::Integrity_API_NOT_AVAILABLE },
		{ "EIntegrityErrorCode::Integrity_PLAY_STORE_NOT_FOUND", (int64)EIntegrityErrorCode::Integrity_PLAY_STORE_NOT_FOUND },
		{ "EIntegrityErrorCode::Integrity_NETWORK_ERROR", (int64)EIntegrityErrorCode::Integrity_NETWORK_ERROR },
		{ "EIntegrityErrorCode::Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND", (int64)EIntegrityErrorCode::Integrity_PLAY_STORE_ACCOUNT_NOT_FOUND },
		{ "EIntegrityErrorCode::Integrity_APP_NOT_INSTALLED", (int64)EIntegrityErrorCode::Integrity_APP_NOT_INSTALLED },
		{ "EIntegrityErrorCode::Integrity_PLAY_SERVICES_NOT_FOUND", (int64)EIntegrityErrorCode::Integrity_PLAY_SERVICES_NOT_FOUND },
		{ "EIntegrityErrorCode::Integrity_APP_UID_MISMATCH", (int64)EIntegrityErrorCode::Integrity_APP_UID_MISMATCH },
		{ "EIntegrityErrorCode::Integrity_TOO_MANY_REQUESTS", (int64)EIntegrityErrorCode::Integrity_TOO_MANY_REQUESTS },
		{ "EIntegrityErrorCode::Integrity_CANNOT_BIND_TO_SERVICE", (int64)EIntegrityErrorCode::Integrity_CANNOT_BIND_TO_SERVICE },
		{ "EIntegrityErrorCode::Integrity_NONCE_TOO_SHORT", (int64)EIntegrityErrorCode::Integrity_NONCE_TOO_SHORT },
		{ "EIntegrityErrorCode::Integrity_NONCE_TOO_LONG", (int64)EIntegrityErrorCode::Integrity_NONCE_TOO_LONG },
		{ "EIntegrityErrorCode::Integrity_GOOGLE_SERVER_UNAVAILABLE", (int64)EIntegrityErrorCode::Integrity_GOOGLE_SERVER_UNAVAILABLE },
		{ "EIntegrityErrorCode::Integrity_NONCE_IS_NOT_BASE64", (int64)EIntegrityErrorCode::Integrity_NONCE_IS_NOT_BASE64 },
		{ "EIntegrityErrorCode::Integrity_PLAY_STORE_VERSION_OUTDATED", (int64)EIntegrityErrorCode::Integrity_PLAY_STORE_VERSION_OUTDATED },
		{ "EIntegrityErrorCode::Integrity_PLAY_SERVICES_VERSION_OUTDATED", (int64)EIntegrityErrorCode::Integrity_PLAY_SERVICES_VERSION_OUTDATED },
		{ "EIntegrityErrorCode::Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID", (int64)EIntegrityErrorCode::Integrity_CLOUD_PROJECT_NUMBER_IS_INVALID },
		{ "EIntegrityErrorCode::Integrity_CLIENT_TRANSIENT_ERROR", (int64)EIntegrityErrorCode::Integrity_CLIENT_TRANSIENT_ERROR },
		{ "EIntegrityErrorCode::Integrity_INTERNAL_ERROR", (int64)EIntegrityErrorCode::Integrity_INTERNAL_ERROR },
		{ "EIntegrityErrorCode::Integrity_INITIALIZATION_NEEDED", (int64)EIntegrityErrorCode::Integrity_INITIALIZATION_NEEDED },
		{ "EIntegrityErrorCode::Integrity_INITIALIZATION_FAILED", (int64)EIntegrityErrorCode::Integrity_INITIALIZATION_FAILED },
		{ "EIntegrityErrorCode::Integrity_INVALID_ARGUMENT", (int64)EIntegrityErrorCode::Integrity_INVALID_ARGUMENT },
		{ "EIntegrityErrorCode::Integrity_UNKNOWN", (int64)EIntegrityErrorCode::Integrity_UNKNOWN },
		{ "EIntegrityErrorCode::Integrity_REQUEST_CANCELED", (int64)EIntegrityErrorCode::Integrity_REQUEST_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity,
	nullptr,
	"EIntegrityErrorCode",
	"EIntegrityErrorCode",
	Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode()
{
	if (!Z_Registration_Info_UEnum_EIntegrityErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIntegrityErrorCode.InnerSingleton, Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIntegrityErrorCode.InnerSingleton;
}
// End Enum EIntegrityErrorCode

// Begin Enum EStandardIntegrityErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStandardIntegrityErrorCode;
static UEnum* EStandardIntegrityErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStandardIntegrityErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStandardIntegrityErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode, (UObject*)Z_Construct_UPackage__Script_PlayIntegrity(), TEXT("EStandardIntegrityErrorCode"));
	}
	return Z_Registration_Info_UEnum_EStandardIntegrityErrorCode.OuterSingleton;
}
template<> PLAYINTEGRITY_API UEnum* StaticEnum<EStandardIntegrityErrorCode>()
{
	return EStandardIntegrityErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayIntegrity\n *\n * Errors that can be encountered while using the Integrity API\n * This enum maps to the error codes defined in the Play Integrity API in\n * https://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/StandardIntegrityErrorCode\n */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityError.h" },
		{ "StandardIntegrity_API_NOT_AVAILABLE.Comment", "// Standard Integrity API is not available.\n" },
		{ "StandardIntegrity_API_NOT_AVAILABLE.Name", "EStandardIntegrityErrorCode::StandardIntegrity_API_NOT_AVAILABLE" },
		{ "StandardIntegrity_API_NOT_AVAILABLE.ToolTip", "Standard Integrity API is not available." },
		{ "StandardIntegrity_APP_NOT_INSTALLED.Comment", "// The calling app is not installed.\n" },
		{ "StandardIntegrity_APP_NOT_INSTALLED.Name", "EStandardIntegrityErrorCode::StandardIntegrity_APP_NOT_INSTALLED" },
		{ "StandardIntegrity_APP_NOT_INSTALLED.ToolTip", "The calling app is not installed." },
		{ "StandardIntegrity_APP_UID_MISMATCH.Comment", "// The calling app UID (user id) does not match the one from Package\n// Manager.\n" },
		{ "StandardIntegrity_APP_UID_MISMATCH.Name", "EStandardIntegrityErrorCode::StandardIntegrity_APP_UID_MISMATCH" },
		{ "StandardIntegrity_APP_UID_MISMATCH.ToolTip", "The calling app UID (user id) does not match the one from Package\nManager." },
		{ "StandardIntegrity_CANNOT_BIND_TO_SERVICE.Comment", "// Binding to the service in the Play Store has failed.\n" },
		{ "StandardIntegrity_CANNOT_BIND_TO_SERVICE.Name", "EStandardIntegrityErrorCode::StandardIntegrity_CANNOT_BIND_TO_SERVICE" },
		{ "StandardIntegrity_CANNOT_BIND_TO_SERVICE.ToolTip", "Binding to the service in the Play Store has failed." },
		{ "StandardIntegrity_CLIENT_TRANSIENT_ERROR.Comment", "// There was a transient error in the client device.\n" },
		{ "StandardIntegrity_CLIENT_TRANSIENT_ERROR.Name", "EStandardIntegrityErrorCode::StandardIntegrity_CLIENT_TRANSIENT_ERROR" },
		{ "StandardIntegrity_CLIENT_TRANSIENT_ERROR.ToolTip", "There was a transient error in the client device." },
		{ "StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID.Comment", "// The provided cloud project number is invalid.\n" },
		{ "StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID.Name", "EStandardIntegrityErrorCode::StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID" },
		{ "StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID.ToolTip", "The provided cloud project number is invalid." },
		{ "StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE.Comment", "// Unknown internal Google server error.\n" },
		{ "StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE.Name", "EStandardIntegrityErrorCode::StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE" },
		{ "StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE.ToolTip", "Unknown internal Google server error." },
		{ "StandardIntegrity_INITIALIZATION_FAILED.Comment", "// There was an error initializing the Standard Integrity API\n" },
		{ "StandardIntegrity_INITIALIZATION_FAILED.Name", "EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_FAILED" },
		{ "StandardIntegrity_INITIALIZATION_FAILED.ToolTip", "There was an error initializing the Standard Integrity API" },
		{ "StandardIntegrity_INITIALIZATION_NEEDED.Comment", "// StandardIntegrityManager is not initialized.\n" },
		{ "StandardIntegrity_INITIALIZATION_NEEDED.Name", "EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_NEEDED" },
		{ "StandardIntegrity_INITIALIZATION_NEEDED.ToolTip", "StandardIntegrityManager is not initialized." },
		{ "StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID.Comment", "// The StandardIntegrityTokenProvider is invalid.\n" },
		{ "StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID.Name", "EStandardIntegrityErrorCode::StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID" },
		{ "StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID.ToolTip", "The StandardIntegrityTokenProvider is invalid." },
		{ "StandardIntegrity_INTERNAL_ERROR.Comment", "// Unknown internal error.\n" },
		{ "StandardIntegrity_INTERNAL_ERROR.Name", "EStandardIntegrityErrorCode::StandardIntegrity_INTERNAL_ERROR" },
		{ "StandardIntegrity_INTERNAL_ERROR.ToolTip", "Unknown internal error." },
		{ "StandardIntegrity_INVALID_ARGUMENT.Comment", "// Invalid argument passed to the Standard Integrity API.\n" },
		{ "StandardIntegrity_INVALID_ARGUMENT.Name", "EStandardIntegrityErrorCode::StandardIntegrity_INVALID_ARGUMENT" },
		{ "StandardIntegrity_INVALID_ARGUMENT.ToolTip", "Invalid argument passed to the Standard Integrity API." },
		{ "StandardIntegrity_NETWORK_ERROR.Comment", "// No available network is found.\n" },
		{ "StandardIntegrity_NETWORK_ERROR.Name", "EStandardIntegrityErrorCode::StandardIntegrity_NETWORK_ERROR" },
		{ "StandardIntegrity_NETWORK_ERROR.ToolTip", "No available network is found." },
		{ "StandardIntegrity_NO_ERROR.Comment", "// No error has occurred.\n" },
		{ "StandardIntegrity_NO_ERROR.Name", "EStandardIntegrityErrorCode::StandardIntegrity_NO_ERROR" },
		{ "StandardIntegrity_NO_ERROR.ToolTip", "No error has occurred." },
		{ "StandardIntegrity_PLAY_SERVICES_NOT_FOUND.Comment", "// Play Services is not available or version is too old.\n" },
		{ "StandardIntegrity_PLAY_SERVICES_NOT_FOUND.Name", "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_NOT_FOUND" },
		{ "StandardIntegrity_PLAY_SERVICES_NOT_FOUND.ToolTip", "Play Services is not available or version is too old." },
		{ "StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED.Comment", "// Play Services needs to be updated.\n" },
		{ "StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED.Name", "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED" },
		{ "StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED.ToolTip", "Play Services needs to be updated." },
		{ "StandardIntegrity_PLAY_STORE_NOT_FOUND.Comment", "// No Play Store app is found on device or not official version is\n// installed.\n" },
		{ "StandardIntegrity_PLAY_STORE_NOT_FOUND.Name", "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_NOT_FOUND" },
		{ "StandardIntegrity_PLAY_STORE_NOT_FOUND.ToolTip", "No Play Store app is found on device or not official version is\ninstalled." },
		{ "StandardIntegrity_PLAY_STORE_VERSION_OUTDATED.Comment", "// The Play Store needs to be updated.\n" },
		{ "StandardIntegrity_PLAY_STORE_VERSION_OUTDATED.Name", "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_VERSION_OUTDATED" },
		{ "StandardIntegrity_PLAY_STORE_VERSION_OUTDATED.ToolTip", "The Play Store needs to be updated." },
		{ "StandardIntegrity_REQUEST_CANCELED.Comment", "// The previous request has been canceled in favor of a new one.\n" },
		{ "StandardIntegrity_REQUEST_CANCELED.Name", "EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_CANCELED" },
		{ "StandardIntegrity_REQUEST_CANCELED.ToolTip", "The previous request has been canceled in favor of a new one." },
		{ "StandardIntegrity_REQUEST_HASH_TOO_LONG.Comment", "// The provided request hash is too long\n" },
		{ "StandardIntegrity_REQUEST_HASH_TOO_LONG.Name", "EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_HASH_TOO_LONG" },
		{ "StandardIntegrity_REQUEST_HASH_TOO_LONG.ToolTip", "The provided request hash is too long" },
		{ "StandardIntegrity_TOO_MANY_REQUESTS.Comment", "// The calling app is making too many requests to the API and hence is\n// throttled.\n" },
		{ "StandardIntegrity_TOO_MANY_REQUESTS.Name", "EStandardIntegrityErrorCode::StandardIntegrity_TOO_MANY_REQUESTS" },
		{ "StandardIntegrity_TOO_MANY_REQUESTS.ToolTip", "The calling app is making too many requests to the API and hence is\nthrottled." },
		{ "StandardIntegrity_UNKNOWN.Comment", "// Unknown state used for initialization.\n" },
		{ "StandardIntegrity_UNKNOWN.Name", "EStandardIntegrityErrorCode::StandardIntegrity_UNKNOWN" },
		{ "StandardIntegrity_UNKNOWN.ToolTip", "Unknown state used for initialization." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayIntegrity\n\nErrors that can be encountered while using the Integrity API\nThis enum maps to the error codes defined in the Play Integrity API in\nhttps://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/StandardIntegrityErrorCode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStandardIntegrityErrorCode::StandardIntegrity_NO_ERROR", (int64)EStandardIntegrityErrorCode::StandardIntegrity_NO_ERROR },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_API_NOT_AVAILABLE", (int64)EStandardIntegrityErrorCode::StandardIntegrity_API_NOT_AVAILABLE },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_NOT_FOUND", (int64)EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_NOT_FOUND },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_NETWORK_ERROR", (int64)EStandardIntegrityErrorCode::StandardIntegrity_NETWORK_ERROR },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_APP_NOT_INSTALLED", (int64)EStandardIntegrityErrorCode::StandardIntegrity_APP_NOT_INSTALLED },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_NOT_FOUND", (int64)EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_NOT_FOUND },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_APP_UID_MISMATCH", (int64)EStandardIntegrityErrorCode::StandardIntegrity_APP_UID_MISMATCH },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_TOO_MANY_REQUESTS", (int64)EStandardIntegrityErrorCode::StandardIntegrity_TOO_MANY_REQUESTS },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_CANNOT_BIND_TO_SERVICE", (int64)EStandardIntegrityErrorCode::StandardIntegrity_CANNOT_BIND_TO_SERVICE },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE", (int64)EStandardIntegrityErrorCode::StandardIntegrity_GOOGLE_SERVER_UNAVAILABLE },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_VERSION_OUTDATED", (int64)EStandardIntegrityErrorCode::StandardIntegrity_PLAY_STORE_VERSION_OUTDATED },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED", (int64)EStandardIntegrityErrorCode::StandardIntegrity_PLAY_SERVICES_VERSION_OUTDATED },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID", (int64)EStandardIntegrityErrorCode::StandardIntegrity_CLOUD_PROJECT_NUMBER_IS_INVALID },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_HASH_TOO_LONG", (int64)EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_HASH_TOO_LONG },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_CLIENT_TRANSIENT_ERROR", (int64)EStandardIntegrityErrorCode::StandardIntegrity_CLIENT_TRANSIENT_ERROR },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID", (int64)EStandardIntegrityErrorCode::StandardIntegrity_INTEGRITY_TOKEN_PROVIDER_INVALID },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_INTERNAL_ERROR", (int64)EStandardIntegrityErrorCode::StandardIntegrity_INTERNAL_ERROR },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_NEEDED", (int64)EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_NEEDED },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_FAILED", (int64)EStandardIntegrityErrorCode::StandardIntegrity_INITIALIZATION_FAILED },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_INVALID_ARGUMENT", (int64)EStandardIntegrityErrorCode::StandardIntegrity_INVALID_ARGUMENT },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_UNKNOWN", (int64)EStandardIntegrityErrorCode::StandardIntegrity_UNKNOWN },
		{ "EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_CANCELED", (int64)EStandardIntegrityErrorCode::StandardIntegrity_REQUEST_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity,
	nullptr,
	"EStandardIntegrityErrorCode",
	"EStandardIntegrityErrorCode",
	Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode()
{
	if (!Z_Registration_Info_UEnum_EStandardIntegrityErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStandardIntegrityErrorCode.InnerSingleton, Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStandardIntegrityErrorCode.InnerSingleton;
}
// End Enum EStandardIntegrityErrorCode

// Begin Enum EIntegrityDialogResponseCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIntegrityDialogResponseCode;
static UEnum* EIntegrityDialogResponseCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIntegrityDialogResponseCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIntegrityDialogResponseCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode, (UObject*)Z_Construct_UPackage__Script_PlayIntegrity(), TEXT("EIntegrityDialogResponseCode"));
	}
	return Z_Registration_Info_UEnum_EIntegrityDialogResponseCode.OuterSingleton;
}
template<> PLAYINTEGRITY_API UEnum* StaticEnum<EIntegrityDialogResponseCode>()
{
	return EIntegrityDialogResponseCode_StaticEnum();
}
struct Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayIntegrity\n *\n * Status returned when showing the integrity dialog.\n * This enum maps to the codes defined in the Play Integrity API in\n * https://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/IntegrityDialogResponseCode\n */" },
#endif
		{ "IntegrityDialog_CANCELED.Comment", "// The user was shown the Integrity Dialog, but did not interact with it.\n" },
		{ "IntegrityDialog_CANCELED.Name", "EIntegrityDialogResponseCode::IntegrityDialog_CANCELED" },
		{ "IntegrityDialog_CANCELED.ToolTip", "The user was shown the Integrity Dialog, but did not interact with it." },
		{ "IntegrityDialog_FAILED.Comment", "// An error occurred when trying to show the Integrity Dialog.\n" },
		{ "IntegrityDialog_FAILED.Name", "EIntegrityDialogResponseCode::IntegrityDialog_FAILED" },
		{ "IntegrityDialog_FAILED.ToolTip", "An error occurred when trying to show the Integrity Dialog." },
		{ "IntegrityDialog_SUCCESSFUL.Comment", "// The user was shown the Integrity Dialog, and successfully interacted with\n// it.\n" },
		{ "IntegrityDialog_SUCCESSFUL.Name", "EIntegrityDialogResponseCode::IntegrityDialog_SUCCESSFUL" },
		{ "IntegrityDialog_SUCCESSFUL.ToolTip", "The user was shown the Integrity Dialog, and successfully interacted with\nit." },
		{ "IntegrityDialog_UNAVAILABLE.Comment", "// The Integrity Dialog is unavailable.\n" },
		{ "IntegrityDialog_UNAVAILABLE.Name", "EIntegrityDialogResponseCode::IntegrityDialog_UNAVAILABLE" },
		{ "IntegrityDialog_UNAVAILABLE.ToolTip", "The Integrity Dialog is unavailable." },
		{ "IntegrityDialog_UNKNOWN.Comment", "// Unknown state used for initialization.\n" },
		{ "IntegrityDialog_UNKNOWN.Name", "EIntegrityDialogResponseCode::IntegrityDialog_UNKNOWN" },
		{ "IntegrityDialog_UNKNOWN.ToolTip", "Unknown state used for initialization." },
		{ "ModuleRelativePath", "Public/IntegrityError.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayIntegrity\n\nStatus returned when showing the integrity dialog.\nThis enum maps to the codes defined in the Play Integrity API in\nhttps://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/IntegrityDialogResponseCode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIntegrityDialogResponseCode::IntegrityDialog_UNAVAILABLE", (int64)EIntegrityDialogResponseCode::IntegrityDialog_UNAVAILABLE },
		{ "EIntegrityDialogResponseCode::IntegrityDialog_FAILED", (int64)EIntegrityDialogResponseCode::IntegrityDialog_FAILED },
		{ "EIntegrityDialogResponseCode::IntegrityDialog_CANCELED", (int64)EIntegrityDialogResponseCode::IntegrityDialog_CANCELED },
		{ "EIntegrityDialogResponseCode::IntegrityDialog_SUCCESSFUL", (int64)EIntegrityDialogResponseCode::IntegrityDialog_SUCCESSFUL },
		{ "EIntegrityDialogResponseCode::IntegrityDialog_UNKNOWN", (int64)EIntegrityDialogResponseCode::IntegrityDialog_UNKNOWN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity,
	nullptr,
	"EIntegrityDialogResponseCode",
	"EIntegrityDialogResponseCode",
	Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode()
{
	if (!Z_Registration_Info_UEnum_EIntegrityDialogResponseCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIntegrityDialogResponseCode.InnerSingleton, Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIntegrityDialogResponseCode.InnerSingleton;
}
// End Enum EIntegrityDialogResponseCode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityError_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIntegrityErrorCode_StaticEnum, TEXT("EIntegrityErrorCode"), &Z_Registration_Info_UEnum_EIntegrityErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3262675816U) },
		{ EStandardIntegrityErrorCode_StaticEnum, TEXT("EStandardIntegrityErrorCode"), &Z_Registration_Info_UEnum_EStandardIntegrityErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1327415323U) },
		{ EIntegrityDialogResponseCode_StaticEnum, TEXT("EIntegrityDialogResponseCode"), &Z_Registration_Info_UEnum_EIntegrityDialogResponseCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3150421823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityError_h_848047429(TEXT("/Script/PlayIntegrity"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityError_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityError_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
