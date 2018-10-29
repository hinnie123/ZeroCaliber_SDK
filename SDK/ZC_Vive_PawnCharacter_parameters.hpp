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

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckSteamControllerType
struct AVive_PawnCharacter_C_CheckSteamControllerType_Params
{
	bool                                               IsKnuckles;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitTeleportControllers
struct AVive_PawnCharacter_C_InitTeleportControllers_Params
{
	class APlayerState*                                ValidPlayerState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ShouldSocketGrip
struct AVive_PawnCharacter_C_ShouldSocketGrip_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ShouldSocket;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SocketParent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.RepositionHandElements
struct AVive_PawnCharacter_C_RepositionHandElements_Params
{
	bool                                               IsRightHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewTransformForProcComps;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnRep_RightControllerOffset
struct AVive_PawnCharacter_C_OnRep_RightControllerOffset_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnRep_LeftControllerOffset
struct AVive_PawnCharacter_C_OnRep_LeftControllerOffset_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.LoadControllerModels
struct AVive_PawnCharacter_C_LoadControllerModels_Params
{
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetGripComponents
struct AVive_PawnCharacter_C_SetGripComponents_Params
{
	class UPrimitiveComponent*                         LeftHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RightHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCorrectRotation
struct AVive_PawnCharacter_C_GetCorrectRotation_Params
{
	struct FRotator                                    NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanAttemptSecondaryGrabOnObject
struct AVive_PawnCharacter_C_CanAttemptSecondaryGrabOnObject_Params
{
	class UObject*                                     ObjectToCheck;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAttemptSecondaryGrab;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESecondaryGripType                                 SecondaryGripType;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanAttemptGrabOnObject
struct AVive_PawnCharacter_C_CanAttemptGrabOnObject_Params
{
	class UObject*                                     ObjectToCheck;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanAttemptGrab;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanSecondaryGripObject
struct AVive_PawnCharacter_C_CanSecondaryGripObject_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GripSecodaryTag;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HadSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESecondaryGripType                                 SecGripType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSecondaryGrip;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetBoneTransform
struct AVive_PawnCharacter_C_GetBoneTransform_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BoneTransform;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckGripPriority
struct AVive_PawnCharacter_C_CheckGripPriority_Params
{
	class UObject*                                     ObjectToCheck;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrioToCheckAgainst;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckAgainstPrior;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HadHigherPriority;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewGripPrio;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SelectObjectFromHitArray
struct AVive_PawnCharacter_C_SelectObjectFromHitArray_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bShouldGrip;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectImplementsInterface;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectToGrip;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldTransform;                                           // (Parm, OutParm, IsPlainOldData)
	class UPrimitiveComponent*                         FirstPrimitiveHit;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseSecondaryAttachment
struct AVive_PawnCharacter_C_DropOrUseSecondaryAttachment_Params
{
	class UGripMotionControllerComponent*              Calling_Motion_Controller;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              Other_Controller;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DroppedOrUsedSecondary;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HadSecondary;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ValidateGameplayTagContainer
struct AVive_PawnCharacter_C_ValidateGameplayTagContainer_Params
{
	struct FGameplayTag                                BaseTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                DefaultTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               MatchedOrDefault;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GripDropOrUseObjectClean
struct AVive_PawnCharacter_C_GripDropOrUseObjectClean_Params
{
	class UGripMotionControllerComponent*              CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanCheckClimb;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       RelevantGameplayTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PerformedAction;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ClearMovementVelocities
struct AVive_PawnCharacter_C_ClearMovementVelocities_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryToSecondaryGripObject
struct AVive_PawnCharacter_C_TryToSecondaryGripObject_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ObjectImplementsInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeSecondaryTransform;                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bHadSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SecondaryGripped;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ShouldGripComponent
struct AVive_PawnCharacter_C_ShouldGripComponent_Params
{
	class UPrimitiveComponent*                         ComponentToCheck;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      GripPrioToCheckAgainst;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckAgainstPrior;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldGrip;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectToGrip;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectImplementsInterface;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ObjectsWorldTransform;                                    // (Parm, OutParm, IsPlainOldData)
	unsigned char                                      GripPrio;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetVehicleMode
struct AVive_PawnCharacter_C_SetVehicleMode_Params
{
	bool                                               IsInVehicleMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVR;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.IsALocalGrip
struct AVive_PawnCharacter_C_IsALocalGrip_Params
{
	EGripMovementReplicationSettings                   GripRepType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLocal;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.HasValidGripCollision
struct AVive_PawnCharacter_C_HasValidGripCollision_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanObjectBeClimbed
struct AVive_PawnCharacter_C_CanObjectBeClimbed_Params
{
	class UPrimitiveComponent*                         ObjectToCheck;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanClimb;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCorrectPrimarySlotPrefix
struct AVive_PawnCharacter_C_GetCorrectPrimarySlotPrefix_Params
{
	class UObject*                                     ObjectToCheckForTag;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketPrefix;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnDestroy
struct AVive_PawnCharacter_C_OnDestroy_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseItem
struct AVive_PawnCharacter_C_DropOrUseItem_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseItems
struct AVive_PawnCharacter_C_DropOrUseItems_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CycleMovementModes
struct AVive_PawnCharacter_C_CycleMovementModes_Params
{
	bool                                               IsLeft;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ValidateGameplayTag
struct AVive_PawnCharacter_C_ValidateGameplayTag_Params
{
	struct FGameplayTag                                BaseTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                GameplayTag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                DefaultTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               MatchedOrDefault;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCharacterRotatedPosition
struct AVive_PawnCharacter_C_GetCharacterRotatedPosition_Params
{
	struct FVector                                     OriginalLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    DeltaRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutNewPosition;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.UpdateTeleportRotations
struct AVive_PawnCharacter_C_UpdateTeleportRotations_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CalcPadRotationAndMagnitude
struct AVive_PawnCharacter_C_CalcPadRotationAndMagnitude_Params
{
	float                                              YAxis;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              XAxis;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptMagnitudeScaler;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptionalDeadzone;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               WasValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.HandleSlidingMovement
struct AVive_PawnCharacter_C_HandleSlidingMovement_Params
{
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bThumbPadInfluencesDirection;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetTeleporterActive
struct AVive_PawnCharacter_C_SetTeleporterActive_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SwitchOutOfBodyCamera
struct AVive_PawnCharacter_C_SwitchOutOfBodyCamera_Params
{
	bool                                               SwitchToOutOfBody;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryRemoveSecondaryAttachment
struct AVive_PawnCharacter_C_TryRemoveSecondaryAttachment_Params
{
	class UGripMotionControllerComponent*              Calling_Motion_Controller;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              Other_Controller;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DroppedSecondary;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HadSecondary;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.IfOverWidgetUse
struct AVive_PawnCharacter_C_IfOverWidgetUse_Params
{
	class UGripMotionControllerComponent*              Calling_Hand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Pressed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasOverWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallCorrectDropSingleEvent
struct AVive_PawnCharacter_C_CallCorrectDropSingleEvent_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     Grip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallCorrectGrabEvent
struct AVive_PawnCharacter_C_CallCorrectGrabEvent_Params
{
	class UObject*                                     ObjectToGrip;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  GripTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       OptionalBoneName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetRelativeVelocityForLocomotion
struct AVive_PawnCharacter_C_GetRelativeVelocityForLocomotion_Params
{
	bool                                               IsHMD;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMotionZVelBased;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VeloctyVector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetSmoothedVelocityOfObject
struct AVive_PawnCharacter_C_GetSmoothedVelocityOfObject_Params
{
	struct FVector                                     CurRelLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LastRelLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RelativeVelocityOut;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LowEndRelativeVelocityOut;                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bRollingAverage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.HandleRunInPlace
struct AVive_PawnCharacter_C_HandleRunInPlace_Params
{
	struct FVector                                     ForwardVector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IncludeHands;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CalculateRelativeVelocities
struct AVive_PawnCharacter_C_CalculateRelativeVelocities_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetNearestOverlapOfHand
struct AVive_PawnCharacter_C_GetNearestOverlapOfHand_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         OverlapSphere;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     NearestMesh;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleGripAnimations
struct AVive_PawnCharacter_C_CheckAndHandleGripAnimations_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitClimbing
struct AVive_PawnCharacter_C_InitClimbing_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsObjectRelative;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ClearClimbing
struct AVive_PawnCharacter_C_ClearClimbing_Params
{
	bool                                               BecauseOfStepUp;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleClimbingMovement
struct AVive_PawnCharacter_C_CheckAndHandleClimbingMovement_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GripDropOrUseObject
struct AVive_PawnCharacter_C_GripDropOrUseObject_Params
{
	class UGripMotionControllerComponent*              CallingMotionController;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanCheckClimb;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                GripTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                DropTag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                UseTag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                EndUseTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTag                                DropSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Performed_Action;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleTickedMovement
struct AVive_PawnCharacter_C_CheckAndHandleTickedMovement_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetDPadMovementFacing
struct AVive_PawnCharacter_C_GetDPadMovementFacing_Params
{
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         OtherHandMovementMode;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     RightVector;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetNearestOverlappingObject
struct AVive_PawnCharacter_C_GetNearestOverlappingObject_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     NearestObject;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ImplementsInterface;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ObjectTransform;                                          // (Parm, OutParm, IsPlainOldData)
	bool                                               CanBeClimbed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLoc;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryToGrabObject
struct AVive_PawnCharacter_C_TryToGrabObject_Params
{
	class UObject*                                     ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GripBoneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Gripped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.WriteToLog
struct AVive_PawnCharacter_C_WriteToLog_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.UserConstructionScript
struct AVive_PawnCharacter_C_UserConstructionScript_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_14
struct AVive_PawnCharacter_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_13
struct AVive_PawnCharacter_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_12
struct AVive_PawnCharacter_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_11
struct AVive_PawnCharacter_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnFailure_27F56E5242A2DFCE22855195C133461E
struct AVive_PawnCharacter_C_OnFailure_27F56E5242A2DFCE22855195C133461E_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnSuccess_27F56E5242A2DFCE22855195C133461E
struct AVive_PawnCharacter_C_OnSuccess_27F56E5242A2DFCE22855195C133461E_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
struct AVive_PawnCharacter_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_10
struct AVive_PawnCharacter_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_9
struct AVive_PawnCharacter_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabRight_K2Node_InputActionEvent_8
struct AVive_PawnCharacter_C_InpActEvt_GrabRight_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabRight_K2Node_InputActionEvent_7
struct AVive_PawnCharacter_C_InpActEvt_GrabRight_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6
struct AVive_PawnCharacter_C_InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5
struct AVive_PawnCharacter_C_InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4
struct AVive_PawnCharacter_C_InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3
struct AVive_PawnCharacter_C_InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2
struct AVive_PawnCharacter_C_InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1
struct AVive_PawnCharacter_C_InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.RemoveSecondaryGrip
struct AVive_PawnCharacter_C_RemoveSecondaryGrip_Params
{
	class UGripMotionControllerComponent*              Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     GrippedActorToRemoveAttachment;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ExecuteTeleportation
struct AVive_PawnCharacter_C_ExecuteTeleportation_Params
{
	class ABP_Teleport_Controller_C*                   MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.VRCapsuleHeightCheck
struct AVive_PawnCharacter_C_VRCapsuleHeightCheck_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveNavigationMoveCompleted
struct AVive_PawnCharacter_C_ReceiveNavigationMoveCompleted_Params
{
	TEnumAsByte<EPathFollowingResult>*                 PathingResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284
struct AVive_PawnCharacter_C_InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286
struct AVive_PawnCharacter_C_InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryDropSingle
struct AVive_PawnCharacter_C_TryDropSingle_Params
{
	class UGripMotionControllerComponent*              Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector_NetQuantize100                      AngleVel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector_NetQuantize100                      LinearVel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char                                      GripHash;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryGrabServer
struct AVive_PawnCharacter_C_TryGrabServer_Params
{
	class UObject*                                     ObjectToGrab;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      GripTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GripBoneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.Trigger Grip Or Drop
struct AVive_PawnCharacter_C_Trigger_Grip_Or_Drop_Params
{
	class UGripMotionControllerComponent*              Calling_Hand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsGrip;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         GrabSphere;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnClimbingSteppedUp
struct AVive_PawnCharacter_C_OnClimbingSteppedUp_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitTeleportControllers_Event
struct AVive_PawnCharacter_C_InitTeleportControllers_Event_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ActivateBeam
struct AVive_PawnCharacter_C_ActivateBeam_Params
{
	bool                                               LeftController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ActivateBeamMultiCast
struct AVive_PawnCharacter_C_ActivateBeamMultiCast_Params
{
	bool                                               LeftController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallTeleport
struct AVive_PawnCharacter_C_CallTeleport_Params
{
	struct FVector                                     New_Teleport_Location;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryGrabClient
struct AVive_PawnCharacter_C_TryGrabClient_Params
{
	class UObject*                                     ObjectToGrab;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      GripTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GripBoneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryDropSingle_Client
struct AVive_PawnCharacter_C_TryDropSingle_Client_Params
{
	class UGripMotionControllerComponent*              Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripToDrop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     Angle_Vel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Linear_Vel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.NotifyTeleportActive
struct AVive_PawnCharacter_C_NotifyTeleportActive_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.MulticastTeleportActive
struct AVive_PawnCharacter_C_MulticastTeleportActive_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.RequestTeleport
struct AVive_PawnCharacter_C_RequestTeleport_Params
{
	struct FVector                                     NewTeleportLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.On Possessed
struct AVive_PawnCharacter_C_On_Possessed_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveDestroyed
struct AVive_PawnCharacter_C_ReceiveDestroyed_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceivePossessed
struct AVive_PawnCharacter_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveTick
struct AVive_PawnCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnSeatedModeChanged
struct AVive_PawnCharacter_C_OnSeatedModeChanged_Params
{
	bool*                                              bNewSeatedMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWasAlreadySeated;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SendControllerProfileToServer
struct AVive_PawnCharacter_C_SendControllerProfileToServer_Params
{
	bool                                               IsRightHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      NewTransform;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature
struct AVive_PawnCharacter_C_BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature_Params
{
	struct FTransform                                  NewRelTransForProcComps;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  NewProfileTransform;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature
struct AVive_PawnCharacter_C_BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature_Params
{
	struct FTransform                                  NewRelTransForProcComps;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  NewProfileTransform;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnPlayerStateReplicated
struct AVive_PawnCharacter_C_OnPlayerStateReplicated_Params
{
	class APlayerState*                                NewPlayerState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetupOnPossession
struct AVive_PawnCharacter_C_SetupOnPossession_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveBeginPlay
struct AVive_PawnCharacter_C_ReceiveBeginPlay_Params
{
};

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ExecuteUbergraph_Vive_PawnCharacter
struct AVive_PawnCharacter_C_ExecuteUbergraph_Vive_PawnCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
