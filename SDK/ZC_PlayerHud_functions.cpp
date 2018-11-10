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

// Function PlayerHud.PlayerHud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerHud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.UserConstructionScript");

	APlayerHud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHud.PlayerHud_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerHud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.ReceiveBeginPlay");

	APlayerHud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHud.PlayerHud_C.CheckPoiArrowWidgetRenderTarget
// (BlueprintCallable, BlueprintEvent)

void APlayerHud_C::CheckPoiArrowWidgetRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.CheckPoiArrowWidgetRenderTarget");

	APlayerHud_C_CheckPoiArrowWidgetRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHud.PlayerHud_C.ExecuteUbergraph_PlayerHud
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerHud_C::ExecuteUbergraph_PlayerHud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHud.PlayerHud_C.ExecuteUbergraph_PlayerHud");

	APlayerHud_C_ExecuteUbergraph_PlayerHud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
