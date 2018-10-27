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

// Function TeamInterface.TeamInterface_C.GetAllyTeams
struct UTeamInterface_C_GetAllyTeams_Params
{
	TArray<TEnumAsByte<ETeams>>                        AllyTeams;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function TeamInterface.TeamInterface_C.GetTeam
struct UTeamInterface_C_GetTeam_Params
{
	TEnumAsByte<ETeams>                                Team;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
