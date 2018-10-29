#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OpenVRExpansionPlugin.EBPOpenVRHMDDeviceType
enum class EBPOpenVRHMDDeviceType : uint8_t
{
	DT_SteamVR                     = 0,
	DT_Vive                        = 1,
	DT_OculusHMD                   = 2,
	DT_WindowsMR                   = 3,
	DT_OSVR                        = 4,
	DT_Unknown                     = 5,
	DT_MAX                         = 6
};


// Enum OpenVRExpansionPlugin.EVRDeviceProperty_Matrix34
enum class EVRDeviceProperty_Matrix34 : uint8_t
{
	Prop_StatusDisplayTransform_Matrix34 = 0,
	HMDProp_CameraToHeadTransform_Matrix34 = 1,
	EVRDeviceProperty_MAX          = 2
};


// Enum OpenVRExpansionPlugin.EVRDeviceProperty_UInt64
enum class EVRDeviceProperty_UInt64 : uint8_t
{
	Prop_HardwareRevision_Uint64   = 0,
	Prop_FirmwareVersion_Uint64    = 1,
	Prop_FPGAVersion_Uint64        = 2,
	Prop_VRCVersion_Uint64         = 3,
	Prop_RadioVersion_Uint64       = 4,
	Prop_DongleVersion_Uint64      = 5,
	Prop_ParentDriver_Uint64       = 6,
	HMDProp_CurrentUniverseId_Uint64 = 7,
	HMDProp_PreviousUniverseId_Uint64 = 8,
	HMDProp_DisplayFirmwareVersion_Uint64 = 9,
	HMDProp_CameraFirmwareVersion_Uint64 = 10,
	HMDProp_DisplayFPGAVersion_Uint64 = 11,
	HMDProp_DisplayBootloaderVersion_Uint64 = 12,
	HMDProp_DisplayHardwareVersion_Uint64 = 13,
	HMDProp_AudioFirmwareVersion_Uint64 = 14,
	HMDProp_GraphicsAdapterLuid_Uint64 = 15,
	ControllerProp_SupportedButtons_Uint64 = 16,
	EVRDeviceProperty_MAX          = 17
};


// Enum OpenVRExpansionPlugin.EVRDeviceProperty_Int32
enum class EVRDeviceProperty_Int32 : uint8_t
{
	Prop_DeviceClass_Int32         = 0,
	HMDProp_DisplayMCType_Int32    = 1,
	HMDProp_EdidVendorID_Int32     = 2,
	HMDProp_EdidProductID_Int32    = 3,
	HMDProp_DisplayGCType_Int32    = 4,
	HMDProp_CameraCompatibilityMode_Int32 = 5,
	HMDProp_DisplayMCImageWidth_Int32 = 6,
	HMDProp_DisplayMCImageHeight_Int32 = 7,
	HMDProp_DisplayMCImageNumChannels_Int32 = 8,
	HMDProp_ExpectedTrackingReferenceCount_Int32 = 9,
	HMDProp_ExpectedControllerCount_Int32 = 10,
	ControllerProp_Axis0Type_Int32 = 11,
	ControllerPropProp_Axis1Type_Int32 = 12,
	ControllerPropProp_Axis2Type_Int32 = 13,
	ControllerPropProp_Axis3Type_Int32 = 14,
	ControllerPropProp_Axis4Type_Int32 = 15,
	ControllerProp_ControllerRoleHint_Int32 = 16,
	EVRDeviceProperty_MAX          = 17
};


// Enum OpenVRExpansionPlugin.EVRDeviceProperty_Float
enum class EVRDeviceProperty_Float : uint8_t
{
	Prop_DeviceBatteryPercentage_Float = 0,
	HMDProp_SecondsFromVsyncToPhotons_Float = 1,
	HMDProp_DisplayFrequency_Float = 2,
	HMDProp_UserIpdMeters_Float    = 3,
	HMDProp_DisplayMCOffset_Float  = 4,
	HMDProp_DisplayMCScale_Float   = 5,
	HMDProp_DisplayGCBlackClamp_Float = 6,
	HMDProp_DisplayGCOffset_Float  = 7,
	HMDProp_DisplayGCScale_Float   = 8,
	HMDProp_DisplayGCPrescale_Float = 9,
	HMDProp_LensCenterLeftU_Float  = 10,
	HMDProp_LensCenterLeftV_Float  = 11,
	HMDProp_LensCenterRightU_Float = 12,
	HMDProp_LensCenterRightV_Float = 13,
	HMDProp_UserHeadToEyeDepthMeters_Float = 14,
	HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float = 15,
	HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float = 16,
	HMDProp_SecondsFromPhotonsToVblank_Float = 17,
	TrackRefProp_FieldOfViewLeftDegrees_Float = 18,
	TrackRefProp_FieldOfViewRightDegrees_Float = 19,
	TrackRefProp_FieldOfViewTopDegrees_Float = 20,
	TrackRefProp_FieldOfViewBottomDegrees_Float = 21,
	TrackRefProp_TrackingRangeMinimumMeters_Float = 22,
	TrackRefProp_TrackingRangeMaximumMeters_Float = 23,
	EVRDeviceProperty_MAX          = 24
};


