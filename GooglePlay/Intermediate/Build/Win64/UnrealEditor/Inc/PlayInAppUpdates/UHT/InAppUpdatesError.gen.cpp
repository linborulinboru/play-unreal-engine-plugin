// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayInAppUpdates/Public/InAppUpdatesError.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppUpdatesError() {}

// Begin Cross Module References
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType();
UPackage* Z_Construct_UPackage__Script_PlayInAppUpdates();
// End Cross Module References

// Begin Enum EAppUpdateErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppUpdateErrorCode;
static UEnum* EAppUpdateErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAppUpdateErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode, (UObject*)Z_Construct_UPackage__Script_PlayInAppUpdates(), TEXT("EAppUpdateErrorCode"));
	}
	return Z_Registration_Info_UEnum_EAppUpdateErrorCode.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateErrorCode>()
{
	return EAppUpdateErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AppUpdate_API_NOT_AVAILABLE.Comment", "// The in-app update API isn't available on this device.\n" },
		{ "AppUpdate_API_NOT_AVAILABLE.Name", "EAppUpdateErrorCode::AppUpdate_API_NOT_AVAILABLE" },
		{ "AppUpdate_API_NOT_AVAILABLE.ToolTip", "The in-app update API isn't available on this device." },
		{ "AppUpdate_APP_NOT_OWNED.Comment", "// The app isn't owned by any user on this device. An app is \"owned\" if it\n// has been acquired from the Play Store.\n" },
		{ "AppUpdate_APP_NOT_OWNED.Name", "EAppUpdateErrorCode::AppUpdate_APP_NOT_OWNED" },
		{ "AppUpdate_APP_NOT_OWNED.ToolTip", "The app isn't owned by any user on this device. An app is \"owned\" if it\nhas been acquired from the Play Store." },
		{ "AppUpdate_DOWNLOAD_NOT_PRESENT.Comment", "// The update has not been (fully) downloaded yet.\n" },
		{ "AppUpdate_DOWNLOAD_NOT_PRESENT.Name", "EAppUpdateErrorCode::AppUpdate_DOWNLOAD_NOT_PRESENT" },
		{ "AppUpdate_DOWNLOAD_NOT_PRESENT.ToolTip", "The update has not been (fully) downloaded yet." },
		{ "AppUpdate_IN_PROGRESS.Comment", "// The update is already in progress and there is no UI flow to resume.\n" },
		{ "AppUpdate_IN_PROGRESS.Name", "EAppUpdateErrorCode::AppUpdate_IN_PROGRESS" },
		{ "AppUpdate_IN_PROGRESS.ToolTip", "The update is already in progress and there is no UI flow to resume." },
		{ "AppUpdate_INITIALIZATION_FAILED.Comment", "// Error initializing dependencies.\n" },
		{ "AppUpdate_INITIALIZATION_FAILED.Name", "EAppUpdateErrorCode::AppUpdate_INITIALIZATION_FAILED" },
		{ "AppUpdate_INITIALIZATION_FAILED.ToolTip", "Error initializing dependencies." },
		{ "AppUpdate_INITIALIZATION_NEEDED.Comment", "// The requested operation failed: call AppUpdateManager_init() first.\n" },
		{ "AppUpdate_INITIALIZATION_NEEDED.Name", "EAppUpdateErrorCode::AppUpdate_INITIALIZATION_NEEDED" },
		{ "AppUpdate_INITIALIZATION_NEEDED.ToolTip", "The requested operation failed: call AppUpdateManager_init() first." },
		{ "AppUpdate_INTERNAL_ERROR.Comment", "// An internal error occurred.\n" },
		{ "AppUpdate_INTERNAL_ERROR.Name", "EAppUpdateErrorCode::AppUpdate_INTERNAL_ERROR" },
		{ "AppUpdate_INTERNAL_ERROR.ToolTip", "An internal error occurred." },
		{ "AppUpdate_INVALID_REQUEST.Comment", "// The function call was invalid, for example due to specifying a null\n// parameter.\n" },
		{ "AppUpdate_INVALID_REQUEST.Name", "EAppUpdateErrorCode::AppUpdate_INVALID_REQUEST" },
		{ "AppUpdate_INVALID_REQUEST.ToolTip", "The function call was invalid, for example due to specifying a null\nparameter." },
		{ "AppUpdate_NO_ERROR.Comment", "// No error has occurred.\n" },
		{ "AppUpdate_NO_ERROR.Name", "EAppUpdateErrorCode::AppUpdate_NO_ERROR" },
		{ "AppUpdate_NO_ERROR.ToolTip", "No error has occurred." },
		{ "AppUpdate_NOT_ALLOWED.Comment", "// The update isn't allowed due to the current device state, for example low\n// battery or low disk space.\n" },
		{ "AppUpdate_NOT_ALLOWED.Name", "EAppUpdateErrorCode::AppUpdate_NOT_ALLOWED" },
		{ "AppUpdate_NOT_ALLOWED.ToolTip", "The update isn't allowed due to the current device state, for example low\nbattery or low disk space." },
		{ "AppUpdate_PLAY_STORE_NOT_FOUND.Comment", "// The Play Store app is either not installed or not the official version.\n" },
		{ "AppUpdate_PLAY_STORE_NOT_FOUND.Name", "EAppUpdateErrorCode::AppUpdate_PLAY_STORE_NOT_FOUND" },
		{ "AppUpdate_PLAY_STORE_NOT_FOUND.ToolTip", "The Play Store app is either not installed or not the official version." },
		{ "AppUpdate_REQUEST_CANCELED.Comment", "// The previous request has been canceled in favor of a new one.\n" },
		{ "AppUpdate_REQUEST_CANCELED.Name", "EAppUpdateErrorCode::AppUpdate_REQUEST_CANCELED" },
		{ "AppUpdate_REQUEST_CANCELED.ToolTip", "The previous request has been canceled in favor of a new one." },
		{ "AppUpdate_UNAVAILABLE.Comment", "// The update is unavailable to this user or device.\n" },
		{ "AppUpdate_UNAVAILABLE.Name", "EAppUpdateErrorCode::AppUpdate_UNAVAILABLE" },
		{ "AppUpdate_UNAVAILABLE.ToolTip", "The update is unavailable to this user or device." },
		{ "AppUpdate_UNKNOWN_ERROR.Comment", "// An unknown error occurred.\n" },
		{ "AppUpdate_UNKNOWN_ERROR.Name", "EAppUpdateErrorCode::AppUpdate_UNKNOWN_ERROR" },
		{ "AppUpdate_UNKNOWN_ERROR.ToolTip", "An unknown error occurred." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayInAppUpdates\n *\n * Errors that can be encountered while using the Play In-App Updates API\n * This enum maps to the error codes defined in the Play In-App Updates API in\n * https://developer.android.com/reference/native/play/core/group/appupdate#appupdateerrorcode\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesError.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayInAppUpdates\n\nErrors that can be encountered while using the Play In-App Updates API\nThis enum maps to the error codes defined in the Play In-App Updates API in\nhttps://developer.android.com/reference/native/play/core/group/appupdate#appupdateerrorcode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAppUpdateErrorCode::AppUpdate_NO_ERROR", (int64)EAppUpdateErrorCode::AppUpdate_NO_ERROR },
		{ "EAppUpdateErrorCode::AppUpdate_UNKNOWN_ERROR", (int64)EAppUpdateErrorCode::AppUpdate_UNKNOWN_ERROR },
		{ "EAppUpdateErrorCode::AppUpdate_API_NOT_AVAILABLE", (int64)EAppUpdateErrorCode::AppUpdate_API_NOT_AVAILABLE },
		{ "EAppUpdateErrorCode::AppUpdate_INVALID_REQUEST", (int64)EAppUpdateErrorCode::AppUpdate_INVALID_REQUEST },
		{ "EAppUpdateErrorCode::AppUpdate_UNAVAILABLE", (int64)EAppUpdateErrorCode::AppUpdate_UNAVAILABLE },
		{ "EAppUpdateErrorCode::AppUpdate_NOT_ALLOWED", (int64)EAppUpdateErrorCode::AppUpdate_NOT_ALLOWED },
		{ "EAppUpdateErrorCode::AppUpdate_DOWNLOAD_NOT_PRESENT", (int64)EAppUpdateErrorCode::AppUpdate_DOWNLOAD_NOT_PRESENT },
		{ "EAppUpdateErrorCode::AppUpdate_IN_PROGRESS", (int64)EAppUpdateErrorCode::AppUpdate_IN_PROGRESS },
		{ "EAppUpdateErrorCode::AppUpdate_PLAY_STORE_NOT_FOUND", (int64)EAppUpdateErrorCode::AppUpdate_PLAY_STORE_NOT_FOUND },
		{ "EAppUpdateErrorCode::AppUpdate_APP_NOT_OWNED", (int64)EAppUpdateErrorCode::AppUpdate_APP_NOT_OWNED },
		{ "EAppUpdateErrorCode::AppUpdate_INTERNAL_ERROR", (int64)EAppUpdateErrorCode::AppUpdate_INTERNAL_ERROR },
		{ "EAppUpdateErrorCode::AppUpdate_INITIALIZATION_NEEDED", (int64)EAppUpdateErrorCode::AppUpdate_INITIALIZATION_NEEDED },
		{ "EAppUpdateErrorCode::AppUpdate_INITIALIZATION_FAILED", (int64)EAppUpdateErrorCode::AppUpdate_INITIALIZATION_FAILED },
		{ "EAppUpdateErrorCode::AppUpdate_REQUEST_CANCELED", (int64)EAppUpdateErrorCode::AppUpdate_REQUEST_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
	nullptr,
	"EAppUpdateErrorCode",
	"EAppUpdateErrorCode",
	Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppUpdateErrorCode.InnerSingleton, Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAppUpdateErrorCode.InnerSingleton;
}
// End Enum EAppUpdateErrorCode

// Begin Enum EAppUpdateStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppUpdateStatus;
static UEnum* EAppUpdateStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAppUpdateStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus, (UObject*)Z_Construct_UPackage__Script_PlayInAppUpdates(), TEXT("EAppUpdateStatus"));
	}
	return Z_Registration_Info_UEnum_EAppUpdateStatus.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateStatus>()
{
	return EAppUpdateStatus_StaticEnum();
}
struct Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AppUpdate_CANCELED.Comment", "// An update has been canceled.\n" },
		{ "AppUpdate_CANCELED.Name", "EAppUpdateStatus::AppUpdate_CANCELED" },
		{ "AppUpdate_CANCELED.ToolTip", "An update has been canceled." },
		{ "AppUpdate_DOWNLOADED.Comment", "// An update has been fully downloaded.\n" },
		{ "AppUpdate_DOWNLOADED.Name", "EAppUpdateStatus::AppUpdate_DOWNLOADED" },
		{ "AppUpdate_DOWNLOADED.ToolTip", "An update has been fully downloaded." },
		{ "AppUpdate_DOWNLOADING.Comment", "// Download of an update is in progress.\n" },
		{ "AppUpdate_DOWNLOADING.Name", "EAppUpdateStatus::AppUpdate_DOWNLOADING" },
		{ "AppUpdate_DOWNLOADING.ToolTip", "Download of an update is in progress." },
		{ "AppUpdate_FAILED.Comment", "// An update has failed.\n" },
		{ "AppUpdate_FAILED.Name", "EAppUpdateStatus::AppUpdate_FAILED" },
		{ "AppUpdate_FAILED.ToolTip", "An update has failed." },
		{ "AppUpdate_INSTALLED.Comment", "// An update has been successfully installed.\n" },
		{ "AppUpdate_INSTALLED.Name", "EAppUpdateStatus::AppUpdate_INSTALLED" },
		{ "AppUpdate_INSTALLED.ToolTip", "An update has been successfully installed." },
		{ "AppUpdate_INSTALLING.Comment", "// An update is being installed.\n" },
		{ "AppUpdate_INSTALLING.Name", "EAppUpdateStatus::AppUpdate_INSTALLING" },
		{ "AppUpdate_INSTALLING.ToolTip", "An update is being installed." },
		{ "AppUpdate_PENDING.Comment", "// Download of an update is pending and will be processed soon.\n" },
		{ "AppUpdate_PENDING.Name", "EAppUpdateStatus::AppUpdate_PENDING" },
		{ "AppUpdate_PENDING.ToolTip", "Download of an update is pending and will be processed soon." },
		{ "AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING.Comment", "// Request for completing an update is pending and will be processed soon.\n" },
		{ "AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING.Name", "EAppUpdateStatus::AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING" },
		{ "AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING.ToolTip", "Request for completing an update is pending and will be processed soon." },
		{ "AppUpdate_REQUEST_INFO_COMPLETED.Comment", "// Request for update info has completed.\n" },
		{ "AppUpdate_REQUEST_INFO_COMPLETED.Name", "EAppUpdateStatus::AppUpdate_REQUEST_INFO_COMPLETED" },
		{ "AppUpdate_REQUEST_INFO_COMPLETED.ToolTip", "Request for update info has completed." },
		{ "AppUpdate_REQUEST_INFO_FAILED.Comment", "// Request for update info has failed.\n" },
		{ "AppUpdate_REQUEST_INFO_FAILED.Name", "EAppUpdateStatus::AppUpdate_REQUEST_INFO_FAILED" },
		{ "AppUpdate_REQUEST_INFO_FAILED.ToolTip", "Request for update info has failed." },
		{ "AppUpdate_REQUEST_INFO_PENDING.Comment", "// Request for update info is pending and will be processed soon.\n" },
		{ "AppUpdate_REQUEST_INFO_PENDING.Name", "EAppUpdateStatus::AppUpdate_REQUEST_INFO_PENDING" },
		{ "AppUpdate_REQUEST_INFO_PENDING.ToolTip", "Request for update info is pending and will be processed soon." },
		{ "AppUpdate_REQUEST_START_UPDATE_PENDING.Comment", "// Request for starting an update is pending and will be processed soon.\n" },
		{ "AppUpdate_REQUEST_START_UPDATE_PENDING.Name", "EAppUpdateStatus::AppUpdate_REQUEST_START_UPDATE_PENDING" },
		{ "AppUpdate_REQUEST_START_UPDATE_PENDING.ToolTip", "Request for starting an update is pending and will be processed soon." },
		{ "AppUpdate_STATUS_UNKNOWN.Comment", "// The update status is unknown.\n" },
		{ "AppUpdate_STATUS_UNKNOWN.Name", "EAppUpdateStatus::AppUpdate_STATUS_UNKNOWN" },
		{ "AppUpdate_STATUS_UNKNOWN.ToolTip", "The update status is unknown." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayInAppUpdates\n *\n * Status returned when requesting an update.\n * This enum maps to the error codes defined in the Play In-App Updates API in\n * https://developer.android.com/reference/native/play/core/group/appupdate#appupdatestatus\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesError.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayInAppUpdates\n\nStatus returned when requesting an update.\nThis enum maps to the error codes defined in the Play In-App Updates API in\nhttps://developer.android.com/reference/native/play/core/group/appupdate#appupdatestatus" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAppUpdateStatus::AppUpdate_STATUS_UNKNOWN", (int64)EAppUpdateStatus::AppUpdate_STATUS_UNKNOWN },
		{ "EAppUpdateStatus::AppUpdate_PENDING", (int64)EAppUpdateStatus::AppUpdate_PENDING },
		{ "EAppUpdateStatus::AppUpdate_DOWNLOADING", (int64)EAppUpdateStatus::AppUpdate_DOWNLOADING },
		{ "EAppUpdateStatus::AppUpdate_INSTALLING", (int64)EAppUpdateStatus::AppUpdate_INSTALLING },
		{ "EAppUpdateStatus::AppUpdate_INSTALLED", (int64)EAppUpdateStatus::AppUpdate_INSTALLED },
		{ "EAppUpdateStatus::AppUpdate_FAILED", (int64)EAppUpdateStatus::AppUpdate_FAILED },
		{ "EAppUpdateStatus::AppUpdate_CANCELED", (int64)EAppUpdateStatus::AppUpdate_CANCELED },
		{ "EAppUpdateStatus::AppUpdate_DOWNLOADED", (int64)EAppUpdateStatus::AppUpdate_DOWNLOADED },
		{ "EAppUpdateStatus::AppUpdate_REQUEST_INFO_PENDING", (int64)EAppUpdateStatus::AppUpdate_REQUEST_INFO_PENDING },
		{ "EAppUpdateStatus::AppUpdate_REQUEST_INFO_FAILED", (int64)EAppUpdateStatus::AppUpdate_REQUEST_INFO_FAILED },
		{ "EAppUpdateStatus::AppUpdate_REQUEST_INFO_COMPLETED", (int64)EAppUpdateStatus::AppUpdate_REQUEST_INFO_COMPLETED },
		{ "EAppUpdateStatus::AppUpdate_REQUEST_START_UPDATE_PENDING", (int64)EAppUpdateStatus::AppUpdate_REQUEST_START_UPDATE_PENDING },
		{ "EAppUpdateStatus::AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING", (int64)EAppUpdateStatus::AppUpdate_REQUEST_COMPLETE_UPDATE_PENDING },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
	nullptr,
	"EAppUpdateStatus",
	"EAppUpdateStatus",
	Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppUpdateStatus.InnerSingleton, Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAppUpdateStatus.InnerSingleton;
}
// End Enum EAppUpdateStatus

