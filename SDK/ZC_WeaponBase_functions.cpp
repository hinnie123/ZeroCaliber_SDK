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

// Function WeaponBase.WeaponBase_C.AttachmentAttachTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentAttachTransforms(class AAttachableStaticMeshActorBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentAttachTransforms");

	AWeaponBase_C_AttachmentAttachTransforms_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_Magazine
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_Magazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_Magazine");

	AWeaponBase_C_OnRep_Magazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_AttachmentStock
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_AttachmentStock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_AttachmentStock");

	AWeaponBase_C_OnRep_AttachmentStock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_AttachmentSide
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_AttachmentSide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_AttachmentSide");

	AWeaponBase_C_OnRep_AttachmentSide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_AttachmentBarrelEnd
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_AttachmentBarrelEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_AttachmentBarrelEnd");

	AWeaponBase_C_OnRep_AttachmentBarrelEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_AttachmentUnderBarrel
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_AttachmentUnderBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_AttachmentUnderBarrel");

	AWeaponBase_C_OnRep_AttachmentUnderBarrel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_AttachmentScope
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_AttachmentScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_AttachmentScope");

	AWeaponBase_C_OnRep_AttachmentScope_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentAttachLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentAttachLocal(class AAttachableStaticMeshActorBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentAttachLocal");

	AWeaponBase_C_AttachmentAttachLocal_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_SelectedFireMode
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_SelectedFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_SelectedFireMode");

	AWeaponBase_C_OnRep_SelectedFireMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnRep_WeaponOwnerCategory
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnRep_WeaponOwnerCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnRep_WeaponOwnerCategory");

	AWeaponBase_C_OnRep_WeaponOwnerCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AmmoCountScaleToTen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeaponBase_C::AmmoCountScaleToTen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AmmoCountScaleToTen");

	AWeaponBase_C_AmmoCountScaleToTen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponBase.WeaponBase_C.DetachAttachmentFromHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::DetachAttachmentFromHand(class AAttachableStaticMeshActorBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.DetachAttachmentFromHand");

	AWeaponBase_C_DetachAttachmentFromHand_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SetFmodEventparam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::SetFmodEventparam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SetFmodEventparam");

	AWeaponBase_C_SetFmodEventparam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SetupProperties
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::SetupProperties(class UObject* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SetupProperties");

	AWeaponBase_C_SetupProperties_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.GetMuzzlePsScaleByDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Scale                          (Parm, OutParm, IsPlainOldData)

void AWeaponBase_C::GetMuzzlePsScaleByDistance(struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetMuzzlePsScaleByDistance");

	AWeaponBase_C_GetMuzzlePsScaleByDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function WeaponBase.WeaponBase_C.UpdateBarrelSmokeProjectileCount
// (Protected, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::UpdateBarrelSmokeProjectileCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.UpdateBarrelSmokeProjectileCount");

	AWeaponBase_C_UpdateBarrelSmokeProjectileCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.DeactivateAttachmentsOnRelease
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::DeactivateAttachmentsOnRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.DeactivateAttachmentsOnRelease");

	AWeaponBase_C_DeactivateAttachmentsOnRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ActivateAttachmentOnGrip
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ActivateAttachmentOnGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ActivateAttachmentOnGrip");

	AWeaponBase_C_ActivateAttachmentOnGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.GetAdditionalMuzzleSpeedAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetAdditionalMuzzleSpeedAttachment(class AAttachableStaticMeshActorBase_C* Attachment, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetAdditionalMuzzleSpeedAttachment");

	AWeaponBase_C_GetAdditionalMuzzleSpeedAttachment_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function WeaponBase.WeaponBase_C.GetAdditionalMuzzleSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MuzzleSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetAdditionalMuzzleSpeed(float* MuzzleSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetAdditionalMuzzleSpeed");

	AWeaponBase_C_GetAdditionalMuzzleSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MuzzleSpeed != nullptr)
		*MuzzleSpeed = params.MuzzleSpeed;
}


// Function WeaponBase.WeaponBase_C.GetModifiedVolumeAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetModifiedVolumeAttachment(class AAttachableStaticMeshActorBase_C* Attachment, float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetModifiedVolumeAttachment");

	AWeaponBase_C_GetModifiedVolumeAttachment_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function WeaponBase.WeaponBase_C.GetModifiedVolume
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Volume                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetModifiedVolume(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetModifiedVolume");

	AWeaponBase_C_GetModifiedVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Volume != nullptr)
		*Volume = params.Volume;
}


// Function WeaponBase.WeaponBase_C.ClosestGripSlotInRange
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          bSecondarySlot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent** CallingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  OverridePrefix                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::ClosestGripSlotInRange(struct FVector* WorldLocation, bool* bSecondarySlot, class UGripMotionControllerComponent** CallingController, struct FName* OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ClosestGripSlotInRange");

	AWeaponBase_C_ClosestGripSlotInRange_Params params;
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


// Function WeaponBase.WeaponBase_C.GetProjectileInstigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   AsPawn                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetProjectileInstigator(class APawn** AsPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetProjectileInstigator");

	AWeaponBase_C_GetProjectileInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsPawn != nullptr)
		*AsPawn = params.AsPawn;
}


// Function WeaponBase.WeaponBase_C.FireCocking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireCocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireCocking");

	AWeaponBase_C_FireCocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireParticles");

	AWeaponBase_C_FireParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireSound");

	AWeaponBase_C_FireSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.GetAdditionalRecoilForAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OneHanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RecoilBack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RecoilHorizontal               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RecoilVertical                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetAdditionalRecoilForAttachment(bool OneHanded, class AAttachableStaticMeshActorBase_C* Attachment, float* RecoilBack, float* RecoilHorizontal, float* RecoilVertical)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetAdditionalRecoilForAttachment");

	AWeaponBase_C_GetAdditionalRecoilForAttachment_Params params;
	params.OneHanded = OneHanded;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecoilBack != nullptr)
		*RecoilBack = params.RecoilBack;
	if (RecoilHorizontal != nullptr)
		*RecoilHorizontal = params.RecoilHorizontal;
	if (RecoilVertical != nullptr)
		*RecoilVertical = params.RecoilVertical;
}


