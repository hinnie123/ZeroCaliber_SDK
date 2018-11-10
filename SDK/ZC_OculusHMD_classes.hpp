#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OculusHMD.DeprecatedGearVRControllerComponent
// 0x0010 (0x0250 - 0x0240)
class UDeprecatedGearVRControllerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.DeprecatedGearVRControllerComponent");
		return ptr;
	}


	class UMotionControllerComponent* GetMotionController();
	class UStaticMeshComponent* GetControllerMesh();
};


// Class OculusHMD.OculusBoundaryComponent
// 0x0038 (0x0128 - 0x00F0)
class UOculusBoundaryComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnOuterBoundaryTriggered;                                 // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOuterBoundaryReturned;                                  // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0110(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusBoundaryComponent");
		return ptr;
	}


	bool SetOuterBoundaryColor(const struct FColor& InBoundaryColor);
	bool ResetOuterBoundaryColor();
	bool RequestOuterBoundaryVisible(bool BoundaryVisible);
	void OculusOuterBoundaryTriggeredEvent__DelegateSignature(TArray<struct FBoundaryTestResult> OuterBoundsInteractionList);
	void OculusOuterBoundaryReturnedEvent__DelegateSignature();
	bool IsOuterBoundaryTriggered();
	bool IsOuterBoundaryDisplayed();
	struct FBoundaryTestResult GetTriggeredPlayAreaInfo(ETrackedDeviceType DeviceType);
	TArray<struct FBoundaryTestResult> GetTriggeredOuterBoundaryInfo();
	TArray<struct FVector> GetPlayAreaPoints();
	struct FVector GetPlayAreaDimensions();
	TArray<struct FVector> GetOuterBoundaryPoints();
	struct FVector GetOuterBoundaryDimensions();
	struct FBoundaryTestResult CheckIfPointWithinPlayArea(const struct FVector& Point);
	struct FBoundaryTestResult CheckIfPointWithinOuterBounds(const struct FVector& Point);
};


// Class OculusHMD.OculusFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowLoadingSplashScreen();
	void STATIC_ShowLoadingIcon(class UTexture2D* Texture);
	void STATIC_SetTiledMultiresLevel(ETiledMultiResLevel Level);
	void STATIC_SetPositionScale3D(const struct FVector& PosScale3D);
	void STATIC_SetLoadingSplashParams(const struct FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg);
	void STATIC_SetDisplayFrequency(float RequestedFrequency);
	void STATIC_SetCPUAndGPULevels(int CPULevel, int GPULevel);
	void STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options);
	void STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options);
	bool STATIC_IsPowerLevelStateThrottled();
	bool STATIC_IsPowerLevelStateMinimum();
	bool STATIC_IsLoadingIconEnabled();
	bool STATIC_IsDeviceTracked(ETrackedDeviceType DeviceType);
	bool STATIC_IsControllerActive();
	bool STATIC_IsAutoLoadingSplashScreenEnabled();
	void STATIC_HideLoadingSplashScreen(bool bClear);
	void STATIC_HideLoadingIcon();
	bool STATIC_HasSystemOverlayPresent();
	bool STATIC_HasInputFocus();
	bool STATIC_GetUserProfile(struct FHmdUserProfile* Profile);
	ETiledMultiResLevel STATIC_GetTiledMultiresLevel();
	float STATIC_GetTemperatureInCelsius();
	void STATIC_GetRawSensorData(ETrackedDeviceType DeviceType, struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds);
	void STATIC_GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition);
	void STATIC_GetLoadingSplashParams(struct FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg);
	void STATIC_GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization);
	EGearVRControllerHandedness_DEPRECATED STATIC_GetGearVRControllerHandedness();
	struct FString STATIC_GetDeviceName();
	float STATIC_GetCurrentDisplayFrequency();
	float STATIC_GetBatteryLevel();
	void STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
	void STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
	TArray<float> STATIC_GetAvailableDisplayFrequencies();
	void STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled);
	void STATIC_EnableArmModel(bool bArmModelEnable);
	void STATIC_ClearLoadingSplashScreens();
	bool STATIC_AreHeadPhonesPluggedIn();
	void STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
};


// Class OculusHMD.OculusHMDRuntimeSettings
// 0x0018 (0x0040 - 0x0028)
class UOculusHMDRuntimeSettings : public UObject
{
public:
	bool                                               bAutoEnabled;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FOculusSplashDesc>                   SplashDescs;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusHMDRuntimeSettings");
		return ptr;
	}

};


// Class OculusHMD.OculusSceneCaptureCubemap
// 0x0068 (0x0090 - 0x0028)
class UOculusSceneCaptureCubemap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class USceneCaptureComponent2D*>            CaptureComponents;                                        // 0x0038(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusSceneCaptureCubemap");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
