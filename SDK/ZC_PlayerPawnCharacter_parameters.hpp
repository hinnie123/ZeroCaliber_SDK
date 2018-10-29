#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetKills
struct APlayerPawnCharacter_C_GetKills_Params
{
	int                                                Kills;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesHitHead
struct APlayerPawnCharacter_C_GetProjectilesHitHead_Params
{
	int                                                ProjectilesHitHead;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesHit
struct APlayerPawnCharacter_C_GetProjectilesHit_Params
{
	int                                                ProjectilesHit;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesFired
struct APlayerPawnCharacter_C_GetProjectilesFired_Params
{
	int                                                ProjectilesFired;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetAllyTeams
struct APlayerPawnCharacter_C_GetAllyTeams_Params
{
	TArray<TEnumAsByte<ETeams>>                        AllyTeams;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTeam
struct APlayerPawnCharacter_C_GetTeam_Params
{
	TEnumAsByte<ETeams>                                Team;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.IsAlive
struct APlayerPawnCharacter_C_IsAlive_Params
{
	bool                                               Alive;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTargetData
struct APlayerPawnCharacter_C_GetTargetData_Params
{
	TArray<struct FTargetData>                         NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTargetLocation
struct APlayerPawnCharacter_C_GetTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandsEnabled
struct APlayerPawnCharacter_C_SetHandsEnabled_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PlayerHeight
struct APlayerPawnCharacter_C_OnRep_PlayerHeight_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetInputTurn_X
struct APlayerPawnCharacter_C_GetInputTurn_X_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_HPCurrent
struct APlayerPawnCharacter_C_OnRep_HPCurrent_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionsIsRightHandedChanged
struct APlayerPawnCharacter_C_OptionsIsRightHandedChanged_Params
{
	bool                                               IsRightHanded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateMCTriggerValues
struct APlayerPawnCharacter_C_UpdateMCTriggerValues_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReleaseMagazine
struct APlayerPawnCharacter_C_ReleaseMagazine_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionIsHeadOrientedLocomotionChanged
struct APlayerPawnCharacter_C_OptionIsHeadOrientedLocomotionChanged_Params
{
	bool                                               IsHeadOrientedLocomotion;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToSecondaryGripObject
struct APlayerPawnCharacter_C_TryToSecondaryGripObject_Params
{
	class UGripMotionControllerComponent**             Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ObjectImplementsInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 RelativeSecondaryTransform;                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              bHadSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SecondaryGripped;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateSmoothTurning
struct APlayerPawnCharacter_C_UpdateSmoothTurning_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateSnapTurning
struct APlayerPawnCharacter_C_UpdateSnapTurning_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SliderOutOfBoundsClick
struct APlayerPawnCharacter_C_SliderOutOfBoundsClick_Params
{
	class UGripMotionControllerComponent*              CallingHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsGrip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PlayerRank
struct APlayerPawnCharacter_C_OnRep_PlayerRank_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InitializeRank
struct APlayerPawnCharacter_C_InitializeRank_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotCorrectAttach
struct APlayerPawnCharacter_C_CheckWeaponSlotCorrectAttach_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_GrenadeSlot2Attached
struct APlayerPawnCharacter_C_OnRep_GrenadeSlot2Attached_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_GrenadeSlotAttached
struct APlayerPawnCharacter_C_OnRep_GrenadeSlotAttached_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PrimarySlotAttached
struct APlayerPawnCharacter_C_OnRep_PrimarySlotAttached_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_SecondarySlotAttached
struct APlayerPawnCharacter_C_OnRep_SecondarySlotAttached_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReloadWeaponScale
struct APlayerPawnCharacter_C_ReloadWeaponScale_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SaveWeaponScale
struct APlayerPawnCharacter_C_SaveWeaponScale_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SwitchOutline
struct APlayerPawnCharacter_C_SwitchOutline_Params
{
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObjectAfter
struct APlayerPawnCharacter_C_TryToGrabObjectAfter_Params
{
	class UObject*                                     ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CycleHandPoses
struct APlayerPawnCharacter_C_CycleHandPoses_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachmentReleasedButtonStatusChangeDuringHover
struct APlayerPawnCharacter_C_AttachmentReleasedButtonStatusChangeDuringHover_Params
{
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InitializeName
struct APlayerPawnCharacter_C_InitializeName_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Initialize
struct APlayerPawnCharacter_C_Initialize_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckSlotAttach
struct APlayerPawnCharacter_C_CheckSlotAttach_Params
{
	class AActor*                                      ItemToSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowSlots
struct APlayerPawnCharacter_C_ShowSlots_Params
{
	class UObject*                                     GripedItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.EnableForcePull
struct APlayerPawnCharacter_C_EnableForcePull_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShouldOutline
struct APlayerPawnCharacter_C_ShouldOutline_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldOutline;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ActivatePPDeath
struct APlayerPawnCharacter_C_ActivatePPDeath_Params
{
	float                                              BlendWeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HideSlots
struct APlayerPawnCharacter_C_HideSlots_Params
{
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowWeaponSlots
struct APlayerPawnCharacter_C_ShowWeaponSlots_Params
{
	TEnumAsByte<EWeaponCategories>                     WeaponCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowGrenadeSlots
struct APlayerPawnCharacter_C_ShowGrenadeSlots_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BeginPlayParent
struct APlayerPawnCharacter_C_BeginPlayParent_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckNewMagazineShouldSpawn
struct APlayerPawnCharacter_C_CheckNewMagazineShouldSpawn_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShouldSpawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateInteractibleObject
struct APlayerPawnCharacter_C_UpdateInteractibleObject_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestActorToLine
struct APlayerPawnCharacter_C_GetNearestActorToLine_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     LineOrigin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LineDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      NearestActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrippedItemDistanceWithController
struct APlayerPawnCharacter_C_CheckGrippedItemDistanceWithController_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedItemWithController
struct APlayerPawnCharacter_C_GetGrippedItemWithController_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      GrippedItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrippedItemDistance
struct APlayerPawnCharacter_C_CheckGrippedItemDistance_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateHitIndicator
struct APlayerPawnCharacter_C_UpdateHitIndicator_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckClimb
struct APlayerPawnCharacter_C_CheckClimb_Params
{
	bool                                               RightHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanClimb;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HoverObject
struct APlayerPawnCharacter_C_HoverObject_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     NewObject;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestObject
struct APlayerPawnCharacter_C_GetNearestObject_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Overlap_Component;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     NearestObject;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetValidForcePullableActors
struct APlayerPawnCharacter_C_GetValidForcePullableActors_Params
{
	TArray<class AGrippableStaticMeshActorBase_C*>     Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AGrippableStaticMeshActorBase_C*>     ValidActors;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GripDropOrUseObjectClean
struct APlayerPawnCharacter_C_GripDropOrUseObjectClean_Params
{
	class UGripMotionControllerComponent**             CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              CanCheckClimb;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer*                      RelevantGameplayTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PerformedAction;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.IsAttachmentReleaseButtonPressed
struct APlayerPawnCharacter_C_IsAttachmentReleaseButtonPressed_Params
{
	bool                                               Pressed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachment
struct APlayerPawnCharacter_C_DropOrUseSecondaryAttachment_Params
{
	class UGripMotionControllerComponent**             Calling_Motion_Controller;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             Other_Controller;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer*                      GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DroppedOrUsedSecondary;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HadSecondary;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateIKParams
struct APlayerPawnCharacter_C_UpdateIKParams_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionsChanged
struct APlayerPawnCharacter_C_OptionsChanged_Params
{
	struct FOptionsStruct2                             Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HitParticles
struct APlayerPawnCharacter_C_HitParticles_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       HitBoneName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachGrenadeToSlotLocal
struct APlayerPawnCharacter_C_AttachGrenadeToSlotLocal_Params
{
	class AGrenadeBase_C*                              Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CanObjectBeClimbed
struct APlayerPawnCharacter_C_CanObjectBeClimbed_Params
{
	class UPrimitiveComponent**                        ObjectToCheck;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanClimb;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetOtherGrip
struct APlayerPawnCharacter_C_GetOtherGrip_Params
{
	class UGripMotionControllerComponent*              Grip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherGrip;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetStepSound
struct APlayerPawnCharacter_C_GetStepSound_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StepSound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayGearMovementSound
struct APlayerPawnCharacter_C_PlayGearMovementSound_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayStepSound
struct APlayerPawnCharacter_C_PlayStepSound_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AnimStep
struct APlayerPawnCharacter_C_AnimStep_Params
{
	TEnumAsByte<EStepType>                             Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AddMessage
struct APlayerPawnCharacter_C_AddMessage_Params
{
	struct FMessageStruct                              Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedWeaponWithController
struct APlayerPawnCharacter_C_GetGrippedWeaponWithController_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWeaponBase_C*                               GrippedWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Die
struct APlayerPawnCharacter_C_Die_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamage
struct APlayerPawnCharacter_C_HandleDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.IKFootTrace
struct APlayerPawnCharacter_C_IKFootTrace_Params
{
	float                                              TraceDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              IKoffset;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachWeaponToSlotLocal
struct APlayerPawnCharacter_C_AttachWeaponToSlotLocal_Params
{
	class AWeaponBase_C*                               Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReattachMotionController
struct APlayerPawnCharacter_C_ReattachMotionController_Params
{
	class UGripMotionControllerComponent*              GripMotionController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryRemoveSecondaryAttachment
struct APlayerPawnCharacter_C_TryRemoveSecondaryAttachment_Params
{
	class UGripMotionControllerComponent**             Calling_Motion_Controller;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             Other_Controller;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer*                      GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DroppedSecondary;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HadSecondary;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObject
struct APlayerPawnCharacter_C_TryToGrabObject_Params
{
	class UObject**                                    ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 WorldTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UGripMotionControllerComponent**             Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      GripBoneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Gripped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedWeapon
struct APlayerPawnCharacter_C_GetGrippedWeapon_Params
{
	class AWeaponBase_C*                               GrippedWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TeleportRightPressed
struct APlayerPawnCharacter_C_TeleportRightPressed_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandLocal
struct APlayerPawnCharacter_C_SpawnMagazineToHandLocal_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AMagazineBase_C*                             Magazine;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestOverlappingObject
struct APlayerPawnCharacter_C_GetNearestOverlappingObject_Params
{
	class UPrimitiveComponent**                        OverlapComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     NearestObject;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ImplementsInterface;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ObjectTransform;                                          // (Parm, OutParm, IsPlainOldData)
	bool                                               CanBeClimbed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLoc;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UserConstructionScript
struct APlayerPawnCharacter_C_UserConstructionScript_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowRight__FinishedFunc
struct APlayerPawnCharacter_C_HandGlowRight__FinishedFunc_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowRight__UpdateFunc
struct APlayerPawnCharacter_C_HandGlowRight__UpdateFunc_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowLeft__FinishedFunc
struct APlayerPawnCharacter_C_HandGlowLeft__FinishedFunc_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowLeft__UpdateFunc
struct APlayerPawnCharacter_C_HandGlowLeft__UpdateFunc_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_17
struct APlayerPawnCharacter_C_InpActEvt_MenuLeft_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_MenuRight_K2Node_InputActionEvent_16
struct APlayerPawnCharacter_C_InpActEvt_MenuRight_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripLeft_K2Node_InputActionEvent_15
struct APlayerPawnCharacter_C_InpActEvt_GripLeft_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripLeft_K2Node_InputActionEvent_14
struct APlayerPawnCharacter_C_InpActEvt_GripLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripRight_K2Node_InputActionEvent_13
struct APlayerPawnCharacter_C_InpActEvt_GripRight_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripRight_K2Node_InputActionEvent_12
struct APlayerPawnCharacter_C_InpActEvt_GripRight_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerLeft_K2Node_InputActionEvent_11
struct APlayerPawnCharacter_C_InpActEvt_TriggerLeft_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerLeft_K2Node_InputActionEvent_10
struct APlayerPawnCharacter_C_InpActEvt_TriggerLeft_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerRight_K2Node_InputActionEvent_9
struct APlayerPawnCharacter_C_InpActEvt_TriggerRight_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerRight_K2Node_InputActionEvent_8
struct APlayerPawnCharacter_C_InpActEvt_TriggerRight_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_7
struct APlayerPawnCharacter_C_InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_6
struct APlayerPawnCharacter_C_InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_5
struct APlayerPawnCharacter_C_InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_4
struct APlayerPawnCharacter_C_InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_3
struct APlayerPawnCharacter_C_InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_2
struct APlayerPawnCharacter_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Run_K2Node_InputActionEvent_1
struct APlayerPawnCharacter_C_InpActEvt_Run_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveBeginPlay
struct APlayerPawnCharacter_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.RumbleController
struct APlayerPawnCharacter_C_RumbleController_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.RumbleControllerBoth
struct APlayerPawnCharacter_C_RumbleControllerBoth_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingle
struct APlayerPawnCharacter_C_TryDropSingle_Params
{
	class UGripMotionControllerComponent**             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector_NetQuantize100*                     AngleVel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector_NetQuantize100*                     LinearVel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char*                                     GripHash;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.On Possessed
struct APlayerPawnCharacter_C_On_Possessed_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndHandleGripAnimations
struct APlayerPawnCharacter_C_CheckAndHandleGripAnimations_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveTick
struct APlayerPawnCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ApplyDamageCustom
struct APlayerPawnCharacter_C_ApplyDamageCustom_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 IntigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBoneName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PrimaryWeaponSlotPicked
struct APlayerPawnCharacter_C_PrimaryWeaponSlotPicked_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SecondaryWeaponSlotPicked
struct APlayerPawnCharacter_C_SecondaryWeaponSlotPicked_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotPrimaryAttach
struct APlayerPawnCharacter_C_CheckWeaponSlotPrimaryAttach_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotSecondaryAttach
struct APlayerPawnCharacter_C_CheckWeaponSlotSecondaryAttach_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingle_Client
struct APlayerPawnCharacter_C_TryDropSingle_Client_Params
{
	class UGripMotionControllerComponent**             Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripToDrop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector*                                    Angle_Vel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    Linear_Vel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfter
struct APlayerPawnCharacter_C_TryDropSingleAfter_Params
{
	class UGripMotionControllerComponent*              Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ObjectToDrop;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveRadialDamage
struct APlayerPawnCharacter_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AutiHealWait
struct APlayerPawnCharacter_C_AutiHealWait_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AutoHeal
struct APlayerPawnCharacter_C_AutoHeal_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrenadeSlotAttach
struct APlayerPawnCharacter_C_CheckGrenadeSlotAttach_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrenadeSlotPicked
struct APlayerPawnCharacter_C_GrenadeSlotPicked_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrenadeSlot2Attach
struct APlayerPawnCharacter_C_CheckGrenadeSlot2Attach_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrenadeSlot2Picked
struct APlayerPawnCharacter_C_GrenadeSlot2Picked_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Voice
struct APlayerPawnCharacter_C_Voice_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HitSounds
struct APlayerPawnCharacter_C_HitSounds_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfterServer
struct APlayerPawnCharacter_C_TryDropSingleAfterServer_Params
{
	class UGripMotionControllerComponent*              Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ObjectToDrop;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfterMulti
struct APlayerPawnCharacter_C_TryDropSingleAfterMulti_Params
{
	class UGripMotionControllerComponent*              Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ObjectToDrop;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DieServer
struct APlayerPawnCharacter_C_DieServer_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DieMulti
struct APlayerPawnCharacter_C_DieMulti_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Revive
struct APlayerPawnCharacter_C_Revive_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveServer
struct APlayerPawnCharacter_C_ReviveServer_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveMulti
struct APlayerPawnCharacter_C_ReviveMulti_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowRevivePOI
struct APlayerPawnCharacter_C_ShowRevivePOI_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveCheck
struct APlayerPawnCharacter_C_ReviveCheck_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHand
struct APlayerPawnCharacter_C_SpawnMagazineToHand_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandServer
struct APlayerPawnCharacter_C_SpawnMagazineToHandServer_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandMulti
struct APlayerPawnCharacter_C_SpawnMagazineToHandMulti_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabSpawnedMagazineMulti
struct APlayerPawnCharacter_C_GrabSpawnedMagazineMulti_Params
{
	class AMagazineBase_C*                             Magazine;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGripMotionControllerComponent*              Calling_Hand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabSpawnedMagazineLocal
struct APlayerPawnCharacter_C_GrabSpawnedMagazineLocal_Params
{
	class AMagazineBase_C*                             Magaizne;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGripMotionControllerComponent*              Calling_Hand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAllyNames
struct APlayerPawnCharacter_C_CheckAllyNames_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateAllyName
struct APlayerPawnCharacter_C_UpdateAllyName_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndShowHideAllyName
struct APlayerPawnCharacter_C_CheckAndShowHideAllyName_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ForcePullStart
struct APlayerPawnCharacter_C_ForcePullStart_Params
{
	class AGrippableStaticMeshActorBase_C*             ForcePullActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateForcePull
struct APlayerPawnCharacter_C_UpdateForcePull_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct APlayerPawnCharacter_C_BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandState
struct APlayerPawnCharacter_C_SetHandState_Params
{
	TEnumAsByte<EGripEnum>                             HandState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RightHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileFired
struct APlayerPawnCharacter_C_ProjectileFired_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileHit
struct APlayerPawnCharacter_C_ProjectileHit_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileHitHead
struct APlayerPawnCharacter_C_ProjectileHitHead_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Kill
struct APlayerPawnCharacter_C_Kill_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Hover
struct APlayerPawnCharacter_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>                            InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Unhover
struct APlayerPawnCharacter_C_Unhover_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamageMulti
struct APlayerPawnCharacter_C_HandleDamageMulti_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamageLocal
struct APlayerPawnCharacter_C_HandleDamageLocal_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateRevivePoi
struct APlayerPawnCharacter_C_UpdateRevivePoi_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabWeaponRight
struct APlayerPawnCharacter_C_GrabWeaponRight_Params
{
	class AActor*                                      WeaponActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopHeartbeatSFX
struct APlayerPawnCharacter_C_StopHeartbeatSFX_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateHeartbeatSFX
struct APlayerPawnCharacter_C_UpdateHeartbeatSFX_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckOutline
struct APlayerPawnCharacter_C_CheckOutline_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndOutlineOverlappingActor
struct APlayerPawnCharacter_C_CheckAndOutlineOverlappingActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnGrabItem
struct APlayerPawnCharacter_C_OnGrabItem_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     GripedItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetEquipmentServer
struct APlayerPawnCharacter_C_GetEquipmentServer_Params
{
	struct FPlayerEquipmentStruct                      PlayerEquipmentStruct;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPoseServer
struct APlayerPawnCharacter_C_SetHandPoseServer_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandPose>                             Pose;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPoseMulti
struct APlayerPawnCharacter_C_SetHandPoseMulti_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandPose>                             Pose;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPose
struct APlayerPawnCharacter_C_SetHandPose_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandPose>                             Pose;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryGrabMulti
struct APlayerPawnCharacter_C_TryGrabMulti_Params
{
	class UObject*                                     ObjectToGrab;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      GripTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GripBoneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObjectAfterMulti
struct APlayerPawnCharacter_C_TryToGrabObjectAfterMulti_Params
{
	class UObject*                                     ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachmentAfterMulti
struct APlayerPawnCharacter_C_DropOrUseSecondaryAttachmentAfterMulti_Params
{
	class UGripMotionControllerComponent*              GripMotionController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachmentAfterServer
struct APlayerPawnCharacter_C_DropOrUseSecondaryAttachmentAfterServer_Params
{
	class UGripMotionControllerComponent*              GripMotionController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachWeaponToSlot
struct APlayerPawnCharacter_C_AttachWeaponToSlot_Params
{
	class AWeaponBase_C*                               Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetSecodarySlotAttachedServer
struct APlayerPawnCharacter_C_SetSecodarySlotAttachedServer_Params
{
	class AWeaponBase_C*                               SecondarySlotAttached;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPrimarySlotAttachedServer
struct APlayerPawnCharacter_C_SetPrimarySlotAttachedServer_Params
{
	class AWeaponBase_C*                               PrimarySlotAttached;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetGrenadeSlotAttachedServer
struct APlayerPawnCharacter_C_SetGrenadeSlotAttachedServer_Params
{
	class AGrenadeBase_C*                              GrenadeSlotAttached;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetGreandeSlot2AttachedServer
struct APlayerPawnCharacter_C_SetGreandeSlot2AttachedServer_Params
{
	class AGrenadeBase_C*                              GrenadeSlotAttached;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnMenuClose
struct APlayerPawnCharacter_C_OnMenuClose_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropLeft
struct APlayerPawnCharacter_C_DropLeft_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropRight
struct APlayerPawnCharacter_C_DropRight_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropWeapon
struct APlayerPawnCharacter_C_DropWeapon_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetupOnPossession
struct APlayerPawnCharacter_C_SetupOnPossession_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Trigger Grip Or Drop
struct APlayerPawnCharacter_C_Trigger_Grip_Or_Drop_Params
{
	class UGripMotionControllerComponent**             Calling_Hand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsGrip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleGripPress_Oculus
struct APlayerPawnCharacter_C_HandleGripPress_Oculus_Params
{
	class UGripMotionControllerComponent*              CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleGripRelease_Oculus
struct APlayerPawnCharacter_C_HandleGripRelease_Oculus_Params
{
	class UGripMotionControllerComponent*              CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleTriggerPress_Oculus
struct APlayerPawnCharacter_C_HandleTriggerPress_Oculus_Params
{
	class UGripMotionControllerComponent*              CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleTriggerRelease_Oculus
struct APlayerPawnCharacter_C_HandleTriggerRelease_Oculus_Params
{
	class UGripMotionControllerComponent*              CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CallCorrectDropSingleEvent
struct APlayerPawnCharacter_C_CallCorrectDropSingleEvent_Params
{
	class UGripMotionControllerComponent**             Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    Grip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CallCorrectGrabEvent
struct APlayerPawnCharacter_C_CallCorrectGrabEvent_Params
{
	class UObject**                                    ObjectToGrip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand*                                   Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 GripTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTag*                               GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      OptionalBoneName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetAttachmentReleaseButtonPressedServer
struct APlayerPawnCharacter_C_SetAttachmentReleaseButtonPressedServer_Params
{
	bool                                               AttachmentReleaseButtonPressed;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateMCTriggerValuesServer
struct APlayerPawnCharacter_C_UpdateMCTriggerValuesServer_Params
{
	float                                              MC_L_TriggerValue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MC_R_TriggerValue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPlayerRankServer
struct APlayerPawnCharacter_C_SetPlayerRankServer_Params
{
	int                                                PlayerRank;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopLowHealthSoundEffect
struct APlayerPawnCharacter_C_StopLowHealthSoundEffect_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveEndPlay
struct APlayerPawnCharacter_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OpenClosePauseMenu
struct APlayerPawnCharacter_C_OpenClosePauseMenu_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OpenCloseMultiplayerMenu
struct APlayerPawnCharacter_C_OpenCloseMultiplayerMenu_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HMDRecenter
struct APlayerPawnCharacter_C_HMDRecenter_Params
{
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPlayerHeightServer
struct APlayerPawnCharacter_C_SetPlayerHeightServer_Params
{
	float                                              PlayerHeight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GripOrDropAllTags
struct APlayerPawnCharacter_C_GripOrDropAllTags_Params
{
	class UGripMotionControllerComponent*              Calling_Hand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsGrip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ExecuteUbergraph_PlayerPawnCharacter
struct APlayerPawnCharacter_C_ExecuteUbergraph_PlayerPawnCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayerDamaged__DelegateSignature
struct APlayerPawnCharacter_C_PlayerDamaged__DelegateSignature_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Died__DelegateSignature
struct APlayerPawnCharacter_C_Died__DelegateSignature_Params
{
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
