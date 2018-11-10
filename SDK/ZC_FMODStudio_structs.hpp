#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FMODStudio.EFMODEventProperty
enum class EFMODEventProperty : uint8_t
{
	ChannelPriority                = 0,
	ScheduleDelay                  = 1,
	ScheduleLookahead              = 2,
	MinimumDistance                = 3,
	MaximumDistance                = 4,
	Count                          = 5,
	EFMODEventProperty_MAX         = 6
};


// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT                   = 0,
	IMMEDIATE                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2
};


// Enum FMODStudio.EFMODEventControlKey
enum class EFMODEventControlKey : uint8_t
{
	Stop                           = 0,
	Play                           = 1,
	EFMODEventControlKey_MAX       = 2
};


// Enum FMODStudio.EFMODSpeakerMode
enum class EFMODSpeakerMode : uint8_t
{
	Stereo                         = 0,
	Surround_5                     = 1,
	Surround_7                     = 2,
	EFMODSpeakerMode_MAX           = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FMODStudio.FMODAttenuationDetails
// 0x000C
struct FFMODAttenuationDetails
{
	unsigned char                                      bOverrideAttenuation : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistance;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct FMODStudio.FMODOcclusionDetails
// 0x0014
struct FFMODOcclusionDetails
{
	bool                                               bEnableOcclusion;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseComplexCollisionForOcclusion;                         // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct FMODStudio.FMODEventInstance
// 0x0008
struct FFMODEventInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FMODStudio.FMODEventControlChannel
// 0x0000 (0x0098 - 0x0098)
struct FFMODEventControlChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct FMODStudio.CustomPoolSizes
// 0x0014
struct FCustomPoolSizes
{
	int                                                Desktop;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                Mobile;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                PS4;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SWITCH;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                XBoxOne;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFMODEventControlChannel                    ControlKeys;                                              // 0x0020(0x0098)
};

// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
// 0x0000 (0x0050 - 0x0050)
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