// Function WeaponBase.WeaponBase_C.InstantCocking
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::InstantCocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.InstantCocking");

	AWeaponBase_C_InstantCocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.GetAdditionalRecoil
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OneHanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RecoilBack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RecoilHorizontal               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RecoilVertical                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::GetAdditionalRecoil(bool OneHanded, float* RecoilBack, float* RecoilHorizontal, float* RecoilVertical)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.GetAdditionalRecoil");

	AWeaponBase_C_GetAdditionalRecoil_Params params;
	params.OneHanded = OneHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecoilBack != nullptr)
		*RecoilBack = params.RecoilBack;
	if (RecoilHorizontal != nullptr)
		*RecoilHorizontal = params.RecoilHorizontal;
	if (RecoilVertical != nullptr)
		*RecoilVertical = params.RecoilVertical;
}


// Function WeaponBase.WeaponBase_C.AttachmentAttachCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewAttachment                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachmentCategory> AttachmentCategory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Attachable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AAttachableStaticMeshActorBase_C* AttachableAttachment           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentAttachCheck(class AAttachableStaticMeshActorBase_C* Attachment, class AActor* NewAttachment, TEnumAsByte<EAttachmentCategory> AttachmentCategory, bool* Attachable, class AAttachableStaticMeshActorBase_C** AttachableAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentAttachCheck");

	AWeaponBase_C_AttachmentAttachCheck_Params params;
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
}


