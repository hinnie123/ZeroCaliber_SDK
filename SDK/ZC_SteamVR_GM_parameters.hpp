#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SteamVR_GM.SteamVR_GM_C.UserConstructionScript
struct ASteamVR_GM_C_UserConstructionScript_Params
{
};

// Function SteamVR_GM.SteamVR_GM_C.K2_PostLogin
struct ASteamVR_GM_C_K2_PostLogin_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVR_GM.SteamVR_GM_C.HandleStartingNewPlayer
struct ASteamVR_GM_C_HandleStartingNewPlayer_Params
{
	class APlayerController**                          NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SteamVR_GM.SteamVR_GM_C.ExecuteUbergraph_SteamVR_GM
struct ASteamVR_GM_C_ExecuteUbergraph_SteamVR_GM_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
