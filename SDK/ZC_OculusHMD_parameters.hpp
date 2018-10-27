#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OculusHMD.DeprecatedGearVRControllerComponent.GetMotionController
struct UDeprecatedGearVRControllerComponent_GetMotionController_Params
{
	class UMotionControllerComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OculusHMD.DeprecatedGearVRControllerComponent.GetControllerMesh
struct UDeprecatedGearVRControllerComponent_GetControllerMesh_Params
{
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.SetOuterBoundaryColor
struct UOculusBoundaryComponent_SetOuterBoundaryColor_Params
{
	struct FColor                                      InBoundaryColor;                                          // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.ResetOuterBoundaryColor
struct UOculusBoundaryComponent_ResetOuterBoundaryColor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.RequestOuterBoundaryVisible
struct UOculusBoundaryComponent_RequestOuterBoundaryVisible_Params
{
	bool                                               BoundaryVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction OculusHMD.OculusBoundaryComponent.OculusOuterBoundaryTriggeredEvent__DelegateSignature
struct UOculusBoundaryComponent_OculusOuterBoundaryTriggeredEvent__DelegateSignature_Params
{
	TArray<struct FBoundaryTestResult>                 OuterBoundsInteractionList;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// DelegateFunction OculusHMD.OculusBoundaryComponent.OculusOuterBoundaryReturnedEvent__DelegateSignature
struct UOculusBoundaryComponent_OculusOuterBoundaryReturnedEvent__DelegateSignature_Params
{
};

// Function OculusHMD.OculusBoundaryComponent.IsOuterBoundaryTriggered
struct UOculusBoundaryComponent_IsOuterBoundaryTriggered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.IsOuterBoundaryDisplayed
struct UOculusBoundaryComponent_IsOuterBoundaryDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.GetTriggeredPlayAreaInfo
struct UOculusBoundaryComponent_GetTriggeredPlayAreaInfo_Params
{
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBoundaryTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusHMD.OculusBoundaryComponent.GetTriggeredOuterBoundaryInfo
struct UOculusBoundaryComponent_GetTriggeredOuterBoundaryInfo_Params
{
	TArray<struct FBoundaryTestResult>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusBoundaryComponent.GetPlayAreaPoints
struct UOculusBoundaryComponent_GetPlayAreaPoints_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusBoundaryComponent.GetPlayAreaDimensions
struct UOculusBoundaryComponent_GetPlayAreaDimensions_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.GetOuterBoundaryPoints
struct UOculusBoundaryComponent_GetOuterBoundaryPoints_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusBoundaryComponent.GetOuterBoundaryDimensions
struct UOculusBoundaryComponent_GetOuterBoundaryDimensions_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusBoundaryComponent.CheckIfPointWithinPlayArea
struct UOculusBoundaryComponent_CheckIfPointWithinPlayArea_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FBoundaryTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusHMD.OculusBoundaryComponent.CheckIfPointWithinOuterBounds
struct UOculusBoundaryComponent_CheckIfPointWithinOuterBounds_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FBoundaryTestResult                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
struct UOculusFunctionLibrary_ShowLoadingSplashScreen_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
struct UOculusFunctionLibrary_ShowLoadingIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
struct UOculusFunctionLibrary_SetTiledMultiresLevel_Params
{
	ETiledMultiResLevel                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
	struct FVector                                     PosScale3D;                                               // (Parm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
struct UOculusFunctionLibrary_SetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                              // (Parm, ZeroConstructor)
	struct FVector                                     DistanceInMeters;                                         // (Parm, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, IsPlainOldData)
	float                                              RotationDeltaInDeg;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
struct UOculusFunctionLibrary_SetDisplayFrequency_Params
{
	float                                              RequestedFrequency;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
struct UOculusFunctionLibrary_SetCPUAndGPULevels_Params
{
	int                                                CPULevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GPULevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    BaseRot;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     PosOffset;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     BaseOffsetInMeters;                                       // (Parm, IsPlainOldData)
	TEnumAsByte<EOrientPositionSelector>               Options;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsPowerLevelStateThrottled
struct UOculusFunctionLibrary_IsPowerLevelStateThrottled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsPowerLevelStateMinimum
struct UOculusFunctionLibrary_IsPowerLevelStateMinimum_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
struct UOculusFunctionLibrary_IsLoadingIconEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
struct UOculusFunctionLibrary_IsDeviceTracked_Params
{
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsControllerActive
struct UOculusFunctionLibrary_IsControllerActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
struct UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
struct UOculusFunctionLibrary_HideLoadingSplashScreen_Params
{
	bool                                               bClear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
struct UOculusFunctionLibrary_HideLoadingIcon_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
struct UOculusFunctionLibrary_HasSystemOverlayPresent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
struct UOculusFunctionLibrary_HasInputFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
	struct FHmdUserProfile                             Profile;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
struct UOculusFunctionLibrary_GetTiledMultiresLevel_Params
{
	ETiledMultiResLevel                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetTemperatureInCelsius
struct UOculusFunctionLibrary_GetTemperatureInCelsius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
	struct FVector                                     AngularAcceleration;                                      // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinearAcceleration;                                       // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              TimeInSeconds;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ETrackedDeviceType                                 DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
	struct FRotator                                    DeviceRotation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     DevicePosition;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     NeckPosition;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               bUseOrienationForPlayerCamera;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePositionForPlayerCamera;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionScale;                                            // (ConstParm, Parm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
struct UOculusFunctionLibrary_GetLoadingSplashParams_Params
{
	struct FString                                     TexturePath;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     DistanceInMeters;                                         // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              RotationDeltaInDeg;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
struct UOculusFunctionLibrary_GetGPUUtilization_Params
{
	bool                                               IsGPUAvailable;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GPUUtilization;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetGearVRControllerHandedness
struct UOculusFunctionLibrary_GetGearVRControllerHandedness_Params
{
	EGearVRControllerHandedness_DEPRECATED             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
struct UOculusFunctionLibrary_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
struct UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetBatteryLevel
struct UOculusFunctionLibrary_GetBatteryLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutPosOffset;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutBaseOffsetInMeters;                                    // (Parm, OutParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
struct UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
struct UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params
{
	bool                                               bAutoShowEnabled;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.EnableArmModel
struct UOculusFunctionLibrary_EnableArmModel_Params
{
	bool                                               bArmModelEnable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.AreHeadPhonesPluggedIn
struct UOculusFunctionLibrary_AreHeadPhonesPluggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TranslationInMeters;                                      // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   SizeInMeters;                                             // (Parm, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (Parm, IsPlainOldData)
	bool                                               bClearBeforeAdd;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
