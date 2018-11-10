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

// Function Weapon_Python.Weapon_Python_C.LoadCartridgeAfterCheckpoint
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::LoadCartridgeAfterCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.LoadCartridgeAfterCheckpoint");

	AWeapon_Python_C_LoadCartridgeAfterCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.AttachmentAttachCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C** Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewAttachment                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachmentCategory>* AttachmentCategory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attachable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AAttachableStaticMeshActorBase_C* AttachableAttachment           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsIndicatorShown               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::AttachmentAttachCheck(class AAttachableStaticMeshActorBase_C** Attachment, class AActor** NewAttachment, TEnumAsByte<EAttachmentCategory>* AttachmentCategory, bool* Attachable, class AAttachableStaticMeshActorBase_C** AttachableAttachment, bool* IsIndicatorShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.AttachmentAttachCheck");

	AWeapon_Python_C_AttachmentAttachCheck_Params params;
	params.Attachment = Attachment;
	params.NewAttachment = NewAttachment;
	params.AttachmentCategory = AttachmentCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attachable != nullptr)
		*Attachable = params.Attachable;
	if (AttachableAttachment != nullptr)
		*AttachableAttachment = params.AttachableAttachment;
	if (IsIndicatorShown != nullptr)
		*IsIndicatorShown = params.IsIndicatorShown;
}


// Function Weapon_Python.Weapon_Python_C.MagRolloutAllowed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allowed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::MagRolloutAllowed(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.MagRolloutAllowed");

	AWeapon_Python_C_MagRolloutAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;
}


// Function Weapon_Python.Weapon_Python_C.MagRollinAllowed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapon_Python_C::MagRollinAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.MagRollinAllowed");

	AWeapon_Python_C_MagRollinAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Weapon_Python.Weapon_Python_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.UserConstructionScript");

	AWeapon_Python_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ReleaseMagAnim__FinishedFunc
// (BlueprintEvent)

void AWeapon_Python_C::ReleaseMagAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ReleaseMagAnim__FinishedFunc");

	AWeapon_Python_C_ReleaseMagAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ReleaseMagAnim__UpdateFunc
// (BlueprintEvent)

void AWeapon_Python_C::ReleaseMagAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ReleaseMagAnim__UpdateFunc");

	AWeapon_Python_C_ReleaseMagAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.RotateCylinder__FinishedFunc
// (BlueprintEvent)

void AWeapon_Python_C::RotateCylinder__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.RotateCylinder__FinishedFunc");

	AWeapon_Python_C_RotateCylinder__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.RotateCylinder__UpdateFunc
// (BlueprintEvent)

void AWeapon_Python_C::RotateCylinder__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.RotateCylinder__UpdateFunc");

	AWeapon_Python_C_RotateCylinder__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)

void AWeapon_Python_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.Timeline_0_0__FinishedFunc");

	AWeapon_Python_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)

void AWeapon_Python_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.Timeline_0_0__UpdateFunc");

	AWeapon_Python_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.OnReleaseMagazine
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::OnReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.OnReleaseMagazine");

	AWeapon_Python_C_OnReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ReceiveTick");

	AWeapon_Python_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ChamberAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::ChamberAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ChamberAmmo");

	AWeapon_Python_C_ChamberAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.FireBullet
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::FireBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.FireBullet");

	AWeapon_Python_C_FireBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.Reload
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.Reload");

	AWeapon_Python_C_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.SpawnCartridgeCase
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::SpawnCartridgeCase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.SpawnCartridgeCase");

	AWeapon_Python_C_SpawnCartridgeCase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.FireModeChangeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Lerp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::FireModeChangeUpdate(float* Lerp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.FireModeChangeUpdate");

	AWeapon_Python_C_FireModeChangeUpdate_Params params;
	params.Lerp = Lerp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeapon_Python_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ReceiveBeginPlay");

	AWeapon_Python_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.MagRollout
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::MagRollout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.MagRollout");

	AWeapon_Python_C_MagRollout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.MagrollOutEnabled
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::MagrollOutEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.MagrollOutEnabled");

	AWeapon_Python_C_MagrollOutEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.MagRollIn
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::MagRollIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.MagRollIn");

	AWeapon_Python_C_MagRollIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.AttachmentReleaseLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::AttachmentReleaseLocal(class AAttachmentBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.AttachmentReleaseLocal");

	AWeapon_Python_C_AttachmentReleaseLocal_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ReleaseMagazine
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::ReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ReleaseMagazine");

	AWeapon_Python_C_ReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ReleaseSliderLocal
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::ReleaseSliderLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ReleaseSliderLocal");

	AWeapon_Python_C_ReleaseSliderLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.AttachmentAttachLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C** Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::AttachmentAttachLocal(class AAttachableStaticMeshActorBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.AttachmentAttachLocal");

	AWeapon_Python_C_AttachmentAttachLocal_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.InstantCocking
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Python_C::InstantCocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.InstantCocking");

	AWeapon_Python_C_InstantCocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Python.Weapon_Python_C.ExecuteUbergraph_Weapon_Python
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Python_C::ExecuteUbergraph_Weapon_Python(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Python.Weapon_Python_C.ExecuteUbergraph_Weapon_Python");

	AWeapon_Python_C_ExecuteUbergraph_Weapon_Python_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
