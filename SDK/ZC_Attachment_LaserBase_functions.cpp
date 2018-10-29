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

// Function Attachment_LaserBase.Attachment_LaserBase_C.SetDecalPositionAndVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AAttachment_LaserBase_C::SetDecalPositionAndVisibility(const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.SetDecalPositionAndVisibility");

	AAttachment_LaserBase_C_SetDecalPositionAndVisibility_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_LaserBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.UserConstructionScript");

	AAttachment_LaserBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.Attached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WeaponInHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_LaserBase_C::Attached(bool* WeaponInHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.Attached");

	AAttachment_LaserBase_C_Attached_Params params;
	params.WeaponInHand = WeaponInHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.ReleasedWithoutAttachedToWeapon
// (BlueprintCallable, BlueprintEvent)

void AAttachment_LaserBase_C::ReleasedWithoutAttachedToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.ReleasedWithoutAttachedToWeapon");

	AAttachment_LaserBase_C_ReleasedWithoutAttachedToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.DeactivateWhenWeaponReleased
// (BlueprintCallable, BlueprintEvent)

void AAttachment_LaserBase_C::DeactivateWhenWeaponReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.DeactivateWhenWeaponReleased");

	AAttachment_LaserBase_C_DeactivateWhenWeaponReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.ActivateWhenWeaponGripped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand*               Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_LaserBase_C::ActivateWhenWeaponGripped(EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.ActivateWhenWeaponGripped");

	AAttachment_LaserBase_C_ActivateWhenWeaponGripped_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAttachment_LaserBase_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.OnGrip");

	AAttachment_LaserBase_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_LaserBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.ReceiveTick");

	AAttachment_LaserBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AAttachment_LaserBase_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.Activate");

	AAttachment_LaserBase_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttachment_LaserBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.ReceiveBeginPlay");

	AAttachment_LaserBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_LaserBase.Attachment_LaserBase_C.ExecuteUbergraph_Attachment_LaserBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_LaserBase_C::ExecuteUbergraph_Attachment_LaserBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_LaserBase.Attachment_LaserBase_C.ExecuteUbergraph_Attachment_LaserBase");

	AAttachment_LaserBase_C_ExecuteUbergraph_Attachment_LaserBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
