#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponBase.WeaponBase_C.CheckAttachmnetInOtherHand
struct AWeaponBase_C_CheckAttachmnetInOtherHand_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.TurnOnAttachmentIndicator
struct AWeaponBase_C_TurnOnAttachmentIndicator_Params
{
	TEnumAsByte<EAttachmentCategory>                   AttachmentCategory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnRep_SecondaryGripAsPrimary
struct AWeaponBase_C_OnRep_SecondaryGripAsPrimary_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachmentAttachTransforms
struct AWeaponBase_C_AttachmentAttachTransforms_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnRep_Magazine
struct AWeaponBase_C_OnRep_Magazine_Params
{
};

// Function WeaponBase.WeaponBase_C.OnRep_AttachmentStock
struct AWeaponBase_C_OnRep_AttachmentStock_Params
{
};

// Function WeaponBase.WeaponBase_C.OnRep_AttachmentSide
struct AWeaponBase_C_OnRep_AttachmentSide_Params
{
};

// Function WeaponBase.WeaponBase_C.OnRep_AttachmentBarrelEnd
struct AWeaponBase_C_OnRep_AttachmentBarrelEnd_Params
{
};

// Function WeaponBase.WeaponBase_C.OnRep_AttachmentUnderBarrel
struct AWeaponBase_C_OnRep_AttachmentUnderBarrel_Params
{
};

// Function WeaponBase.WeaponBase_C.OnRep_AttachmentScope
struct AWeaponBase_C_OnRep_AttachmentScope_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachmentAttachLocal
struct AWeaponBase_C_AttachmentAttachLocal_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnRep_SelectedFireMode
struct AWeaponBase_C_OnRep_SelectedFireMode_Params
{
};

// Function WeaponBase.WeaponBase_C.OnRep_WeaponOwnerCategory
struct AWeaponBase_C_OnRep_WeaponOwnerCategory_Params
{
};

// Function WeaponBase.WeaponBase_C.AmmoCountScaleToTen
struct AWeaponBase_C_AmmoCountScaleToTen_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.DetachAttachmentFromHand
struct AWeaponBase_C_DetachAttachmentFromHand_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.SetFmodEventparam
struct AWeaponBase_C_SetFmodEventparam_Params
{
};

// Function WeaponBase.WeaponBase_C.SetupProperties
struct AWeaponBase_C_SetupProperties_Params
{
	class UObject*                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.GetMuzzlePsScaleByDistance
struct AWeaponBase_C_GetMuzzlePsScaleByDistance_Params
{
	struct FVector                                     Scale;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.UpdateBarrelSmokeProjectileCount
struct AWeaponBase_C_UpdateBarrelSmokeProjectileCount_Params
{
};

// Function WeaponBase.WeaponBase_C.DeactivateAttachmentsOnRelease
struct AWeaponBase_C_DeactivateAttachmentsOnRelease_Params
{
};

// Function WeaponBase.WeaponBase_C.ActivateAttachmentOnGrip
struct AWeaponBase_C_ActivateAttachmentOnGrip_Params
{
};

// Function WeaponBase.WeaponBase_C.GetAdditionalMuzzleSpeedAttachment
struct AWeaponBase_C_GetAdditionalMuzzleSpeedAttachment_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.GetAdditionalMuzzleSpeed
struct AWeaponBase_C_GetAdditionalMuzzleSpeed_Params
{
	float                                              MuzzleSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.GetModifiedVolumeAttachment
struct AWeaponBase_C_GetModifiedVolumeAttachment_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.GetModifiedVolume
struct AWeaponBase_C_GetModifiedVolume_Params
{
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.ClosestGripSlotInRange
struct AWeaponBase_C_ClosestGripSlotInRange_Params
{
	struct FVector*                                    WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              bSecondarySlot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent**             CallingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      OverridePrefix;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.GetProjectileInstigator
struct AWeaponBase_C_GetProjectileInstigator_Params
{
	class APawn*                                       AsPawn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.FireCocking
struct AWeaponBase_C_FireCocking_Params
{
};

// Function WeaponBase.WeaponBase_C.FireParticles
struct AWeaponBase_C_FireParticles_Params
{
};

// Function WeaponBase.WeaponBase_C.FireSound
struct AWeaponBase_C_FireSound_Params
{
};

// Function WeaponBase.WeaponBase_C.GetAdditionalRecoilForAttachment
struct AWeaponBase_C_GetAdditionalRecoilForAttachment_Params
{
	bool                                               OneHanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RecoilBack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RecoilHorizontal;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RecoilVertical;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.InstantCocking
struct AWeaponBase_C_InstantCocking_Params
{
};

// Function WeaponBase.WeaponBase_C.GetAdditionalRecoil
struct AWeaponBase_C_GetAdditionalRecoil_Params
{
	bool                                               OneHanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RecoilBack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RecoilHorizontal;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RecoilVertical;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AttachmentAttachCheck
struct AWeaponBase_C_AttachmentAttachCheck_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewAttachment;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachmentCategory>                   AttachmentCategory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attachable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            AttachableAttachment;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIndicatorShown;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AttachmentReleaseLocal
struct AWeaponBase_C_AttachmentReleaseLocal_Params
{
	class AAttachmentBase_C*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AttachmentAttach
struct AWeaponBase_C_AttachmentAttach_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AmmoFired
struct AWeaponBase_C_AmmoFired_Params
{
};

// Function WeaponBase.WeaponBase_C.FireModeSetExplicit
struct AWeaponBase_C_FireModeSetExplicit_Params
{
	TEnumAsByte<EFireModes>                            FireMode;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.DropWeapon
struct AWeaponBase_C_DropWeapon_Params
{
	struct FVector                                     Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.ReleaseMagazine
struct AWeaponBase_C_ReleaseMagazine_Params
{
};

// Function WeaponBase.WeaponBase_C.ReleaseMagazineByTriggerHand
struct AWeaponBase_C_ReleaseMagazineByTriggerHand_Params
{
};

// Function WeaponBase.WeaponBase_C.Recoil
struct AWeaponBase_C_Recoil_Params
{
};

// Function WeaponBase.WeaponBase_C.SpawnCartridge
struct AWeaponBase_C_SpawnCartridge_Params
{
};

// Function WeaponBase.WeaponBase_C.SpawnCartridgeCase
struct AWeaponBase_C_SpawnCartridgeCase_Params
{
};

// Function WeaponBase.WeaponBase_C.PlayAudioComponent
struct AWeaponBase_C_PlayAudioComponent_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.ChamberAmmo
struct AWeaponBase_C_ChamberAmmo_Params
{
};

// Function WeaponBase.WeaponBase_C.FireProjectile
struct AWeaponBase_C_FireProjectile_Params
{
};

// Function WeaponBase.WeaponBase_C.HandleCocking
struct AWeaponBase_C_HandleCocking_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.HandleRecoil
struct AWeaponBase_C_HandleRecoil_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.SetCockingPositions
struct AWeaponBase_C_SetCockingPositions_Params
{
};

// Function WeaponBase.WeaponBase_C.CalculateFireRateRPM
struct AWeaponBase_C_CalculateFireRateRPM_Params
{
};

// Function WeaponBase.WeaponBase_C.UserConstructionScript
struct AWeaponBase_C_UserConstructionScript_Params
{
};

// Function WeaponBase.WeaponBase_C.TimelineFireModeChange__FinishedFunc
struct AWeaponBase_C_TimelineFireModeChange__FinishedFunc_Params
{
};

// Function WeaponBase.WeaponBase_C.TimelineFireModeChange__UpdateFunc
struct AWeaponBase_C_TimelineFireModeChange__UpdateFunc_Params
{
};

// Function WeaponBase.WeaponBase_C.ReceiveBeginPlay
struct AWeaponBase_C_ReceiveBeginPlay_Params
{
};

// Function WeaponBase.WeaponBase_C.FireBullet
struct AWeaponBase_C_FireBullet_Params
{
};

// Function WeaponBase.WeaponBase_C.ReceiveTick
struct AWeaponBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnChildGrip
struct AWeaponBase_C_OnChildGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WeaponBase.WeaponBase_C.OnChildGripRelease
struct AWeaponBase_C_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnGrip
struct AWeaponBase_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WeaponBase.WeaponBase_C.FireModeChangeLocal
struct AWeaponBase_C_FireModeChangeLocal_Params
{
};

// Function WeaponBase.WeaponBase_C.FireGunLocal
struct AWeaponBase_C_FireGunLocal_Params
{
};

// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.FireModeChangeUpdate
struct AWeaponBase_C_FireModeChangeUpdate_Params
{
	float                                              Lerp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.ReceiveEndPlay
struct AWeaponBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.InstantReloadAndCocking
struct AWeaponBase_C_InstantReloadAndCocking_Params
{
};

// Function WeaponBase.WeaponBase_C.InstantReloadAndCockingLocal
struct AWeaponBase_C_InstantReloadAndCockingLocal_Params
{
};

// Function WeaponBase.WeaponBase_C.InstantReloadAndCockingMulti
struct AWeaponBase_C_InstantReloadAndCockingMulti_Params
{
};

// Function WeaponBase.WeaponBase_C.SpawnMagazineServer
struct AWeaponBase_C_SpawnMagazineServer_Params
{
};

// Function WeaponBase.WeaponBase_C.InstantCockingServer
struct AWeaponBase_C_InstantCockingServer_Params
{
};

// Function WeaponBase.WeaponBase_C.InstantCockingMulti
struct AWeaponBase_C_InstantCockingMulti_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachmentRelativeLocationFix
struct AWeaponBase_C_AttachmentRelativeLocationFix_Params
{
};

// Function WeaponBase.WeaponBase_C.OnGripRelease
struct AWeaponBase_C_OnGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.UpdateBarrelSmokeAfterFire
struct AWeaponBase_C_UpdateBarrelSmokeAfterFire_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AfterLastFire
struct AWeaponBase_C_AfterLastFire_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachmentAttachServer
struct AWeaponBase_C_AttachmentAttachServer_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AttachmentAttachMulti
struct AWeaponBase_C_AttachmentAttachMulti_Params
{
	class AAttachableStaticMeshActorBase_C*            Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.FireGunServer
struct AWeaponBase_C_FireGunServer_Params
{
};

// Function WeaponBase.WeaponBase_C.EndFireGunServer
struct AWeaponBase_C_EndFireGunServer_Params
{
};

// Function WeaponBase.WeaponBase_C.DropWeaponServer
struct AWeaponBase_C_DropWeaponServer_Params
{
	struct FVector                                     Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.DropWeaponMulti
struct AWeaponBase_C_DropWeaponMulti_Params
{
	struct FVector                                     Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnStocked
struct AWeaponBase_C_OnStocked_Params
{
};

// Function WeaponBase.WeaponBase_C.OnUnstocked
struct AWeaponBase_C_OnUnstocked_Params
{
};

// Function WeaponBase.WeaponBase_C.EndFireGunLocal
struct AWeaponBase_C_EndFireGunLocal_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachmentReleaseServer
struct AWeaponBase_C_AttachmentReleaseServer_Params
{
	class AAttachmentBase_C*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.AttachmentReleaseMulti
struct AWeaponBase_C_AttachmentReleaseMulti_Params
{
	class AAttachmentBase_C*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.FireModeChangeServer
struct AWeaponBase_C_FireModeChangeServer_Params
{
};

// Function WeaponBase.WeaponBase_C.FireModeChangeMulti
struct AWeaponBase_C_FireModeChangeMulti_Params
{
};

// Function WeaponBase.WeaponBase_C.FireModeChange
struct AWeaponBase_C_FireModeChange_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachHandPrimary
struct AWeaponBase_C_AttachHandPrimary_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachHandSecondary
struct AWeaponBase_C_AttachHandSecondary_Params
{
	class UGripMotionControllerComponent**             GripMotionController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.Disappear
struct AWeaponBase_C_Disappear_Params
{
};

// Function WeaponBase.WeaponBase_C.Hover
struct AWeaponBase_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>*                           InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.Unhover
struct AWeaponBase_C_Unhover_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.SetCollisionResponse
struct AWeaponBase_C_SetCollisionResponse_Params
{
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct AWeaponBase_C_BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.OnUsed
struct AWeaponBase_C_OnUsed_Params
{
};

// Function WeaponBase.WeaponBase_C.AttachmentRelease
struct AWeaponBase_C_AttachmentRelease_Params
{
	class AAttachmentBase_C*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBase.WeaponBase_C.ReleaseSliderServer
struct AWeaponBase_C_ReleaseSliderServer_Params
{
};

// Function WeaponBase.WeaponBase_C.ReleaseSliderMulti
struct AWeaponBase_C_ReleaseSliderMulti_Params
{
};

// Function WeaponBase.WeaponBase_C.ReleaseSliderLocal
struct AWeaponBase_C_ReleaseSliderLocal_Params
{
};

// Function WeaponBase.WeaponBase_C.ReleaseSlider
struct AWeaponBase_C_ReleaseSlider_Params
{
};

// Function WeaponBase.WeaponBase_C.ReleaseSliderAuto
struct AWeaponBase_C_ReleaseSliderAuto_Params
{
};

// Function WeaponBase.WeaponBase_C.TryToActivateAttachment
struct AWeaponBase_C_TryToActivateAttachment_Params
{
};

// Function WeaponBase.WeaponBase_C.TryToActivateAttachmentServer
struct AWeaponBase_C_TryToActivateAttachmentServer_Params
{
};

// Function WeaponBase.WeaponBase_C.TryToActivateAttachmentMulti
struct AWeaponBase_C_TryToActivateAttachmentMulti_Params
{
};

// Function WeaponBase.WeaponBase_C.TryToActivateAttachmentLocal
struct AWeaponBase_C_TryToActivateAttachmentLocal_Params
{
};

// Function WeaponBase.WeaponBase_C.ExecuteUbergraph_WeaponBase
struct AWeaponBase_C_ExecuteUbergraph_WeaponBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
