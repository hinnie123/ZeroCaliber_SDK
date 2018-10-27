// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionSmoothTurnSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SmoothTurnSpeed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::GetOptionSmoothTurnSpeed(float* SmoothTurnSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionSmoothTurnSpeed");

	UVRGameInstanceVendetta_C_GetOptionSmoothTurnSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SmoothTurnSpeed != nullptr)
		*SmoothTurnSpeed = params.SmoothTurnSpeed;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionSmoothTurnSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SmoothTurnSpeed                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::SetOptionSmoothTurnSpeed(float SmoothTurnSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionSmoothTurnSpeed");

	UVRGameInstanceVendetta_C_SetOptionSmoothTurnSpeed_Params params;
	params.SmoothTurnSpeed = SmoothTurnSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionSnapTurnDegrees
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SnapTurnDegrees                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::GetOptionSnapTurnDegrees(float* SnapTurnDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionSnapTurnDegrees");

	UVRGameInstanceVendetta_C_GetOptionSnapTurnDegrees_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SnapTurnDegrees != nullptr)
		*SnapTurnDegrees = params.SnapTurnDegrees;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionSnapTurnDegrees
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SnapTurnDegrees                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::SetOptionSnapTurnDegrees(float SnapTurnDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionSnapTurnDegrees");

	UVRGameInstanceVendetta_C_SetOptionSnapTurnDegrees_Params params;
	params.SnapTurnDegrees = SnapTurnDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsSnapTurn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSnapTurn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::GetOptionIsSnapTurn(bool* IsSnapTurn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsSnapTurn");

	UVRGameInstanceVendetta_C_GetOptionIsSnapTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSnapTurn != nullptr)
		*IsSnapTurn = params.IsSnapTurn;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsSnapTurn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSnapTurn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::SetOptionIsSnapTurn(bool IsSnapTurn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsSnapTurn");

	UVRGameInstanceVendetta_C_SetOptionIsSnapTurn_Params params;
	params.IsSnapTurn = IsSnapTurn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsHeadOrientedLocomotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHeadOrientedLocomotion       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::GetOptionIsHeadOrientedLocomotion(bool* IsHeadOrientedLocomotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsHeadOrientedLocomotion");

	UVRGameInstanceVendetta_C_GetOptionIsHeadOrientedLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHeadOrientedLocomotion != nullptr)
		*IsHeadOrientedLocomotion = params.IsHeadOrientedLocomotion;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsHeadOrientedLocomotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHeadOrientedLocomotion       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::SetOptionIsHeadOrientedLocomotion(bool IsHeadOrientedLocomotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsHeadOrientedLocomotion");

	UVRGameInstanceVendetta_C_SetOptionIsHeadOrientedLocomotion_Params params;
	params.IsHeadOrientedLocomotion = IsHeadOrientedLocomotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsRightHanded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsRightHanded                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::GetOptionIsRightHanded(bool* IsRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOptionIsRightHanded");

	UVRGameInstanceVendetta_C_GetOptionIsRightHanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRightHanded != nullptr)
		*IsRightHanded = params.IsRightHanded;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsRightHanded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightHanded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::SetOptionIsRightHanded(bool IsRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetOptionIsRightHanded");

	UVRGameInstanceVendetta_C_SetOptionIsRightHanded_Params params;
	params.IsRightHanded = IsRightHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGameOptionSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SubtitleEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::SetGameOptionSubtitle(bool SubtitleEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGameOptionSubtitle");

	UVRGameInstanceVendetta_C_SetGameOptionSubtitle_Params params;
	params.SubtitleEnabled = SubtitleEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOutlineStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           TurnedOn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::GetOutlineStatus(bool* TurnedOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.GetOutlineStatus");

	UVRGameInstanceVendetta_C_GetOutlineStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TurnedOn != nullptr)
		*TurnedOn = params.TurnedOn;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutlineUse                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateOptionOutline(bool OutlineUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionOutline");

	UVRGameInstanceVendetta_C_UpdateOptionOutline_Params params;
	params.OutlineUse = OutlineUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionDifficulty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDifficulty>       Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateOptionDifficulty(TEnumAsByte<EDifficulty> Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionDifficulty");

	UVRGameInstanceVendetta_C_UpdateOptionDifficulty_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerRank
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerRankStruct       PlayerRank                     (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadPlayerRank(struct FPlayerRankStruct* PlayerRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerRank");

	UVRGameInstanceVendetta_C_LoadPlayerRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerRank != nullptr)
		*PlayerRank = params.PlayerRank;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerRankStruct       PlayerRankStruct               (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SavePlayerRank(const struct FPlayerRankStruct& PlayerRankStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerRank");

	UVRGameInstanceVendetta_C_SavePlayerRank_Params params;
	params.PlayerRankStruct = PlayerRankStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadLevelsStatistics
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelsStatisticsStruct LevelsStatistics               (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadLevelsStatistics(struct FLevelsStatisticsStruct* LevelsStatistics)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadLevelsStatistics");

	UVRGameInstanceVendetta_C_LoadLevelsStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelsStatistics != nullptr)
		*LevelsStatistics = params.LevelsStatistics;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveLevelsStatistics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelsStatisticsStruct LevelsStatisticsStruct         (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SaveLevelsStatistics(const struct FLevelsStatisticsStruct& LevelsStatisticsStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveLevelsStatistics");

	UVRGameInstanceVendetta_C_SaveLevelsStatistics_Params params;
	params.LevelsStatisticsStruct = LevelsStatisticsStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerCredits
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerCreditsStruct    PlayerCredits                  (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadPlayerCredits(struct FPlayerCreditsStruct* PlayerCredits)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerCredits");

	UVRGameInstanceVendetta_C_LoadPlayerCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerCredits != nullptr)
		*PlayerCredits = params.PlayerCredits;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerCreditsStruct    PlayerCreditsStruct            (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SavePlayerCredits(const struct FPlayerCreditsStruct& PlayerCreditsStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerCredits");

	UVRGameInstanceVendetta_C_SavePlayerCredits_Params params;
	params.PlayerCreditsStruct = PlayerCreditsStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadItemProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemProgressStruct     ItemProgress                   (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadItemProgress(struct FItemProgressStruct* ItemProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadItemProgress");

	UVRGameInstanceVendetta_C_LoadItemProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemProgress != nullptr)
		*ItemProgress = params.ItemProgress;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveItemProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemProgressStruct     ItemProgressStruct             (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SaveItemProgress(const struct FItemProgressStruct& ItemProgressStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveItemProgress");

	UVRGameInstanceVendetta_C_SaveItemProgress_Params params;
	params.ItemProgressStruct = ItemProgressStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadCampaignProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCampaignProgressStruct CampaignProgress               (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadCampaignProgress(struct FCampaignProgressStruct* CampaignProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadCampaignProgress");

	UVRGameInstanceVendetta_C_LoadCampaignProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CampaignProgress != nullptr)
		*CampaignProgress = params.CampaignProgress;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveCampaignProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCampaignProgressStruct Campaign_Progress_Struct       (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SaveCampaignProgress(const struct FCampaignProgressStruct& Campaign_Progress_Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveCampaignProgress");

	UVRGameInstanceVendetta_C_SaveCampaignProgress_Params params;
	params.Campaign_Progress_Struct = Campaign_Progress_Struct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionPlayerHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OptionPlayerHeight             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateOptionPlayerHeight(float OptionPlayerHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionPlayerHeight");

	UVRGameInstanceVendetta_C_UpdateOptionPlayerHeight_Params params;
	params.OptionPlayerHeight = OptionPlayerHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionRenderScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OptionRenderScale              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateOptionRenderScale(float OptionRenderScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionRenderScale");

	UVRGameInstanceVendetta_C_UpdateOptionRenderScale_Params params;
	params.OptionRenderScale = OptionRenderScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionAA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAAOptions>        OptionAA                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateOptionAA(TEnumAsByte<EAAOptions> OptionAA)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionAA");

	UVRGameInstanceVendetta_C_UpdateOptionAA_Params params;
	params.OptionAA = OptionAA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EQualityOptions>   OptionQuality                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateOptionQuality(TEnumAsByte<EQualityOptions> OptionQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateOptionQuality");

	UVRGameInstanceVendetta_C_UpdateOptionQuality_Params params;
	params.OptionQuality = OptionQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionRenderScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         OptionsStruct                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVRGameInstanceVendetta_C::SetGraphicsOptionRenderScale(struct FOptionsStruct2* OptionsStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionRenderScale");

	UVRGameInstanceVendetta_C_SetGraphicsOptionRenderScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionsStruct != nullptr)
		*OptionsStruct = params.OptionsStruct;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionAA
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         OptionsStruct                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVRGameInstanceVendetta_C::SetGraphicsOptionAA(struct FOptionsStruct2* OptionsStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionAA");

	UVRGameInstanceVendetta_C_SetGraphicsOptionAA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionsStruct != nullptr)
		*OptionsStruct = params.OptionsStruct;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         OptionsStruct                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVRGameInstanceVendetta_C::SetGraphicsOptionQuality(struct FOptionsStruct2* OptionsStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SetGraphicsOptionQuality");

	UVRGameInstanceVendetta_C_SetGraphicsOptionQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionsStruct != nullptr)
		*OptionsStruct = params.OptionsStruct;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         OptionsStruct                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SaveOptions(const struct FOptionsStruct2& OptionsStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveOptions");

	UVRGameInstanceVendetta_C_SaveOptions_Params params;
	params.OptionsStruct = OptionsStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         Options                        (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadOptions(struct FOptionsStruct2* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadOptions");

	UVRGameInstanceVendetta_C_LoadOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ResetLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UVRGameInstanceVendetta_C::ResetLevel(const struct FString& Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ResetLevel");

	UVRGameInstanceVendetta_C_ResetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateLevelProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::UpdateLevelProgress(const struct FString& Level, int Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.UpdateLevelProgress");

	UVRGameInstanceVendetta_C_UpdateLevelProgress_Params params;
	params.Level = Level;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadLevelProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelProgressStruct    LevelProgress                  (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadLevelProgress(struct FLevelProgressStruct* LevelProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadLevelProgress");

	UVRGameInstanceVendetta_C_LoadLevelProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelProgress != nullptr)
		*LevelProgress = params.LevelProgress;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveLevelProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelProgressStruct    LevelProgressStruct            (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SaveLevelProgress(const struct FLevelProgressStruct& LevelProgressStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SaveLevelProgress");

	UVRGameInstanceVendetta_C_SaveLevelProgress_Params params;
	params.LevelProgressStruct = LevelProgressStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ClearPlayerEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void UVRGameInstanceVendetta_C::ClearPlayerEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ClearPlayerEquipment");

	UVRGameInstanceVendetta_C_ClearPlayerEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerEquipmentStruct  PlayerEquipment                (Parm, OutParm)

void UVRGameInstanceVendetta_C::LoadPlayerEquipment(struct FPlayerEquipmentStruct* PlayerEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.LoadPlayerEquipment");

	UVRGameInstanceVendetta_C_LoadPlayerEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerEquipment != nullptr)
		*PlayerEquipment = params.PlayerEquipment;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerEquipmentStruct  PlayerEquipmentStruct          (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::SavePlayerEquipment(const struct FPlayerEquipmentStruct& PlayerEquipmentStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.SavePlayerEquipment");

	UVRGameInstanceVendetta_C_SavePlayerEquipment_Params params;
	params.PlayerEquipmentStruct = PlayerEquipmentStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UVRGameInstanceVendetta_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ReceiveInit");

	UVRGameInstanceVendetta_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ExecuteUbergraph_VRGameInstanceVendetta
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::ExecuteUbergraph_VRGameInstanceVendetta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.ExecuteUbergraph_VRGameInstanceVendetta");

	UVRGameInstanceVendetta_C_ExecuteUbergraph_VRGameInstanceVendetta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionIsHeadOrientedLocomotionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHeadOrientedLocomotion       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::OptionIsHeadOrientedLocomotionChanged__DelegateSignature(bool IsHeadOrientedLocomotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionIsHeadOrientedLocomotionChanged__DelegateSignature");

	UVRGameInstanceVendetta_C_OptionIsHeadOrientedLocomotionChanged__DelegateSignature_Params params;
	params.IsHeadOrientedLocomotion = IsHeadOrientedLocomotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionIsRightHandedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightHanded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVRGameInstanceVendetta_C::OptionIsRightHandedChanged__DelegateSignature(bool IsRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionIsRightHandedChanged__DelegateSignature");

	UVRGameInstanceVendetta_C_OptionIsRightHandedChanged__DelegateSignature_Params params;
	params.IsRightHanded = IsRightHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         Options                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UVRGameInstanceVendetta_C::OptionsUpdated__DelegateSignature(const struct FOptionsStruct2& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRGameInstanceVendetta.VRGameInstanceVendetta_C.OptionsUpdated__DelegateSignature");

	UVRGameInstanceVendetta_C_OptionsUpdated__DelegateSignature_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
