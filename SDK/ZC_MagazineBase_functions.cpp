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

// Function MagazineBase.MagazineBase_C.KickOutMagazine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazineBase_C::KickOutMagazine(class AActor* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.KickOutMagazine");

	AMagazineBase_C_KickOutMagazine_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagazineBase.MagazineBase_C.CanBeDetached
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Detachable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMagazineBase_C::CanBeDetached(class UGripMotionControllerComponent** GrippingController, bool* Detachable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.CanBeDetached");

	AMagazineBase_C_CanBeDetached_Params params;
	params.GrippingController = GrippingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Detachable != nullptr)
		*Detachable = params.Detachable;
}


// Function MagazineBase.MagazineBase_C.GetAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AmmoCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMagazineBase_C::GetAmmoCount(int* AmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.GetAmmoCount");

	AMagazineBase_C_GetAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoCount != nullptr)
		*AmmoCount = params.AmmoCount;
}


// Function MagazineBase.MagazineBase_C.ReduceAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)

void AMagazineBase_C::ReduceAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.ReduceAmmoCount");

	AMagazineBase_C_ReduceAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagazineBase.MagazineBase_C.GetCurrentOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              CurrentOffset                  (Parm, OutParm, IsPlainOldData)

void AMagazineBase_C::GetCurrentOffset(struct FTransform* CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.GetCurrentOffset");

	AMagazineBase_C_GetCurrentOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentOffset != nullptr)
		*CurrentOffset = params.CurrentOffset;
}


// Function MagazineBase.MagazineBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazineBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.UserConstructionScript");

	AMagazineBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagazineBase.MagazineBase_C.SetDisappearTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AMagazineBase_C::SetDisappearTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.SetDisappearTimer");

	AMagazineBase_C_SetDisappearTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagazineBase.MagazineBase_C.ReceiveHit
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

void AMagazineBase_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.ReceiveHit");

	AMagazineBase_C_ReceiveHit_Params params;
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


// Function MagazineBase.MagazineBase_C.ExecuteUbergraph_MagazineBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazineBase_C::ExecuteUbergraph_MagazineBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MagazineBase.MagazineBase_C.ExecuteUbergraph_MagazineBase");

	AMagazineBase_C_ExecuteUbergraph_MagazineBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
