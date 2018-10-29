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

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.TurnOnLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Flashlight_01_C::TurnOnLight(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.TurnOnLight");

	AAttachment_Flashlight_01_C_TurnOnLight_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_Flashlight_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.UserConstructionScript");

	AAttachment_Flashlight_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AAttachment_Flashlight_01_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.Activate");

	AAttachment_Flashlight_01_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.Attached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WeaponInHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Flashlight_01_C::Attached(bool* WeaponInHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.Attached");

	AAttachment_Flashlight_01_C_Attached_Params params;
	params.WeaponInHand = WeaponInHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ReleasedWithoutAttachedToWeapon
// (BlueprintCallable, BlueprintEvent)

void AAttachment_Flashlight_01_C::ReleasedWithoutAttachedToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ReleasedWithoutAttachedToWeapon");

	AAttachment_Flashlight_01_C_ReleasedWithoutAttachedToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.DeactivateWhenWeaponReleased
// (BlueprintCallable, BlueprintEvent)

void AAttachment_Flashlight_01_C::DeactivateWhenWeaponReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.DeactivateWhenWeaponReleased");

	AAttachment_Flashlight_01_C_DeactivateWhenWeaponReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ActivateWhenWeaponGripped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand*               Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Flashlight_01_C::ActivateWhenWeaponGripped(EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ActivateWhenWeaponGripped");

	AAttachment_Flashlight_01_C_ActivateWhenWeaponGripped_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ExecuteUbergraph_Attachment_Flashlight_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Flashlight_01_C::ExecuteUbergraph_Attachment_Flashlight_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ExecuteUbergraph_Attachment_Flashlight_01");

	AAttachment_Flashlight_01_C_ExecuteUbergraph_Attachment_Flashlight_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
