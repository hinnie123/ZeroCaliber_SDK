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

// Function DeathWidget_SinglePlayer.DeathWidget_SinglePlayer_C.BndEvt__RestartFromCheckpointButton_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UDeathWidget_SinglePlayer_C::BndEvt__RestartFromCheckpointButton_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget_SinglePlayer.DeathWidget_SinglePlayer_C.BndEvt__RestartFromCheckpointButton_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature");

	UDeathWidget_SinglePlayer_C_BndEvt__RestartFromCheckpointButton_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget_SinglePlayer.DeathWidget_SinglePlayer_C.ExecuteUbergraph_DeathWidget_SinglePlayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathWidget_SinglePlayer_C::ExecuteUbergraph_DeathWidget_SinglePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget_SinglePlayer.DeathWidget_SinglePlayer_C.ExecuteUbergraph_DeathWidget_SinglePlayer");

	UDeathWidget_SinglePlayer_C_ExecuteUbergraph_DeathWidget_SinglePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
