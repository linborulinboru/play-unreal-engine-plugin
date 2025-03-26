// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayInAppReviews/Public/InAppReviewsError.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppReviewsError() {}

// Begin Cross Module References
PLAYINAPPREVIEWS_API UEnum* Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode();
PLAYINAPPREVIEWS_API UEnum* Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus();
UPackage* Z_Construct_UPackage__Script_PlayInAppReviews();
// End Cross Module References

// Begin Enum EInAppReviewErrorCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInAppReviewErrorCode;
static UEnum* EInAppReviewErrorCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInAppReviewErrorCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInAppReviewErrorCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode, (UObject*)Z_Construct_UPackage__Script_PlayInAppReviews(), TEXT("EInAppReviewErrorCode"));
	}
	return Z_Registration_Info_UEnum_EInAppReviewErrorCode.OuterSingleton;
}
template<> PLAYINAPPREVIEWS_API UEnum* StaticEnum<EInAppReviewErrorCode>()
{
	return EInAppReviewErrorCode_StaticEnum();
}
struct Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayInAppReviews\n *\n * Errors that can be encountered while using the In-App Review API.\n * This enum maps to the error codes defined in the In-App Review API in\n * https://developer.android.com/reference/native/play/core/group/review#reviewerrorcode\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppReviewsError.h" },
		{ "Review_INITIALIZATION_FAILED.Comment", "// Error initializing dependencies.\n" },
		{ "Review_INITIALIZATION_FAILED.Name", "EInAppReviewErrorCode::Review_INITIALIZATION_FAILED" },
		{ "Review_INITIALIZATION_FAILED.ToolTip", "Error initializing dependencies." },
		{ "Review_INITIALIZATION_NEEDED.Comment", "// The requested operation failed: need to call ReviewManager_init() first.\n" },
		{ "Review_INITIALIZATION_NEEDED.Name", "EInAppReviewErrorCode::Review_INITIALIZATION_NEEDED" },
		{ "Review_INITIALIZATION_NEEDED.ToolTip", "The requested operation failed: need to call ReviewManager_init() first." },
		{ "Review_INVALID_REQUEST.Comment", "// An invalid parameter was passed to the function.\n" },
		{ "Review_INVALID_REQUEST.Name", "EInAppReviewErrorCode::Review_INVALID_REQUEST" },
		{ "Review_INVALID_REQUEST.ToolTip", "An invalid parameter was passed to the function." },
		{ "Review_NO_ERROR.Comment", "// No error has occurred.\n" },
		{ "Review_NO_ERROR.Name", "EInAppReviewErrorCode::Review_NO_ERROR" },
		{ "Review_NO_ERROR.ToolTip", "No error has occurred." },
		{ "Review_PLAY_STORE_NOT_FOUND.Comment", "// The Play Store app is either not installed or not the official version.\n" },
		{ "Review_PLAY_STORE_NOT_FOUND.Name", "EInAppReviewErrorCode::Review_PLAY_STORE_NOT_FOUND" },
		{ "Review_PLAY_STORE_NOT_FOUND.ToolTip", "The Play Store app is either not installed or not the official version." },
		{ "Review_REQUEST_CANCELED.Comment", "// The request operation was canceled.\n" },
		{ "Review_REQUEST_CANCELED.Name", "EInAppReviewErrorCode::Review_REQUEST_CANCELED" },
		{ "Review_REQUEST_CANCELED.ToolTip", "The request operation was canceled." },
		{ "Review_REQUEST_FLOW_FAILED.Comment", "// ReviewManager_requestReviewFlow() failed.\n" },
		{ "Review_REQUEST_FLOW_FAILED.Name", "EInAppReviewErrorCode::Review_REQUEST_FLOW_FAILED" },
		{ "Review_REQUEST_FLOW_FAILED.ToolTip", "ReviewManager_requestReviewFlow() failed." },
		{ "Review_REQUEST_FLOW_NEEDED.Comment", "// The requested operation failed: need to call\n// ReviewManager_requestReviewFlow() first.\n" },
		{ "Review_REQUEST_FLOW_NEEDED.Name", "EInAppReviewErrorCode::Review_REQUEST_FLOW_NEEDED" },
		{ "Review_REQUEST_FLOW_NEEDED.ToolTip", "The requested operation failed: need to call\nReviewManager_requestReviewFlow() first." },
		{ "Review_UNKNOWN.Comment", "// Unknown state used for initialization.\n" },
		{ "Review_UNKNOWN.Name", "EInAppReviewErrorCode::Review_UNKNOWN" },
		{ "Review_UNKNOWN.ToolTip", "Unknown state used for initialization." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayInAppReviews\n\nErrors that can be encountered while using the In-App Review API.\nThis enum maps to the error codes defined in the In-App Review API in\nhttps://developer.android.com/reference/native/play/core/group/review#reviewerrorcode" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInAppReviewErrorCode::Review_NO_ERROR", (int64)EInAppReviewErrorCode::Review_NO_ERROR },
		{ "EInAppReviewErrorCode::Review_INITIALIZATION_NEEDED", (int64)EInAppReviewErrorCode::Review_INITIALIZATION_NEEDED },
		{ "EInAppReviewErrorCode::Review_INITIALIZATION_FAILED", (int64)EInAppReviewErrorCode::Review_INITIALIZATION_FAILED },
		{ "EInAppReviewErrorCode::Review_REQUEST_FLOW_NEEDED", (int64)EInAppReviewErrorCode::Review_REQUEST_FLOW_NEEDED },
		{ "EInAppReviewErrorCode::Review_REQUEST_FLOW_FAILED", (int64)EInAppReviewErrorCode::Review_REQUEST_FLOW_FAILED },
		{ "EInAppReviewErrorCode::Review_INVALID_REQUEST", (int64)EInAppReviewErrorCode::Review_INVALID_REQUEST },
		{ "EInAppReviewErrorCode::Review_PLAY_STORE_NOT_FOUND", (int64)EInAppReviewErrorCode::Review_PLAY_STORE_NOT_FOUND },
		{ "EInAppReviewErrorCode::Review_UNKNOWN", (int64)EInAppReviewErrorCode::Review_UNKNOWN },
		{ "EInAppReviewErrorCode::Review_REQUEST_CANCELED", (int64)EInAppReviewErrorCode::Review_REQUEST_CANCELED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayInAppReviews,
	nullptr,
	"EInAppReviewErrorCode",
	"EInAppReviewErrorCode",
	Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode()
{
	if (!Z_Registration_Info_UEnum_EInAppReviewErrorCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInAppReviewErrorCode.InnerSingleton, Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInAppReviewErrorCode.InnerSingleton;
}
// End Enum EInAppReviewErrorCode

// Begin Enum EInAppReviewStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInAppReviewStatus;
static UEnum* EInAppReviewStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInAppReviewStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInAppReviewStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus, (UObject*)Z_Construct_UPackage__Script_PlayInAppReviews(), TEXT("EInAppReviewStatus"));
	}
	return Z_Registration_Info_UEnum_EInAppReviewStatus.OuterSingleton;
}
template<> PLAYINAPPREVIEWS_API UEnum* StaticEnum<EInAppReviewStatus>()
{
	return EInAppReviewStatus_StaticEnum();
}
struct Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @ingroup PlayInAppReviews\n *\n * Status returned when requesting or launching the in-app review flow.\n * This enum maps to the status codes defined in the In-App Review API in\n * https://developer.android.com/reference/native/play/core/group/review#reviewstatus\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppReviewsError.h" },
		{ "Review_LAUNCH_FLOW_COMPLETED.Comment", "// ReviewManager_launchReviewFlow() asynchronous operation has finished,\n// and it will receive this status regardless of whether the user completed\n// the review or the user dismissed the dialog.\n" },
		{ "Review_LAUNCH_FLOW_COMPLETED.Name", "EInAppReviewStatus::Review_LAUNCH_FLOW_COMPLETED" },
		{ "Review_LAUNCH_FLOW_COMPLETED.ToolTip", "ReviewManager_launchReviewFlow() asynchronous operation has finished,\nand it will receive this status regardless of whether the user completed\nthe review or the user dismissed the dialog." },
		{ "Review_LAUNCH_FLOW_PENDING.Comment", "// Waiting for ReviewManager_launchReviewFlow() asynchronous operation to\n// finish.\n" },
		{ "Review_LAUNCH_FLOW_PENDING.Name", "EInAppReviewStatus::Review_LAUNCH_FLOW_PENDING" },
		{ "Review_LAUNCH_FLOW_PENDING.ToolTip", "Waiting for ReviewManager_launchReviewFlow() asynchronous operation to\nfinish." },
		{ "Review_REQUEST_FLOW_COMPLETED.Comment", "// ReviewManager_requestReviewFlow() asynchronous operation has finished.\n" },
		{ "Review_REQUEST_FLOW_COMPLETED.Name", "EInAppReviewStatus::Review_REQUEST_FLOW_COMPLETED" },
		{ "Review_REQUEST_FLOW_COMPLETED.ToolTip", "ReviewManager_requestReviewFlow() asynchronous operation has finished." },
		{ "Review_REQUEST_FLOW_PENDING.Comment", "// Waiting for ReviewManager_requestReviewFlow() asynchronous operation to\n// finish.\n" },
		{ "Review_REQUEST_FLOW_PENDING.Name", "EInAppReviewStatus::Review_REQUEST_FLOW_PENDING" },
		{ "Review_REQUEST_FLOW_PENDING.ToolTip", "Waiting for ReviewManager_requestReviewFlow() asynchronous operation to\nfinish." },
		{ "Review_STATUS_UNKNOWN.Comment", "// Unknown review status.\n" },
		{ "Review_STATUS_UNKNOWN.Name", "EInAppReviewStatus::Review_STATUS_UNKNOWN" },
		{ "Review_STATUS_UNKNOWN.ToolTip", "Unknown review status." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@ingroup PlayInAppReviews\n\nStatus returned when requesting or launching the in-app review flow.\nThis enum maps to the status codes defined in the In-App Review API in\nhttps://developer.android.com/reference/native/play/core/group/review#reviewstatus" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInAppReviewStatus::Review_STATUS_UNKNOWN", (int64)EInAppReviewStatus::Review_STATUS_UNKNOWN },
		{ "EInAppReviewStatus::Review_REQUEST_FLOW_PENDING", (int64)EInAppReviewStatus::Review_REQUEST_FLOW_PENDING },
		{ "EInAppReviewStatus::Review_REQUEST_FLOW_COMPLETED", (int64)EInAppReviewStatus::Review_REQUEST_FLOW_COMPLETED },
		{ "EInAppReviewStatus::Review_LAUNCH_FLOW_PENDING", (int64)EInAppReviewStatus::Review_LAUNCH_FLOW_PENDING },
		{ "EInAppReviewStatus::Review_LAUNCH_FLOW_COMPLETED", (int64)EInAppReviewStatus::Review_LAUNCH_FLOW_COMPLETED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PlayInAppReviews,
	nullptr,
	"EInAppReviewStatus",
	"EInAppReviewStatus",
	Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus()
{
	if (!Z_Registration_Info_UEnum_EInAppReviewStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInAppReviewStatus.InnerSingleton, Z_Construct_UEnum_PlayInAppReviews_EInAppReviewStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInAppReviewStatus.InnerSingleton;
}
// End Enum EInAppReviewStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsError_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInAppReviewErrorCode_StaticEnum, TEXT("EInAppReviewErrorCode"), &Z_Registration_Info_UEnum_EInAppReviewErrorCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2456822082U) },
		{ EInAppReviewStatus_StaticEnum, TEXT("EInAppReviewStatus"), &Z_Registration_Info_UEnum_EInAppReviewStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2668330575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsError_h_2791185864(TEXT("/Script/PlayInAppReviews"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsError_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsError_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
