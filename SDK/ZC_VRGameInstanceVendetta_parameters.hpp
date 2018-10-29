#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionSmoothTurnSpeed
struct UVRGameInstanceVendetta_C_GetOptionSmoothTurnSpeed_Params
{
	float                                              SmoothTurnSpeed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionSmoothTurnSpeed
struct UVRGameInstanceVendetta_C_SetOptionSmoothTurnSpeed_Params
{
	float                                              SmoothTurnSpeed;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionSnapTurnDegrees
struct UVRGameInstanceVendetta_C_GetOptionSnapTurnDegrees_Params
{
	float                                              SnapTurnDegrees;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionSnapTurnDegrees
struct UVRGameInstanceVendetta_C_SetOptionSnapTurnDegrees_Params
{
	float                                              SnapTurnDegrees;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsSnapTurn
struct UVRGameInstanceVendetta_C_GetOptionIsSnapTurn_Params
{
	bool                                               IsSnapTurn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsSnapTurn
struct UVRGameInstanceVendetta_C_SetOptionIsSnapTurn_Params
{
	bool                                               IsSnapTurn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsHeadOrientedLocomotion
struct UVRGameInstanceVendetta_C_GetOptionIsHeadOrientedLocomotion_Params
{
	bool                                               IsHeadOrientedLocomotion;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsHeadOrientedLocomotion
struct UVRGameInstanceVendetta_C_SetOptionIsHeadOrientedLocomotion_Params
{
	bool                                               IsHeadOrientedLocomotion;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsRightHanded
struct UVRGameInstanceVendetta_C_GetOptionIsRightHanded_Params
{
	bool                                               IsRightHanded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsRightHanded
struct UVRGameInstanceVendetta_C_SetOptionIsRightHanded_Params
{
	bool                                               IsRightHanded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGameOptionSubtitle
struct UVRGameInstanceVendetta_C_SetGameOptionSubtitle_Params
{
	bool                                               SubtitleEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOutlineStatus
struct UVRGameInstanceVendetta_C_GetOutlineStatus_Params
{
	bool                                               TurnedOn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionOutline
struct UVRGameInstanceVendetta_C_UpdateOptionOutline_Params
{
	bool                                               OutlineUse;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionDifficulty
struct UVRGameInstanceVendetta_C_UpdateOptionDifficulty_Params
{
	TEnumAsByte<EDifficulty>                           Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerRank
struct UVRGameInstanceVendetta_C_LoadPlayerRank_Params
{
	struct FPlayerRankStruct                           PlayerRank;                                               // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerRank
struct UVRGameInstanceVendetta_C_SavePlayerRank_Params
{
	struct FPlayerRankStruct                           PlayerRankStruct;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadLevelsStatistics
struct UVRGameInstanceVendetta_C_LoadLevelsStatistics_Params
{
	struct FLevelsStatisticsStruct                     LevelsStatistics;                                         // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveLevelsStatistics
struct UVRGameInstanceVendetta_C_SaveLevelsStatistics_Params
{
	struct FLevelsStatisticsStruct                     LevelsStatisticsStruct;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerCredits
struct UVRGameInstanceVendetta_C_LoadPlayerCredits_Params
{
	struct FPlayerCreditsStruct                        PlayerCredits;                                            // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerCredits
struct UVRGameInstanceVendetta_C_SavePlayerCredits_Params
{
	struct FPlayerCreditsStruct                        PlayerCreditsStruct;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadItemProgress
struct UVRGameInstanceVendetta_C_LoadItemProgress_Params
{
	struct FItemProgressStruct                         ItemProgress;                                             // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveItemProgress
struct UVRGameInstanceVendetta_C_SaveItemProgress_Params
{
	struct FItemProgressStruct                         ItemProgressStruct;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadCampaignProgress
struct UVRGameInstanceVendetta_C_LoadCampaignProgress_Params
{
	struct FCampaignProgressStruct                     CampaignProgress;                                         // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveCampaignProgress
struct UVRGameInstanceVendetta_C_SaveCampaignProgress_Params
{
	struct FCampaignProgressStruct                     Campaign_Progress_Struct;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionPlayerHeight
struct UVRGameInstanceVendetta_C_UpdateOptionPlayerHeight_Params
{
	float                                              OptionPlayerHeight;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionRenderScale
struct UVRGameInstanceVendetta_C_UpdateOptionRenderScale_Params
{
	float                                              OptionRenderScale;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionAA
struct UVRGameInstanceVendetta_C_UpdateOptionAA_Params
{
	TEnumAsByte<EAAOptions>                            OptionAA;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionQuality
struct UVRGameInstanceVendetta_C_UpdateOptionQuality_Params
{
	TEnumAsByte<EQualityOptions>                       OptionQuality;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionRenderScale
struct UVRGameInstanceVendetta_C_SetGraphicsOptionRenderScale_Params
{
	struct FOptionsStruct2                             OptionsStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionAA
struct UVRGameInstanceVendetta_C_SetGraphicsOptionAA_Params
{
	struct FOptionsStruct2                             OptionsStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionQuality
struct UVRGameInstanceVendetta_C_SetGraphicsOptionQuality_Params
{
	struct FOptionsStruct2                             OptionsStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveOptions
struct UVRGameInstanceVendetta_C_SaveOptions_Params
{
	struct FOptionsStruct2                             OptionsStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadOptions
struct UVRGameInstanceVendetta_C_LoadOptions_Params
{
	struct FOptionsStruct2                             Options;                                                  // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ResetLevel
struct UVRGameInstanceVendetta_C_ResetLevel_Params
{
	struct FString                                     Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateLevelProgress
struct UVRGameInstanceVendetta_C_UpdateLevelProgress_Params
{
	struct FString                                     Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadLevelProgress
struct UVRGameInstanceVendetta_C_LoadLevelProgress_Params
{
	struct FLevelProgressStruct                        LevelProgress;                                            // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveLevelProgress
struct UVRGameInstanceVendetta_C_SaveLevelProgress_Params
{
	struct FLevelProgressStruct                        LevelProgressStruct;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ClearPlayerEquipment
struct UVRGameInstanceVendetta_C_ClearPlayerEquipment_Params
{
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerEquipment
struct UVRGameInstanceVendetta_C_LoadPlayerEquipment_Params
{
	struct FPlayerEquipmentStruct                      PlayerEquipment;                                          // (Parm, OutParm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerEquipment
struct UVRGameInstanceVendetta_C_SavePlayerEquipment_Params
{
	struct FPlayerEquipmentStruct                      PlayerEquipmentStruct;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ReceiveInit
struct UVRGameInstanceVendetta_C_ReceiveInit_Params
{
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ExecuteUbergraph_VRGameInstanceVendetta
struct UVRGameInstanceVendetta_C_ExecuteUbergraph_VRGameInstanceVendetta_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionIsHeadOrientedLocomotionChanged__DelegateSignature
struct UVRGameInstanceVendetta_C_OptionIsHeadOrientedLocomotionChanged__DelegateSignature_Params
{
	bool                                               IsHeadOrientedLocomotion;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionIsRightHandedChanged__DelegateSignature
struct UVRGameInstanceVendetta_C_OptionIsRightHandedChanged__DelegateSignature_Params
{
	bool                                               IsRightHanded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionsUpdated__DelegateSignature
struct UVRGameInstanceVendetta_C_OptionsUpdated__DelegateSignature_Params
{
	struct FOptionsStruct2                             Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
