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

// Function SteamVR_GM.SteamVR_GM_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASteamVR_GM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR_GM.SteamVR_GM_C.UserConstructionScript");

	ASteamVR_GM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVR_GM.SteamVR_GM_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteamVR_GM_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR_GM.SteamVR_GM_C.K2_PostLogin");

	ASteamVR_GM_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVR_GM.SteamVR_GM_C.HandleStartingNewPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteamVR_GM_C::HandleStartingNewPlayer(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR_GM.SteamVR_GM_C.HandleStartingNewPlayer");

	ASteamVR_GM_C_HandleStartingNewPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SteamVR_GM.SteamVR_GM_C.ExecuteUbergraph_SteamVR_GM
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteamVR_GM_C::ExecuteUbergraph_SteamVR_GM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVR_GM.SteamVR_GM_C.ExecuteUbergraph_SteamVR_GM");

	ASteamVR_GM_C_ExecuteUbergraph_SteamVR_GM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