// Enum OpenVRExpansionPlugin.EVRDeviceProperty_Bool
enum class EVRDeviceProperty_Bool : uint8_t
{
	Prop_WillDriftInYaw_Bool       = 0,
	Prop_DeviceIsWireless_Bool     = 1,
	Prop_DeviceIsCharging_Bool     = 2,
	Prop_Firmware_UpdateAvailable_Bool = 3,
	Prop_Firmware_ManualUpdate_Bool = 4,
	Prop_BlockServerShutdown_Bool  = 5,
	Prop_CanUnifyCoordinateSystemWithHmd_Bool = 6,
	Prop_ContainsProximitySensor_Bool = 7,
	Prop_DeviceProvidesBatteryStatus_Bool = 8,
	Prop_DeviceCanPowerOff_Bool    = 9,
	Prop_HasCamera_Bool            = 10,
	Prop_Firmware_ForceUpdateRequired_Bool = 11,
	Prop_ViveSystemButtonFixRequired_Bool = 12,
	HMDProp_ReportsTimeSinceVSync_Bool = 13,
	HMDProp_IsOnDesktop_Bool       = 14,
	HMDProp_DisplaySuppressed_Bool = 15,
	HMDProp_DisplayAllowNightMode_Bool = 16,
	HMDProp_DriverDirectModeSendsVsyncEvents_Bool = 17,
	HMDProp_DisplayDebugMode_Bool  = 18,
	HMDProp_DoNotApplyPrediction_Bool = 19,
	DriverProp_HasDisplayComponent_Bool = 20,
	DriverProp_HasControllerComponent_Bool = 21,
	DriverProp_HasCameraComponent_Bool = 22,
	DriverProp_HasDriverDirectModeComponent_Bool = 23,
	DriverProp_HasVirtualDisplayComponent_Bool = 24,
	EVRDeviceProperty_MAX          = 25
};


// Enum OpenVRExpansionPlugin.EVRDeviceProperty_String
enum class EVRDeviceProperty_String : uint8_t
{
	Prop_TrackingSystemName_String = 0,
	Prop_ModelNumber_String        = 1,
	Prop_SerialNumber_String       = 2,
	Prop_RenderModelName_String    = 3,
	Prop_ManufacturerName_String   = 4,
	Prop_TrackingFirmwareVersion_String = 5,
	Prop_HardwareRevision_String   = 6,
	Prop_AllWirelessDongleDescriptions_String = 7,
	Prop_ConnectedWirelessDongle_String = 8,
	Prop_Firmware_ManualUpdateURL_String = 9,
	Prop_Firmware_ProgrammingTarget_String = 10,
	Prop_DriverVersion_String      = 11,
	Prop_ResourceRoot_String       = 12,
	Prop_RegisteredDeviceType_String = 13,
	Prop_InputProfileName_String   = 14,
	HMDProp_DisplayMCImageLeft_String = 15,
	HMDProp_DisplayMCImageRight_String = 16,
	HMDProp_DisplayGCImage_String  = 17,
	HMDProp_CameraFirmwareDescription_String = 18,
	HMDProp_DriverProvidedChaperonePath_String = 19,
	ControllerProp_AttachedDeviceId_String = 20,
	TrackRefProp_ModeLabel_String  = 21,
	UIProp_NamedIconPathDeviceOff_String = 22,
	UIProp_NamedIconPathDeviceSearching_String = 23,
	UIProp_NamedIconPathDeviceSearchingAlert_String = 24,
	UIProp_NamedIconPathDeviceReady_String = 25,
	UIProp_NamedIconPathDeviceReadyAlert_String = 26,
	UIProp_NamedIconPathDeviceNotReady_String = 27,
	UIProp_NamedIconPathDeviceStandby_String = 28,
	UIProp_NamedIconPathDeviceAlertLow_String = 29,
	DriverProp_UserConfigPath_String = 30,
	DriverProp_InstallPath_String  = 31,
	EVRDeviceProperty_MAX          = 32
};


// Enum OpenVRExpansionPlugin.EBPSteamVRTrackedDeviceType
enum class EBPSteamVRTrackedDeviceType : uint8_t
{
	Controller                     = 0,
	TrackingReference              = 1,
	Other                          = 2,
	Invalid                        = 3,
	EBPSteamVRTrackedDeviceType_MAX = 4
};


// Enum OpenVRExpansionPlugin.EAsyncBlueprintResultSwitch
enum class EAsyncBlueprintResultSwitch : uint8_t
{
	OnSuccess                      = 0,
	AsyncLoading                   = 1,
	OnFailure                      = 2,
	EAsyncBlueprintResultSwitch_MAX = 3
};


// Enum OpenVRExpansionPlugin.EOpenVRCameraFrameType
enum class EOpenVRCameraFrameType : uint8_t
{
	VRFrameType_Distorted          = 0,
	VRFrameType_Undistorted        = 1,
	VRFrameType_MaximumUndistorted = 2,
	VRFrameType_MAX                = 3
};


// Enum OpenVRExpansionPlugin.EBPOVRResultSwitch
enum class EBPOVRResultSwitch : uint8_t
{
	OnSucceeded                    = 0,
	OnFailed                       = 1,
	EBPOVRResultSwitch_MAX         = 2
};


// Enum OpenVRExpansionPlugin.EBPOpenVRTrackedDeviceClass
enum class EBPOpenVRTrackedDeviceClass : uint8_t
{
	TrackedDeviceClass_Invalid     = 0,
	TrackedDeviceClass_HMD         = 1,
	TrackedDeviceClass_Controller  = 2,
	TrackedDeviceClass_GenericTracker = 3,
	TrackedDeviceClass_TrackingReference = 4,
	TrackedDeviceClass_DisplayRedirect = 5,
	TrackedDeviceClass_MAX         = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OpenVRExpansionPlugin.BPOpenVRCameraHandle
// 0x0008
struct FBPOpenVRCameraHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
