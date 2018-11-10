// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TeamInterface.TeamInterface_C.GetAllyTeams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<ETeams>>    AllyTeams                      (Parm, OutParm, ZeroConstructor)

void UTeamInterface_C::GetAllyTeams(TArray<TEnumAsByte<ETeams>>* AllyTeams)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInterface.TeamInterface_C.GetAllyTeams");

	UTeamInterface_C_GetAllyTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllyTeams != nullptr)
		*AllyTeams = params.AllyTeams;
}


// Function TeamInterface.TeamInterface_C.GetTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETeams>            Team                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTeamInterface_C::GetTeam(TEnumAsByte<ETeams>* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamInterface.TeamInterface_C.GetTeam");

	UTeamInterface_C_GetTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
