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

// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.GetMessageQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AMessageQueueBase_C*     MessageQueue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableSoundDialogue_new_C::GetMessageQueue(class AMessageQueueBase_C** MessageQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.GetMessageQueue");

	AActivatableSoundDialogue_new_C_GetMessageQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageQueue != nullptr)
		*MessageQueue = params.MessageQueue;
}


// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableSoundDialogue_new_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.UserConstructionScript");

	AActivatableSoundDialogue_new_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActivatableSoundDialogue_new_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.ReceiveBeginPlay");

	AActivatableSoundDialogue_new_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableSoundDialogue_new_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.Activated");

	AActivatableSoundDialogue_new_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature
// (BlueprintEvent)

void AActivatableSoundDialogue_new_C::BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature");

	AActivatableSoundDialogue_new_C_BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AActivatableSoundDialogue_new_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.Deactivated");

	AActivatableSoundDialogue_new_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.ExecuteUbergraph_ActivatableSoundDialogue_new
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableSoundDialogue_new_C::ExecuteUbergraph_ActivatableSoundDialogue_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C.ExecuteUbergraph_ActivatableSoundDialogue_new");

	AActivatableSoundDialogue_new_C_ExecuteUbergraph_ActivatableSoundDialogue_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
