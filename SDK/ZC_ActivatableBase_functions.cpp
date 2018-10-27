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

// Function ActivatableBase.ActivatableBase_C.LoadState
// (Public, BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::LoadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.LoadState");

	AActivatableBase_C_LoadState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.OnRep_State
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::OnRep_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.OnRep_State");

	AActivatableBase_C_OnRep_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.DrawArrowFromToActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  FromActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ToActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ScaleMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            ArrowColor                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AActivatableBase_C::DrawArrowFromToActor(class AActor* FromActor, class AActor* ToActor, const struct FVector& ScaleMultiplier, const struct FLinearColor& ArrowColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.DrawArrowFromToActor");

	AActivatableBase_C_DrawArrowFromToActor_Params params;
	params.FromActor = FromActor;
	params.ToActor = ToActor;
	params.ScaleMultiplier = ScaleMultiplier;
	params.ArrowColor = ArrowColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.AllDeactivationsGot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllActivatorsActivated         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::AllDeactivationsGot(bool* AllActivatorsActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.AllDeactivationsGot");

	AActivatableBase_C_AllDeactivationsGot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllActivatorsActivated != nullptr)
		*AllActivatorsActivated = params.AllActivatorsActivated;
}


// Function ActivatableBase.ActivatableBase_C.AllActivationsGot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AllActivatorsActivated         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::AllActivationsGot(bool* AllActivatorsActivated)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.AllActivationsGot");

	AActivatableBase_C_AllActivationsGot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllActivatorsActivated != nullptr)
		*AllActivatorsActivated = params.AllActivatorsActivated;
}


// Function ActivatableBase.ActivatableBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.UserConstructionScript");

	AActivatableBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActivatableBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.ReceiveBeginPlay");

	AActivatableBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.HandleActivatedEventDispatcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActivatableBase_C*      Activator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::HandleActivatedEventDispatcher(class AActivatableBase_C* Activator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.HandleActivatedEventDispatcher");

	AActivatableBase_C_HandleActivatedEventDispatcher_Params params;
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.Activate");

	AActivatableBase_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.Deactivate");

	AActivatableBase_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.HandleDeactivatedEventDispatcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActivatableBase_C*      Activator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::HandleDeactivatedEventDispatcher(class AActivatableBase_C* Activator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.HandleDeactivatedEventDispatcher");

	AActivatableBase_C_HandleDeactivatedEventDispatcher_Params params;
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.Activated");

	AActivatableBase_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.Deactivated");

	AActivatableBase_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.CallActivatedEvent
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::CallActivatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.CallActivatedEvent");

	AActivatableBase_C_CallActivatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.CallDeactivatedEvent
// (BlueprintCallable, BlueprintEvent)

void AActivatableBase_C::CallDeactivatedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.CallDeactivatedEvent");

	AActivatableBase_C_CallDeactivatedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.ExecuteUbergraph_ActivatableBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::ExecuteUbergraph_ActivatableBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.ExecuteUbergraph_ActivatableBase");

	AActivatableBase_C_ExecuteUbergraph_ActivatableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.DeactivatedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActivatableBase_C*      Activator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::DeactivatedEventDispatcher__DelegateSignature(class AActivatableBase_C* Activator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.DeactivatedEventDispatcher__DelegateSignature");

	AActivatableBase_C_DeactivatedEventDispatcher__DelegateSignature_Params params;
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableBase.ActivatableBase_C.ActivatedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActivatableBase_C*      Activator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableBase_C::ActivatedEventDispatcher__DelegateSignature(class AActivatableBase_C* Activator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableBase.ActivatableBase_C.ActivatedEventDispatcher__DelegateSignature");

	AActivatableBase_C_ActivatedEventDispatcher__DelegateSignature_Params params;
	params.Activator = Activator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
