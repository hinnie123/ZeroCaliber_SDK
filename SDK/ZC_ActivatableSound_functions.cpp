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

// Function ActivatableSound.ActivatableSound_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableSound_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSound.ActivatableSound_C.UserConstructionScript");

	AActivatableSound_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSound.ActivatableSound_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableSound_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSound.ActivatableSound_C.Activated");

	AActivatableSound_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSound.ActivatableSound_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AActivatableSound_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSound.ActivatableSound_C.Deactivated");

	AActivatableSound_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSound.ActivatableSound_C.BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature
// (BlueprintEvent)

void AActivatableSound_C::BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSound.ActivatableSound_C.BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature");

	AActivatableSound_C_BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSound.ActivatableSound_C.ExecuteUbergraph_ActivatableSound
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableSound_C::ExecuteUbergraph_ActivatableSound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSound.ActivatableSound_C.ExecuteUbergraph_ActivatableSound");

	AActivatableSound_C_ExecuteUbergraph_ActivatableSound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
