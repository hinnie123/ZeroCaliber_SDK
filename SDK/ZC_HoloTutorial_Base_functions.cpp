// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoloTutorial_Base.HoloTutorial_Base_C.HandleVideoPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Close                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHoloTutorial_Base_C::HandleVideoPlayers(bool Close)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.HandleVideoPlayers");

	AHoloTutorial_Base_C_HandleVideoPlayers_Params params;
	params.Close = Close;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.ShowStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHoloTutorial_Base_C::ShowStates(bool Activated)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.ShowStates");

	AHoloTutorial_Base_C_ShowStates_Params params;
	params.Activated = Activated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHoloTutorial_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.UserConstructionScript");

	AHoloTutorial_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.HoloTimeline__FinishedFunc
// (BlueprintEvent)

void AHoloTutorial_Base_C::HoloTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.HoloTimeline__FinishedFunc");

	AHoloTutorial_Base_C_HoloTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.HoloTimeline__UpdateFunc
// (BlueprintEvent)

void AHoloTutorial_Base_C::HoloTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.HoloTimeline__UpdateFunc");

	AHoloTutorial_Base_C_HoloTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHoloTutorial_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.ReceiveBeginPlay");

	AHoloTutorial_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.BndEvt__ActivateTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHoloTutorial_Base_C::BndEvt__ActivateTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.BndEvt__ActivateTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AHoloTutorial_Base_C_BndEvt__ActivateTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.Handle Activation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHoloTutorial_Base_C::Handle_Activation(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.Handle Activation");

	AHoloTutorial_Base_C_Handle_Activation_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.BndEvt__DeactivateTrigger_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHoloTutorial_Base_C::BndEvt__DeactivateTrigger_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.BndEvt__DeactivateTrigger_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature");

	AHoloTutorial_Base_C_BndEvt__DeactivateTrigger_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoloTutorial_Base.HoloTutorial_Base_C.ExecuteUbergraph_HoloTutorial_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHoloTutorial_Base_C::ExecuteUbergraph_HoloTutorial_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoloTutorial_Base.HoloTutorial_Base_C.ExecuteUbergraph_HoloTutorial_Base");

	AHoloTutorial_Base_C_ExecuteUbergraph_HoloTutorial_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
