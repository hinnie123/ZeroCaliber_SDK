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

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.SetWeaponTail
// (Public, BlueprintCallable, BlueprintEvent)

void AWindDeTrigger_BP_C::SetWeaponTail()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.SetWeaponTail");

	AWindDeTrigger_BP_C_SetWeaponTail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.GetGrippedWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponBase_C*           Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWindDeTrigger_BP_C::GetGrippedWeapon(class AActor* Actor, class AWeaponBase_C** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.GetGrippedWeapon");

	AWindDeTrigger_BP_C_GetGrippedWeapon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.GetBinauralWindReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWindDeTrigger_BP_C::GetBinauralWindReference(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.GetBinauralWindReference");

	AWindDeTrigger_BP_C_GetBinauralWindReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWindDeTrigger_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.UserConstructionScript");

	AWindDeTrigger_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWindDeTrigger_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWindDeTrigger_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindDeTrigger_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AWindDeTrigger_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWindDeTrigger_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.ReceiveBeginPlay");

	AWindDeTrigger_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.SetWeaponinPlayerHand
// (BlueprintCallable, BlueprintEvent)

void AWindDeTrigger_BP_C::SetWeaponinPlayerHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.SetWeaponinPlayerHand");

	AWindDeTrigger_BP_C_SetWeaponinPlayerHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindDeTrigger_BP.WindDeTrigger_BP_C.ExecuteUbergraph_WindDeTrigger_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindDeTrigger_BP_C::ExecuteUbergraph_WindDeTrigger_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindDeTrigger_BP.WindDeTrigger_BP_C.ExecuteUbergraph_WindDeTrigger_BP");

	AWindDeTrigger_BP_C_ExecuteUbergraph_WindDeTrigger_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
