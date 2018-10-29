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

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.SetCollisionResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionResponse> NewResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::SetCollisionResponse(TEnumAsByte<ECollisionResponse> NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.SetCollisionResponse");

	AGrippableStaticMeshActorBase_C_SetCollisionResponse_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.AttachHandSecondary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GripMotionController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::AttachHandSecondary(class UGripMotionControllerComponent* GripMotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.AttachHandSecondary");

	AGrippableStaticMeshActorBase_C_AttachHandSecondary_Params params;
	params.GripMotionController = GripMotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.AttachHandPrimary
// (Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::AttachHandPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.AttachHandPrimary");

	AGrippableStaticMeshActorBase_C_AttachHandPrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.IsLocallyControlled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LocallyControlled              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::IsLocallyControlled(bool* LocallyControlled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.IsLocallyControlled");

	AGrippableStaticMeshActorBase_C_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocallyControlled != nullptr)
		*LocallyControlled = params.LocallyControlled;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.RumbleController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::RumbleController(float Intensity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.RumbleController");

	AGrippableStaticMeshActorBase_C_RumbleController_Params params;
	params.Intensity = Intensity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.CancelDisappearTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::CancelDisappearTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.CancelDisappearTimer");

	AGrippableStaticMeshActorBase_C_CancelDisappearTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.SetDisappearTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::SetDisappearTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.SetDisappearTimer");

	AGrippableStaticMeshActorBase_C_SetDisappearTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.UserConstructionScript");

	AGrippableStaticMeshActorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveTick");

	AGrippableStaticMeshActorBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnGripRelease");

	AGrippableStaticMeshActorBase_C_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::Disappear()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Disappear");

	AGrippableStaticMeshActorBase_C_Disappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActorBase_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnGrip");

	AGrippableStaticMeshActorBase_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveHit");

	AGrippableStaticMeshActorBase_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>        InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::Hover(TEnumAsByte<EHoverEnum> InteractType, class USceneComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Hover");

	AGrippableStaticMeshActorBase_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::Unhover(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Unhover");

	AGrippableStaticMeshActorBase_C_Unhover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnSecondaryGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent**        SecondaryGripComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActorBase_C::OnSecondaryGrip(class USceneComponent** SecondaryGripComponent, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnSecondaryGrip");

	AGrippableStaticMeshActorBase_C_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnSecondaryGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent**        ReleasingSecondaryGripComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActorBase_C::OnSecondaryGripRelease(class USceneComponent** ReleasingSecondaryGripComponent, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnSecondaryGripRelease");

	AGrippableStaticMeshActorBase_C_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveBeginPlay");

	AGrippableStaticMeshActorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ExecuteUbergraph_GrippableStaticMeshActorBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActorBase_C::ExecuteUbergraph_GrippableStaticMeshActorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ExecuteUbergraph_GrippableStaticMeshActorBase");

	AGrippableStaticMeshActorBase_C_ExecuteUbergraph_GrippableStaticMeshActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.PickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActorBase_C::PickedUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.PickedUp__DelegateSignature");

	AGrippableStaticMeshActorBase_C_PickedUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