// Begin Enum EAppUpdateAvailability
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppUpdateAvailability;
static UEnum* EAppUpdateAvailability_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateAvailability.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAppUpdateAvailability.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability, (UObject*)Z_Construct_UPackage__Script_PlayInAppUpdates(), TEXT("EAppUpdateAvailability"));
	}
	return Z_Registration_Info_UEnum_EAppUpdateAvailability.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateAvailability>()
{
	return EAppUpdateAvailability_StaticEnum();
}
struct Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AppUpdate_AVAILABILITY_UNKNOWN.Comment", "// Update availability is unknown.\n" },
		{ "AppUpdate_AVAILABILITY_UNKNOWN.Name", "EAppUpdateAvailability::AppUpdate_AVAILABILITY_UNKNOWN" },
		{ "AppUpdate_AVAILABILITY_UNKNOWN.ToolTip", "Update availability is unknown." },
		{ "AppUpdate_AVAILABLE.Comment", "// An update is available.\n" },
		{ "AppUpdate_AVAILABLE.Name", "EAppUpdateAvailability::AppUpdate_AVAILABLE" },
		{ "AppUpdate_AVAILABLE.ToolTip", "An update is available." },
		{ "AppUpdate_NOT_AVAILABLE.Comment", "// No updates are available.\n" },
		{ "AppUpdate_NOT_AVAILABLE.Name", "EAppUpdateAvailability::AppUpdate_NOT_AVAILABLE" },
		{ "AppUpdate_NOT_AVAILABLE.ToolTip", "No updates are available." },
		{ "AppUpdate_TRIGGERED_IN_PROGRESS.Comment", "// An update has been triggered by the developer and is in progress.\n" },
		{ "AppUpdate_TRIGGERED_IN_PROGRESS.Name", "EAppUpdateAvailability::AppUpdate_TRIGGERED_IN_PROGRESS" },
		{ "AppUpdate_TRIGGERED_IN_PROGRESS.ToolTip", "An update has been triggered by the developer and is in progress." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayInAppUpdates\n *\n * Availability info for an in-app update.\n * This enum maps to the error codes defined in the Play In-App Updates API in\n * https://developer.android.com/reference/native/play/core/group/appupdate#appupdateavailability\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesError.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayInAppUpdates\n\nAvailability info for an in-app update.\nThis enum maps to the error codes defined in the Play In-App Updates API in\nhttps://developer.android.com/reference/native/play/core/group/appupdate#appupdateavailability" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAppUpdateAvailability::AppUpdate_AVAILABILITY_UNKNOWN", (int64)EAppUpdateAvailability::AppUpdate_AVAILABILITY_UNKNOWN },
		{ "EAppUpdateAvailability::AppUpdate_NOT_AVAILABLE", (int64)EAppUpdateAvailability::AppUpdate_NOT_AVAILABLE },
		{ "EAppUpdateAvailability::AppUpdate_AVAILABLE", (int64)EAppUpdateAvailability::AppUpdate_AVAILABLE },
		{ "EAppUpdateAvailability::AppUpdate_TRIGGERED_IN_PROGRESS", (int64)EAppUpdateAvailability::AppUpdate_TRIGGERED_IN_PROGRESS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
	nullptr,
	"EAppUpdateAvailability",
	"EAppUpdateAvailability",
	Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateAvailability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppUpdateAvailability.InnerSingleton, Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateAvailability_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAppUpdateAvailability.InnerSingleton;
}
// End Enum EAppUpdateAvailability

// Begin Enum EAppUpdateType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppUpdateType;
static UEnum* EAppUpdateType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAppUpdateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType, (UObject*)Z_Construct_UPackage__Script_PlayInAppUpdates(), TEXT("EAppUpdateType"));
	}
	return Z_Registration_Info_UEnum_EAppUpdateType.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UEnum* StaticEnum<EAppUpdateType>()
{
	return EAppUpdateType_StaticEnum();
}
struct Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AppUpdate_TYPE_FLEXIBLE.Comment", "// Flexible update flow, where the user can still use the app while the\n// update is downloaded.\n" },
		{ "AppUpdate_TYPE_FLEXIBLE.Name", "EAppUpdateType::AppUpdate_TYPE_FLEXIBLE" },
		{ "AppUpdate_TYPE_FLEXIBLE.ToolTip", "Flexible update flow, where the user can still use the app while the\nupdate is downloaded." },
		{ "AppUpdate_TYPE_IMMEDIATE.Comment", "// Immediate update flow, where the user is unable to interact with the app\n// while the update is downloaded and installed.\n" },
		{ "AppUpdate_TYPE_IMMEDIATE.Name", "EAppUpdateType::AppUpdate_TYPE_IMMEDIATE" },
		{ "AppUpdate_TYPE_IMMEDIATE.ToolTip", "Immediate update flow, where the user is unable to interact with the app\nwhile the update is downloaded and installed." },
		{ "AppUpdate_TYPE_UNKNOWN.Comment", "// The app update type is unknown or unspecified.\n" },
		{ "AppUpdate_TYPE_UNKNOWN.Name", "EAppUpdateType::AppUpdate_TYPE_UNKNOWN" },
		{ "AppUpdate_TYPE_UNKNOWN.ToolTip", "The app update type is unknown or unspecified." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayInAppUpdates\n *\n * Methods for performing the in-app update flow. Note: regardless of the\n * method selected, the app needs to be restarted to install an update.\n * This enum maps to the error codes defined in the Play In-App Updates API in\n * https://developer.android.com/reference/native/play/core/group/appupdate#appupdatetype\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesError.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayInAppUpdates\n\nMethods for performing the in-app update flow. Note: regardless of the\nmethod selected, the app needs to be restarted to install an update.\nThis enum maps to the error codes defined in the Play In-App Updates API in\nhttps://developer.android.com/reference/native/play/core/group/appupdate#appupdatetype" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAppUpdateType::AppUpdate_TYPE_UNKNOWN", (int64)EAppUpdateType::AppUpdate_TYPE_UNKNOWN },
		{ "EAppUpdateType::AppUpdate_TYPE_FLEXIBLE", (int64)EAppUpdateType::AppUpdate_TYPE_FLEXIBLE },
		{ "EAppUpdateType::AppUpdate_TYPE_IMMEDIATE", (int64)EAppUpdateType::AppUpdate_TYPE_IMMEDIATE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
	nullptr,
	"EAppUpdateType",
	"EAppUpdateType",
	Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType()
{
	if (!Z_Registration_Info_UEnum_EAppUpdateType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppUpdateType.InnerSingleton, Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAppUpdateType.InnerSingleton;
}
// End Enum EAppUpdateType

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesError_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAppUpdateErrorCode_StaticEnum, TEXT("EAppUpdateErrorCode"), &Z_Registration_Info_UEnum_EAppUpdateErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214535262U) },
		{ EAppUpdateStatus_StaticEnum, TEXT("EAppUpdateStatus"), &Z_Registration_Info_UEnum_EAppUpdateStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 339501595U) },
		{ EAppUpdateAvailability_StaticEnum, TEXT("EAppUpdateAvailability"), &Z_Registration_Info_UEnum_EAppUpdateAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 864450816U) },
		{ EAppUpdateType_StaticEnum, TEXT("EAppUpdateType"), &Z_Registration_Info_UEnum_EAppUpdateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2094200996U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesError_h_1403354505(TEXT("/Script/PlayInAppUpdates"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesError_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesError_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