// Function WeaponBase.WeaponBase_C.AttachmentReleaseLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentReleaseLocal(class AAttachmentBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentReleaseLocal");

	AWeaponBase_C_AttachmentReleaseLocal_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentAttach(class AAttachableStaticMeshActorBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentAttach");

	AWeaponBase_C_AttachmentAttach_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AmmoFired
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::AmmoFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AmmoFired");

	AWeaponBase_C_AmmoFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireModeSetExplicit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFireModes>        FireMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::FireModeSetExplicit(TEnumAsByte<EFireModes> FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireModeSetExplicit");

	AWeaponBase_C_FireModeSetExplicit_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.DropWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Force                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AWeaponBase_C::DropWeapon(const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.DropWeapon");

	AWeaponBase_C_DropWeapon_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseMagazine
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseMagazine");

	AWeaponBase_C_ReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseMagazineByTriggerHand
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseMagazineByTriggerHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseMagazineByTriggerHand");

	AWeaponBase_C_ReleaseMagazineByTriggerHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.Recoil
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::Recoil()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.Recoil");

	AWeaponBase_C_Recoil_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SpawnCartridge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::SpawnCartridge()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SpawnCartridge");

	AWeaponBase_C_SpawnCartridge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SpawnCartridgeCase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::SpawnCartridgeCase()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SpawnCartridgeCase");

	AWeaponBase_C_SpawnCartridgeCase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.PlayAudioComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::PlayAudioComponent(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.PlayAudioComponent");

	AWeaponBase_C_PlayAudioComponent_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ChamberAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ChamberAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ChamberAmmo");

	AWeaponBase_C_ChamberAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireProjectile");

	AWeaponBase_C_FireProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.HandleCocking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::HandleCocking(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.HandleCocking");

	AWeaponBase_C_HandleCocking_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.HandleRecoil
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::HandleRecoil(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.HandleRecoil");

	AWeaponBase_C_HandleRecoil_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SetCockingPositions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::SetCockingPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SetCockingPositions");

	AWeaponBase_C_SetCockingPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.CalculateFireRateRPM
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::CalculateFireRateRPM()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.CalculateFireRateRPM");

	AWeaponBase_C_CalculateFireRateRPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.UserConstructionScript");

	AWeaponBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.TimelineFireModeChange__FinishedFunc
// (BlueprintEvent)

void AWeaponBase_C::TimelineFireModeChange__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.TimelineFireModeChange__FinishedFunc");

	AWeaponBase_C_TimelineFireModeChange__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.TimelineFireModeChange__UpdateFunc
// (BlueprintEvent)

void AWeaponBase_C::TimelineFireModeChange__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.TimelineFireModeChange__UpdateFunc");

	AWeaponBase_C_TimelineFireModeChange__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWeaponBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReceiveBeginPlay");

	AWeaponBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireBullet
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireBullet");

	AWeaponBase_C_FireBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReceiveTick");

	AWeaponBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnChildGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWeaponBase_C::OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnChildGrip");

	AWeaponBase_C_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnChildGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::OnChildGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnChildGripRelease");

	AWeaponBase_C_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWeaponBase_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnGrip");

	AWeaponBase_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireModeChangeLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireModeChangeLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireModeChangeLocal");

	AWeaponBase_C_FireModeChangeLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireGunLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireGunLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireGunLocal");

	AWeaponBase_C_FireGunLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireModeChangeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Lerp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::FireModeChangeUpdate(float Lerp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireModeChangeUpdate");

	AWeaponBase_C_FireModeChangeUpdate_Params params;
	params.Lerp = Lerp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReceiveEndPlay");

	AWeaponBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.InstantReloadAndCocking
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::InstantReloadAndCocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.InstantReloadAndCocking");

	AWeaponBase_C_InstantReloadAndCocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.InstantReloadAndCockingLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::InstantReloadAndCockingLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.InstantReloadAndCockingLocal");

	AWeaponBase_C_InstantReloadAndCockingLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.InstantReloadAndCockingMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::InstantReloadAndCockingMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.InstantReloadAndCockingMulti");

	AWeaponBase_C_InstantReloadAndCockingMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SpawnMagazineServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::SpawnMagazineServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SpawnMagazineServer");

	AWeaponBase_C_SpawnMagazineServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.InstantCockingServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::InstantCockingServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.InstantCockingServer");

	AWeaponBase_C_InstantCockingServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.InstantCockingMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::InstantCockingMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.InstantCockingMulti");

	AWeaponBase_C_InstantCockingMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentRelativeLocationFix
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::AttachmentRelativeLocationFix()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentRelativeLocationFix");

	AWeaponBase_C_AttachmentRelativeLocationFix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnGripRelease");

	AWeaponBase_C_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.UpdateBarrelSmokeAfterFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::UpdateBarrelSmokeAfterFire(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.UpdateBarrelSmokeAfterFire");

	AWeaponBase_C_UpdateBarrelSmokeAfterFire_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AfterLastFire
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::AfterLastFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AfterLastFire");

	AWeaponBase_C_AfterLastFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentAttachServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentAttachServer(class AAttachableStaticMeshActorBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentAttachServer");

	AWeaponBase_C_AttachmentAttachServer_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentAttachMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C* Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentAttachMulti(class AAttachableStaticMeshActorBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentAttachMulti");

	AWeaponBase_C_AttachmentAttachMulti_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireGunServer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireGunServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireGunServer");

	AWeaponBase_C_FireGunServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.EndFireGunServer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::EndFireGunServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.EndFireGunServer");

	AWeaponBase_C_EndFireGunServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.DropWeaponServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Force                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AWeaponBase_C::DropWeaponServer(const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.DropWeaponServer");

	AWeaponBase_C_DropWeaponServer_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.DropWeaponMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Force                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AWeaponBase_C::DropWeaponMulti(const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.DropWeaponMulti");

	AWeaponBase_C_DropWeaponMulti_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnStocked
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnStocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnStocked");

	AWeaponBase_C_OnStocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnUnstocked
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnUnstocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnUnstocked");

	AWeaponBase_C_OnUnstocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.EndFireGunLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::EndFireGunLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.EndFireGunLocal");

	AWeaponBase_C_EndFireGunLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentReleaseServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentReleaseServer(class AAttachmentBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentReleaseServer");

	AWeaponBase_C_AttachmentReleaseServer_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentReleaseMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentReleaseMulti(class AAttachmentBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentReleaseMulti");

	AWeaponBase_C_AttachmentReleaseMulti_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireModeChangeServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireModeChangeServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireModeChangeServer");

	AWeaponBase_C_FireModeChangeServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireModeChangeMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireModeChangeMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireModeChangeMulti");

	AWeaponBase_C_FireModeChangeMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.FireModeChange
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::FireModeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.FireModeChange");

	AWeaponBase_C_FireModeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachHandPrimary
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::AttachHandPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachHandPrimary");

	AWeaponBase_C_AttachHandPrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachHandSecondary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GripMotionController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponBase_C::AttachHandSecondary(class UGripMotionControllerComponent** GripMotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachHandSecondary");

	AWeaponBase_C_AttachHandSecondary_Params params;
	params.GripMotionController = GripMotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::Disappear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.Disappear");

	AWeaponBase_C_Disappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>*       InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponBase_C::Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.Hover");

	AWeaponBase_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponBase_C::Unhover(class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.Unhover");

	AWeaponBase_C_Unhover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.SetCollisionResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECollisionResponse>* NewResponse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::SetCollisionResponse(TEnumAsByte<ECollisionResponse>* NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.SetCollisionResponse");

	AWeaponBase_C_SetCollisionResponse_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWeaponBase_C::BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	AWeaponBase_C_BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.OnUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.OnUsed");

	AWeaponBase_C_OnUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.AttachmentRelease
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::AttachmentRelease(class AAttachmentBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.AttachmentRelease");

	AWeaponBase_C_AttachmentRelease_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseSliderServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseSliderServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseSliderServer");

	AWeaponBase_C_ReleaseSliderServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseSliderMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseSliderMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseSliderMulti");

	AWeaponBase_C_ReleaseSliderMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseSliderLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseSliderLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseSliderLocal");

	AWeaponBase_C_ReleaseSliderLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseSlider
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseSlider");

	AWeaponBase_C_ReleaseSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ReleaseSliderAuto
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::ReleaseSliderAuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ReleaseSliderAuto");

	AWeaponBase_C_ReleaseSliderAuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.TryToActivateAttachment
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::TryToActivateAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.TryToActivateAttachment");

	AWeaponBase_C_TryToActivateAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.TryToActivateAttachmentServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::TryToActivateAttachmentServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.TryToActivateAttachmentServer");

	AWeaponBase_C_TryToActivateAttachmentServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.TryToActivateAttachmentMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::TryToActivateAttachmentMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.TryToActivateAttachmentMulti");

	AWeaponBase_C_TryToActivateAttachmentMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.TryToActivateAttachmentLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBase_C::TryToActivateAttachmentLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.TryToActivateAttachmentLocal");

	AWeaponBase_C_TryToActivateAttachmentLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBase.WeaponBase_C.ExecuteUbergraph_WeaponBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBase_C::ExecuteUbergraph_WeaponBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBase.WeaponBase_C.ExecuteUbergraph_WeaponBase");

	AWeaponBase_C_ExecuteUbergraph_WeaponBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
