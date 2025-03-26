// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntegrityTokenResponse.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EIntegrityDialogResponseCode : uint8;
enum class EIntegrityErrorCode : uint8;
#ifdef PLAYINTEGRITY_IntegrityTokenResponse_generated_h
#error "IntegrityTokenResponse.generated.h already included, missing '#pragma once' in IntegrityTokenResponse.h"
#endif
#define PLAYINTEGRITY_IntegrityTokenResponse_generated_h

#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_39_DELEGATE \
PLAYINTEGRITY_API void FShowDialogOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ShowDialogOperationCompletedDelegate, EIntegrityErrorCode Error, EIntegrityDialogResponseCode Response);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowDialog);


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIntegrityTokenResponse(); \
	friend struct Z_Construct_UClass_UIntegrityTokenResponse_Statics; \
public: \
	DECLARE_CLASS(UIntegrityTokenResponse, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlayIntegrity"), NO_API) \
	DECLARE_SERIALIZER(UIntegrityTokenResponse)


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIntegrityTokenResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIntegrityTokenResponse(UIntegrityTokenResponse&&); \
	UIntegrityTokenResponse(const UIntegrityTokenResponse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIntegrityTokenResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIntegrityTokenResponse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIntegrityTokenResponse) \
	NO_API virtual ~UIntegrityTokenResponse();


#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_45_PROLOG
#define FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_INCLASS_NO_PURE_DECLS \
	FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLAYINTEGRITY_API UClass* StaticClass<class UIntegrityTokenResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
