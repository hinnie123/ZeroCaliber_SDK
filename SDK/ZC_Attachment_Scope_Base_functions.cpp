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

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ActivateScope
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Turn_On                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Scope_Base_C::ActivateScope(EControllerHand Hand, bool Turn_On)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.ActivateScope");

	AAttachment_Scope_Base_C_ActivateScope_Params params;
	params.Hand = Hand;
	params.Turn_On = Turn_On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.TurnOnRendering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Scope_Base_C::TurnOnRendering(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.TurnOnRendering");

	AAttachment_Scope_Base_C_TurnOnRendering_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_Scope_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.UserConstructionScript");

	AAttachment_Scope_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttachment_Scope_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.ReceiveBeginPlay");

	AAttachment_Scope_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAttachment_Scope_Base_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.OnGrip");

	AAttachment_Scope_Base_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ReleasedWithoutAttachedToWeapon
// (BlueprintCallable, BlueprintEvent)

void AAttachment_Scope_Base_C::ReleasedWithoutAttachedToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.ReleasedWithoutAttachedToWeapon");

	AAttachment_Scope_Base_C_ReleasedWithoutAttachedToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.DeactivateWhenWeaponReleased
// (BlueprintCallable, BlueprintEvent)

void AAttachment_Scope_Base_C::DeactivateWhenWeaponReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.DeactivateWhenWeaponReleased");

	AAttachment_Scope_Base_C_DeactivateWhenWeaponReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.Attached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WeaponInHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Scope_Base_C::Attached(bool* WeaponInHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.Attached");

	AAttachment_Scope_Base_C_Attached_Params params;
	params.WeaponInHand = WeaponInHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ActivateWhenWeaponGripped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand*               Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Scope_Base_C::ActivateWhenWeaponGripped(EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.ActivateWhenWeaponGripped");

	AAttachment_Scope_Base_C_ActivateWhenWeaponGripped_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AAttachment_Scope_Base_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.Activate");

	AAttachment_Scope_Base_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>*       InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAttachment_Scope_Base_C::Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.Hover");

	AAttachment_Scope_Base_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ExecuteUbergraph_Attachment_Scope_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Scope_Base_C::ExecuteUbergraph_Attachment_Scope_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Scope_Base.Attachment_Scope_Base_C.ExecuteUbergraph_Attachment_Scope_Base");

	AAttachment_Scope_Base_C_ExecuteUbergraph_Attachment_Scope_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
