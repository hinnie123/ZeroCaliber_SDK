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

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ModifyCollisionWhenBlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldCollide                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::ModifyCollisionWhenBlocked(bool ShouldCollide)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ModifyCollisionWhenBlocked");

	AAttachableStaticMeshActorBase_C_ModifyCollisionWhenBlocked_Params params;
	params.ShouldCollide = ShouldCollide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ClosestGripSlotInRange
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          bSecondarySlot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent** CallingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  OverridePrefix                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::ClosestGripSlotInRange(struct FVector* WorldLocation, bool* bSecondarySlot, class UGripMotionControllerComponent** CallingController, struct FName* OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ClosestGripSlotInRange");

	AAttachableStaticMeshActorBase_C_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.CanBeDetached
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Detachable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::CanBeDetached(class UGripMotionControllerComponent* GrippingController, bool* Detachable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.CanBeDetached");

	AAttachableStaticMeshActorBase_C_CanBeDetached_Params params;
	params.GrippingController = GrippingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Detachable != nullptr)
		*Detachable = params.Detachable;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachableStaticMeshActorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.UserConstructionScript");

	AAttachableStaticMeshActorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Attached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WeaponInHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::Attached(bool WeaponInHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Attached");

	AAttachableStaticMeshActorBase_C_Attached_Params params;
	params.WeaponInHand = WeaponInHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Released
// (BlueprintCallable, BlueprintEvent)

void AAttachableStaticMeshActorBase_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Released");

	AAttachableStaticMeshActorBase_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AAttachableStaticMeshActorBase_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Activate");

	AAttachableStaticMeshActorBase_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAttachableStaticMeshActorBase_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.OnGrip");

	AAttachableStaticMeshActorBase_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ReleasedWithoutAttachedToWeapon
// (BlueprintCallable, BlueprintEvent)

void AAttachableStaticMeshActorBase_C::ReleasedWithoutAttachedToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ReleasedWithoutAttachedToWeapon");

	AAttachableStaticMeshActorBase_C_ReleasedWithoutAttachedToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.DeactivateWhenWeaponReleased
// (BlueprintCallable, BlueprintEvent)

void AAttachableStaticMeshActorBase_C::DeactivateWhenWeaponReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.DeactivateWhenWeaponReleased");

	AAttachableStaticMeshActorBase_C_DeactivateWhenWeaponReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ActivateWhenWeaponGripped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::ActivateWhenWeaponGripped(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ActivateWhenWeaponGripped");

	AAttachableStaticMeshActorBase_C_ActivateWhenWeaponGripped_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.AttachSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReloadType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::AttachSound(float ReloadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.AttachSound");

	AAttachableStaticMeshActorBase_C_AttachSound_Params params;
	params.ReloadType = ReloadType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ExecuteUbergraph_AttachableStaticMeshActorBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachableStaticMeshActorBase_C::ExecuteUbergraph_AttachableStaticMeshActorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ExecuteUbergraph_AttachableStaticMeshActorBase");

	AAttachableStaticMeshActorBase_C_ExecuteUbergraph_AttachableStaticMeshActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
