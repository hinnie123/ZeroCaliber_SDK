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

// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMultiplayerScoreboardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.Construct");

	UMultiplayerScoreboardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.UpdateScoreboard
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerScoreboardWidget_C::UpdateScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.UpdateScoreboard");

	UMultiplayerScoreboardWidget_C_UpdateScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.SetCurrentMaxPlayerInfoWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerInfoWidget_C*     Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerScoreboardWidget_C::SetCurrentMaxPlayerInfoWidget(class UPlayerInfoWidget_C* Target, int Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.SetCurrentMaxPlayerInfoWidget");

	UMultiplayerScoreboardWidget_C_SetCurrentMaxPlayerInfoWidget_Params params;
	params.Target = Target;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerScoreboardWidget_C::ActivateWidget(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.ActivateWidget");

	UMultiplayerScoreboardWidget_C_ActivateWidget_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.ExecuteUbergraph_MultiplayerScoreboardWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerScoreboardWidget_C::ExecuteUbergraph_MultiplayerScoreboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.ExecuteUbergraph_MultiplayerScoreboardWidget");

	UMultiplayerScoreboardWidget_C_ExecuteUbergraph_MultiplayerScoreboardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
