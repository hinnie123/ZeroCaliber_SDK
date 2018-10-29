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

// Function GunBase.GunBase_C.RequestsSocketing
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGunBase_C::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.RequestsSocketing");

	AGunBase_C_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function GunBase.GunBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGunBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.UserConstructionScript");

	AGunBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.OnUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGunBase_C::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.OnUsed");

	AGunBase_C_OnUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.OnSecondaryUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGunBase_C::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.OnSecondaryUsed");

	AGunBase_C_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.OnEndSecondaryUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGunBase_C::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.OnEndSecondaryUsed");

	AGunBase_C_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.FireGun
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AGunBase_C::FireGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.FireGun");

	AGunBase_C_FireGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.EndFireGun
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AGunBase_C::EndFireGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.EndFireGun");

	AGunBase_C_EndFireGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.FireGunServer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGunBase_C::FireGunServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.FireGunServer");

	AGunBase_C_FireGunServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.EndFireGunServer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AGunBase_C::EndFireGunServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.EndFireGunServer");

	AGunBase_C_EndFireGunServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGunBase_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.OnGrip");

	AGunBase_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.OnGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGunBase_C::OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.OnGripRelease");

	AGunBase_C_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.FireGunLocal
// (BlueprintCallable, BlueprintEvent)

void AGunBase_C::FireGunLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.FireGunLocal");

	AGunBase_C_FireGunLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.EndFireGunLocal
// (BlueprintCallable, BlueprintEvent)

void AGunBase_C::EndFireGunLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.EndFireGunLocal");

	AGunBase_C_EndFireGunLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.FireBullet
// (BlueprintCallable, BlueprintEvent)

void AGunBase_C::FireBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.FireBullet");

	AGunBase_C_FireBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGunBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.ReceiveTick");

	AGunBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGunBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.ReceiveBeginPlay");

	AGunBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.OnEndUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGunBase_C::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.OnEndUsed");

	AGunBase_C_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunBase.GunBase_C.ExecuteUbergraph_GunBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGunBase_C::ExecuteUbergraph_GunBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunBase.GunBase_C.ExecuteUbergraph_GunBase");

	AGunBase_C_ExecuteUbergraph_GunBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
