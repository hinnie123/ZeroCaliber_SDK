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

// Enum OculusHMD.ETrackedDeviceType
enum class ETrackedDeviceType : uint8_t
{
	None                           = 0,
	HMD                            = 1,
	LTouch                         = 2,
	RTouch                         = 3,
	Touch                          = 4,
	DeviceObjectZero               = 5,
	All                            = 6,
	ETrackedDeviceType_MAX         = 7
};


// Enum OculusHMD.EBoundaryType
enum class EBoundaryType : uint8_t
{
	Boundary_Outer                 = 0,
	Boundary_PlayArea              = 1,
	Boundary_MAX                   = 2
};


// Enum OculusHMD.ETiledMultiResLevel
enum class ETiledMultiResLevel : uint8_t
{
	ETiledMultiResLevel_Off        = 0,
	ETiledMultiResLevel_LMSLow     = 1,
	ETiledMultiResLevel_LMSMedium  = 2,
	ETiledMultiResLevel_LMSHigh    = 3,
	ETiledMultiResLevel_MAX        = 4
};


// Enum OculusHMD.EGearVRControllerHandedness_DEPRECATED
enum class EGearVRControllerHandedness_DEPRECATED : uint8_t
{
	RightHanded_DEPRECATED         = 0,
	LeftHanded_DEPRECATED          = 1,
	Unknown_DEPRECATED             = 2,
	EGearVRControllerHandedness_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OculusHMD.BoundaryTestResult
// 0x0020
struct FBoundaryTestResult
{
	bool                                               IsTriggering;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETrackedDeviceType                                 DeviceType;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ClosestDistance;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestPoint;                                             // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ClosestPointNormal;                                       // 0x0014(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct OculusHMD.HmdUserProfileField
// 0x0020
struct FHmdUserProfileField
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     FieldValue;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OculusHMD.HmdUserProfile
// 0x0048
struct FHmdUserProfile
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Gender;                                                   // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              PlayerHeight;                                             // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeHeight;                                                // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IPD;                                                      // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NeckToEyeDistance;                                        // 0x002C(0x0008) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FHmdUserProfileField>                ExtraFields;                                              // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OculusHMD.OculusSplashDesc
// 0x00A0
struct FOculusSplashDesc
{
	struct FSoftObjectPath                             TexturePath;                                              // 0x0000(0x0018) (Edit, Config)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  TransformInMeters;                                        // 0x0020(0x0030) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   QuadSizeInMeters;                                         // 0x0050(0x0008) (Edit, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FQuat                                       DeltaRotation;                                            // 0x0060(0x0010) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   TextureOffset;                                            // 0x0070(0x0008) (Edit, Config, IsPlainOldData)
	struct FVector2D                                   TextureScale;                                             // 0x0078(0x0008) (Edit, Config, IsPlainOldData)
	bool                                               bNoAlphaChannel;                                          // 0x0080(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0081(0x001F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
