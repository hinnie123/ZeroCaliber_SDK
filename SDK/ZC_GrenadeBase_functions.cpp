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

// Function GrenadeBase.GrenadeBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrenadeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeBase.GrenadeBase_C.UserConstructionScript");

	AGrenadeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeBase.GrenadeBase_C.OnChildGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGrenadeBase_C::OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeBase.GrenadeBase_C.OnChildGrip");

	AGrenadeBase_C_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeBase.GrenadeBase_C.OnGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenadeBase_C::OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeBase.GrenadeBase_C.OnGripRelease");

	AGrenadeBase_C_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeBase.GrenadeBase_C.SetCollisionResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenadeBase_C::SetCollisionResponse(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeBase.GrenadeBase_C.SetCollisionResponse");

	AGrenadeBase_C_SetCollisionResponse_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeBase.GrenadeBase_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>*       InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGrenadeBase_C::Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeBase.GrenadeBase_C.Hover");

	AGrenadeBase_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeBase.GrenadeBase_C.ExecuteUbergraph_GrenadeBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenadeBase_C::ExecuteUbergraph_GrenadeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeBase.GrenadeBase_C.ExecuteUbergraph_GrenadeBase");

	AGrenadeBase_C_ExecuteUbergraph_GrenadeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
