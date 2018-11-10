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

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AActivatableDoubleGateBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.UserConstructionScript");

	AActivatableDoubleGateBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AActivatableDoubleGateBase_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Timeline_2__FinishedFunc");

	AActivatableDoubleGateBase_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AActivatableDoubleGateBase_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Timeline_2__UpdateFunc");

	AActivatableDoubleGateBase_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.AnimateGates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              StartTransformLeft             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              EndTransformLeft               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              StartTransformRight            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              EndTransformRight              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableDoubleGateBase_C::AnimateGates(const struct FTransform& StartTransformLeft, const struct FTransform& EndTransformLeft, const struct FTransform& StartTransformRight, const struct FTransform& EndTransformRight, class USoundBase* Sound, bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.AnimateGates");

	AActivatableDoubleGateBase_C_AnimateGates_Params params;
	params.StartTransformLeft = StartTransformLeft;
	params.EndTransformLeft = EndTransformLeft;
	params.StartTransformRight = StartTransformRight;
	params.EndTransformRight = EndTransformRight;
	params.Sound = Sound;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AActivatableDoubleGateBase_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Deactivated");

	AActivatableDoubleGateBase_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableDoubleGateBase_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Activated");

	AActivatableDoubleGateBase_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.LoadState
// (Public, BlueprintCallable, BlueprintEvent)

void AActivatableDoubleGateBase_C::LoadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.LoadState");

	AActivatableDoubleGateBase_C_LoadState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.ExecuteUbergraph_ActivatableDoubleGateBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableDoubleGateBase_C::ExecuteUbergraph_ActivatableDoubleGateBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.ExecuteUbergraph_ActivatableDoubleGateBase");

	AActivatableDoubleGateBase_C_ExecuteUbergraph_ActivatableDoubleGateBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
