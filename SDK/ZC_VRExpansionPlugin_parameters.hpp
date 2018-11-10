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

// Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandleTransform_BP
struct UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Params
{
	struct FBPActorGripInformation                     GrippedActor;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  NewTransform;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedComponent
struct UGripMotionControllerComponent_TeleportMoveGrippedComponent_Params
{
	class UPrimitiveComponent*                         ComponentToMove;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTeleportPhysicsGrips;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedActor
struct UGripMotionControllerComponent_TeleportMoveGrippedActor_Params
{
	class AActor*                                      GrippedActorToMove;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportPhysicsGrips;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrip
struct UGripMotionControllerComponent_TeleportMoveGrip_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm, ReferenceParm)
	bool                                               bTeleportPhysicsGrips;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsForPostTeleport;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetUpPhysicsHandle_BP
struct UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Params
{
	struct FBPActorGripInformation                     newGrip;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetSocketTransform
struct UGripMotionControllerComponent_SetSocketTransform_Params
{
	class UObject*                                     ObjectToSocket;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransformToParent;                                // (ConstParm, Parm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetPausedTransform
struct UGripMotionControllerComponent_SetPausedTransform_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  PausedTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripStiffnessAndDamping
struct UGripMotionControllerComponent_SetGripStiffnessAndDamping_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              NewStiffness;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewDamping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlsoSetAngularValues;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptionalAngularStiffness;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptionalAngularDamping;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripRelativeTransform
struct UGripMotionControllerComponent_SetGripRelativeTransform_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewRelativeTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripPaused
struct UGripMotionControllerComponent_SetGripPaused_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPaused;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoConstraintWhenPaused;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripLateUpdateSetting
struct UGripMotionControllerComponent_SetGripLateUpdateSetting_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGripLateUpdateSettings                            NewGripLateUpdateSetting;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripCollisionType
struct UGripMotionControllerComponent_SetGripCollisionType_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 NewGripCollisionType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripAdditionTransform
struct UGripMotionControllerComponent_SetGripAdditionTransform_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewAdditionTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bMakeGripRelative;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Server_SendControllerTransform
struct UGripMotionControllerComponent_Server_SendControllerTransform_Params
{
	struct FBPVRComponentPosRep                        NewTransform;                                             // (Parm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged_Retain
struct UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Params
{
	unsigned char                                      GripID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPSecondaryGripInfo                        SecondaryGripInfo;                                        // (ConstParm, Parm, ReferenceParm)
	struct FTransform_NetQuantize                      NewRelativeTransform;                                     // (ConstParm, Parm, ReferenceParm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged
struct UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Params
{
	unsigned char                                      GripID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPSecondaryGripInfo                        SecondaryGripInfo;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripRemoved
struct UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Params
{
	unsigned char                                      GripID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      AngularVelocity;                                          // (Parm)
	struct FVector_NetQuantize100                      LinearVelocity;                                           // (Parm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripAddedOrChanged
struct UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Params
{
	struct FBPActorGripInformation                     newGrip;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyDropAndSocketGrip
struct UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Params
{
	unsigned char                                      GripID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SocketingParent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransformToParent;                                // (ConstParm, Parm, ReferenceParm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentPoint
struct UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Params
{
	class UObject*                                     GrippedObjectToRemoveAttachment;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpToTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.PostTeleportMoveGrippedObjects
struct UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Params
{
};

// Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform
struct UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Params
{
};

// Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocallyGrippedObjects
struct UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Params
{
};

// Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_GrippedObjects
struct UGripMotionControllerComponent_OnRep_GrippedObjects_Params
{
};

// Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDropAndSocket
struct UGripMotionControllerComponent_NotifyDropAndSocket_Params
{
	struct FBPActorGripInformation                     NewDrop;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDrop
struct UGripMotionControllerComponent_NotifyDrop_Params
{
	struct FBPActorGripInformation                     NewDrop;                                                  // (ConstParm, Parm, ReferenceParm)
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.NewControllerProfileLoaded
struct UGripMotionControllerComponent_NewControllerProfileLoaded_Params
{
};

// Function VRExpansionPlugin.GripMotionControllerComponent.HasGrippedObjects
struct UGripMotionControllerComponent_HasGrippedObjects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GripObjectByInterface
struct UGripMotionControllerComponent_GripObjectByInterface_Params
{
	class UObject*                                     ObjectToGrip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldOffsetIsRelative;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalBoneToGripName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlotGrip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GripObject
struct UGripMotionControllerComponent_GripObject_Params
{
	class UObject*                                     ObjectToGrip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldOffsetIsRelative;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalSnapToSocketName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalBoneToGripName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 GripCollisionType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EGripLateUpdateSettings                            GripLateUpdateSetting;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   GripMovementReplicationSetting;                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GripStiffness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GripDamping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlotGrip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GripControllerIsTracked
struct UGripMotionControllerComponent_GripControllerIsTracked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GripComponent
struct UGripMotionControllerComponent_GripComponent_Params
{
	class UPrimitiveComponent*                         ComponentToGrip;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldOffsetIsRelative;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalBoneToGrip_Name;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalBoneToGripName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 GripCollisionType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EGripLateUpdateSettings                            GripLateUpdateSetting;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   GripMovementReplicationSetting;                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GripStiffness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GripDamping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlotGrip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GripActor
struct UGripMotionControllerComponent_GripActor_Params
{
	class AActor*                                      ActorToGrip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  WorldOffset;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldOffsetIsRelative;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalSnapToSocketName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OptionalBoneToGripName;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 GripCollisionType;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EGripLateUpdateSettings                            GripLateUpdateSetting;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   GripMovementReplicationSetting;                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GripStiffness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GripDamping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlotGrip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsVelocities
struct UGripMotionControllerComponent_GetPhysicsVelocities_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     AngularVelocity;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsSecondaryAttachment
struct UGripMotionControllerComponent_GetIsSecondaryAttachment_Params
{
	class USceneComponent*                             ComponentToCheck;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsObjectHeld
struct UGripMotionControllerComponent_GetIsObjectHeld_Params
{
	class UObject*                                     ObjectToCheck;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsHeld
struct UGripMotionControllerComponent_GetIsHeld_Params
{
	class AActor*                                      ActorToCheck;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsComponentHeld
struct UGripMotionControllerComponent_GetIsComponentHeld_Params
{
	class UPrimitiveComponent*                         ComponentToCheck;                                         // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetHandType
struct UGripMotionControllerComponent_GetHandType_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedObjects
struct UGripMotionControllerComponent_GetGrippedObjects_Params
{
	TArray<class UObject*>                             GrippedObjectsArray;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedComponents
struct UGripMotionControllerComponent_GetGrippedComponents_Params
{
	TArray<class UPrimitiveComponent*>                 GrippedComponentsArray;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedActors
struct UGripMotionControllerComponent_GetGrippedActors_Params
{
	TArray<class AActor*>                              GrippedActorArray;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripDistance_BP
struct UGripMotionControllerComponent_GetGripDistance_BP_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ExpectedLocation;                                         // (Parm, IsPlainOldData)
	float                                              CurrentDistance;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByObject
struct UGripMotionControllerComponent_GetGripByObject_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm)
	class UObject*                                     ObjectToLookForGrip;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByID
struct UGripMotionControllerComponent_GetGripByID_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm)
	unsigned char                                      IDToLookForGrip;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByComponent
struct UGripMotionControllerComponent_GetGripByComponent_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm)
	class UPrimitiveComponent*                         ComponentToLookForGrip;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByActor
struct UGripMotionControllerComponent_GetGripByActor_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (Parm, OutParm)
	class AActor*                                      ActorToLookForGrip;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetControllerDeviceID
struct UGripMotionControllerComponent_GetControllerDeviceID_Params
{
	struct FXRDeviceId                                 DeviceID;                                                 // (Parm, OutParm)
	EBPVRResultSwitch                                  Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckOpenVROnly;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGrips
struct UGripMotionControllerComponent_GetAllGrips_Params
{
	TArray<struct FBPActorGripInformation>             GripArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropObjectByInterface
struct UGripMotionControllerComponent_DropObjectByInterface_Params
{
	class UObject*                                     ObjectToDrop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OptionalAngularVelocity;                                  // (Parm, IsPlainOldData)
	struct FVector                                     OptionalLinearVelocity;                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropObject
struct UGripMotionControllerComponent_DropObject_Params
{
	class UObject*                                     ObjectToDrop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OptionalAngularVelocity;                                  // (Parm, IsPlainOldData)
	struct FVector                                     OptionalLinearVelocity;                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropGrip
struct UGripMotionControllerComponent_DropGrip_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OptionalAngularVelocity;                                  // (Parm, IsPlainOldData)
	struct FVector                                     OptionalLinearVelocity;                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropComponent
struct UGripMotionControllerComponent_DropComponent_Params
{
	class UPrimitiveComponent*                         ComponentToDrop;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OptionalAngularVelocity;                                  // (Parm, IsPlainOldData)
	struct FVector                                     OptionalLinearVelocity;                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketObject
struct UGripMotionControllerComponent_DropAndSocketObject_Params
{
	class UObject*                                     ObjectToDrop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SocketingParent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransformToParent;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketGrip
struct UGripMotionControllerComponent_DropAndSocketGrip_Params
{
	struct FBPActorGripInformation                     GripToDrop;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             SocketingParent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransformToParent;                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DropActor
struct UGripMotionControllerComponent_DropActor_Params
{
	class AActor*                                      ActorToDrop;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OptionalAngularVelocity;                                  // (Parm, IsPlainOldData)
	struct FVector                                     OptionalLinearVelocity;                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.DestroyPhysicsHandle_BP
struct UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.CreateGripRelativeAdditionTransform_BP
struct UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Params
{
	struct FBPActorGripInformation                     GripToSample;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  AdditionTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bGripRelative;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToGripRelativeTransform
struct UGripMotionControllerComponent_ConvertToGripRelativeTransform_Params
{
	struct FTransform                                  GrippedActorTransform;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToControllerRelativeTransform
struct UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.Client_NotifyInvalidLocalGrip
struct UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Params
{
	class UObject*                                     LocallyGrippedObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripMovementAuthority
struct UGripMotionControllerComponent_BP_HasGripMovementAuthority_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthority
struct UGripMotionControllerComponent_BP_HasGripAuthority_Params
{
	struct FBPActorGripInformation                     Grip;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentPoint
struct UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Params
{
	class UObject*                                     GrippedObjectToAddAttachment;                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondaryPointComponent;                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  OriginalTransform;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bTransformIsAlreadyRelative;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpToTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlotGrip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.TickGrip
struct AGrippableActor_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.TeleportBehavior
struct AGrippableActor_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.SimulateOnDrop
struct AGrippableActor_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.SetHeld
struct AGrippableActor_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.SecondaryGripType
struct AGrippableActor_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.RequestsSocketing
struct AGrippableActor_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.OnUsed
struct AGrippableActor_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableActor.OnSecondaryUsed
struct AGrippableActor_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableActor.OnSecondaryGripRelease
struct AGrippableActor_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableActor.OnSecondaryGrip
struct AGrippableActor_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableActor.OnInput
struct AGrippableActor_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.OnGripRelease
struct AGrippableActor_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.OnGrip
struct AGrippableActor_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableActor.OnEndUsed
struct AGrippableActor_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableActor.OnEndSecondaryUsed
struct AGrippableActor_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableActor.OnChildGripRelease
struct AGrippableActor_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.OnChildGrip
struct AGrippableActor_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableActor.IsHeld
struct AGrippableActor_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.GripMovementReplicationType
struct AGrippableActor_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.GripLateUpdateSetting
struct AGrippableActor_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.GripBreakDistance
struct AGrippableActor_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.GetPrimaryGripType
struct AGrippableActor_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.GetGripStiffnessAndDamping
struct AGrippableActor_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.DenyGripping
struct AGrippableActor_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.ClosestGripSlotInRange
struct AGrippableActor_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableActor.AdvancedGripSettings
struct AGrippableActor_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableBoxComponent.TickGrip
struct UGrippableBoxComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.TeleportBehavior
struct UGrippableBoxComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.SimulateOnDrop
struct UGrippableBoxComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.SetHeld
struct UGrippableBoxComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.SecondaryGripType
struct UGrippableBoxComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.RequestsSocketing
struct UGrippableBoxComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnUsed
struct UGrippableBoxComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryUsed
struct UGrippableBoxComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryGripRelease
struct UGrippableBoxComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryGrip
struct UGrippableBoxComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnInput
struct UGrippableBoxComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnGripRelease
struct UGrippableBoxComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnGrip
struct UGrippableBoxComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnEndUsed
struct UGrippableBoxComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnEndSecondaryUsed
struct UGrippableBoxComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnChildGripRelease
struct UGrippableBoxComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.OnChildGrip
struct UGrippableBoxComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableBoxComponent.IsHeld
struct UGrippableBoxComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.GripMovementReplicationType
struct UGrippableBoxComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.GripLateUpdateSetting
struct UGrippableBoxComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.GripBreakDistance
struct UGrippableBoxComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.GetPrimaryGripType
struct UGrippableBoxComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.GetGripStiffnessAndDamping
struct UGrippableBoxComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.DenyGripping
struct UGrippableBoxComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.ClosestGripSlotInRange
struct UGrippableBoxComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableBoxComponent.AdvancedGripSettings
struct UGrippableBoxComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.TickGrip
struct UGrippableCapsuleComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.TeleportBehavior
struct UGrippableCapsuleComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.SimulateOnDrop
struct UGrippableCapsuleComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.SetHeld
struct UGrippableCapsuleComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.SecondaryGripType
struct UGrippableCapsuleComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.RequestsSocketing
struct UGrippableCapsuleComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnUsed
struct UGrippableCapsuleComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryUsed
struct UGrippableCapsuleComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryGripRelease
struct UGrippableCapsuleComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryGrip
struct UGrippableCapsuleComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnInput
struct UGrippableCapsuleComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnGripRelease
struct UGrippableCapsuleComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnGrip
struct UGrippableCapsuleComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnEndUsed
struct UGrippableCapsuleComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnEndSecondaryUsed
struct UGrippableCapsuleComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnChildGripRelease
struct UGrippableCapsuleComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.OnChildGrip
struct UGrippableCapsuleComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.IsHeld
struct UGrippableCapsuleComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.GripMovementReplicationType
struct UGrippableCapsuleComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.GripLateUpdateSetting
struct UGrippableCapsuleComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.GripBreakDistance
struct UGrippableCapsuleComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.GetPrimaryGripType
struct UGrippableCapsuleComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.GetGripStiffnessAndDamping
struct UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.DenyGripping
struct UGrippableCapsuleComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.ClosestGripSlotInRange
struct UGrippableCapsuleComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableCapsuleComponent.AdvancedGripSettings
struct UGrippableCapsuleComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.TickGrip
struct AGrippableSkeletalMeshActor_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.TeleportBehavior
struct AGrippableSkeletalMeshActor_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.SimulateOnDrop
struct AGrippableSkeletalMeshActor_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetHeld
struct AGrippableSkeletalMeshActor_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.SecondaryGripType
struct AGrippableSkeletalMeshActor_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.RequestsSocketing
struct AGrippableSkeletalMeshActor_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnUsed
struct AGrippableSkeletalMeshActor_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryUsed
struct AGrippableSkeletalMeshActor_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryGripRelease
struct AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryGrip
struct AGrippableSkeletalMeshActor_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnInput
struct AGrippableSkeletalMeshActor_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnGripRelease
struct AGrippableSkeletalMeshActor_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnGrip
struct AGrippableSkeletalMeshActor_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnEndUsed
struct AGrippableSkeletalMeshActor_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnEndSecondaryUsed
struct AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnChildGripRelease
struct AGrippableSkeletalMeshActor_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnChildGrip
struct AGrippableSkeletalMeshActor_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.IsHeld
struct AGrippableSkeletalMeshActor_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripMovementReplicationType
struct AGrippableSkeletalMeshActor_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripLateUpdateSetting
struct AGrippableSkeletalMeshActor_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripBreakDistance
struct AGrippableSkeletalMeshActor_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GetPrimaryGripType
struct AGrippableSkeletalMeshActor_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GetGripStiffnessAndDamping
struct AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.DenyGripping
struct AGrippableSkeletalMeshActor_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.ClosestGripSlotInRange
struct AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshActor.AdvancedGripSettings
struct AGrippableSkeletalMeshActor_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.TickGrip
struct UGrippableSkeletalMeshComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.TeleportBehavior
struct UGrippableSkeletalMeshComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SimulateOnDrop
struct UGrippableSkeletalMeshComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetHeld
struct UGrippableSkeletalMeshComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SecondaryGripType
struct UGrippableSkeletalMeshComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.RequestsSocketing
struct UGrippableSkeletalMeshComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnUsed
struct UGrippableSkeletalMeshComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryUsed
struct UGrippableSkeletalMeshComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryGripRelease
struct UGrippableSkeletalMeshComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryGrip
struct UGrippableSkeletalMeshComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnInput
struct UGrippableSkeletalMeshComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnGripRelease
struct UGrippableSkeletalMeshComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnGrip
struct UGrippableSkeletalMeshComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnEndUsed
struct UGrippableSkeletalMeshComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnEndSecondaryUsed
struct UGrippableSkeletalMeshComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnChildGripRelease
struct UGrippableSkeletalMeshComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnChildGrip
struct UGrippableSkeletalMeshComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.IsHeld
struct UGrippableSkeletalMeshComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripMovementReplicationType
struct UGrippableSkeletalMeshComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripLateUpdateSetting
struct UGrippableSkeletalMeshComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripBreakDistance
struct UGrippableSkeletalMeshComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GetPrimaryGripType
struct UGrippableSkeletalMeshComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GetGripStiffnessAndDamping
struct UGrippableSkeletalMeshComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.DenyGripping
struct UGrippableSkeletalMeshComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.ClosestGripSlotInRange
struct UGrippableSkeletalMeshComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.AdvancedGripSettings
struct UGrippableSkeletalMeshComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableSphereComponent.TickGrip
struct UGrippableSphereComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.TeleportBehavior
struct UGrippableSphereComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.SimulateOnDrop
struct UGrippableSphereComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.SetHeld
struct UGrippableSphereComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.SecondaryGripType
struct UGrippableSphereComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.RequestsSocketing
struct UGrippableSphereComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnUsed
struct UGrippableSphereComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryUsed
struct UGrippableSphereComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryGripRelease
struct UGrippableSphereComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryGrip
struct UGrippableSphereComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnInput
struct UGrippableSphereComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnGripRelease
struct UGrippableSphereComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnGrip
struct UGrippableSphereComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnEndUsed
struct UGrippableSphereComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnEndSecondaryUsed
struct UGrippableSphereComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnChildGripRelease
struct UGrippableSphereComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.OnChildGrip
struct UGrippableSphereComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableSphereComponent.IsHeld
struct UGrippableSphereComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.GripMovementReplicationType
struct UGrippableSphereComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.GripLateUpdateSetting
struct UGrippableSphereComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.GripBreakDistance
struct UGrippableSphereComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.GetPrimaryGripType
struct UGrippableSphereComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.GetGripStiffnessAndDamping
struct UGrippableSphereComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.DenyGripping
struct UGrippableSphereComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.ClosestGripSlotInRange
struct UGrippableSphereComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableSphereComponent.AdvancedGripSettings
struct UGrippableSphereComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.TickGrip
struct AGrippableStaticMeshActor_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.TeleportBehavior
struct AGrippableStaticMeshActor_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.SimulateOnDrop
struct AGrippableStaticMeshActor_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.SetHeld
struct AGrippableStaticMeshActor_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.SecondaryGripType
struct AGrippableStaticMeshActor_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.RequestsSocketing
struct AGrippableStaticMeshActor_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnUsed
struct AGrippableStaticMeshActor_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryUsed
struct AGrippableStaticMeshActor_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryGripRelease
struct AGrippableStaticMeshActor_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryGrip
struct AGrippableStaticMeshActor_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnInput
struct AGrippableStaticMeshActor_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnGripRelease
struct AGrippableStaticMeshActor_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnGrip
struct AGrippableStaticMeshActor_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnEndUsed
struct AGrippableStaticMeshActor_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnEndSecondaryUsed
struct AGrippableStaticMeshActor_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnChildGripRelease
struct AGrippableStaticMeshActor_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.OnChildGrip
struct AGrippableStaticMeshActor_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.IsHeld
struct AGrippableStaticMeshActor_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.GripMovementReplicationType
struct AGrippableStaticMeshActor_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.GripLateUpdateSetting
struct AGrippableStaticMeshActor_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.GripBreakDistance
struct AGrippableStaticMeshActor_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.GetPrimaryGripType
struct AGrippableStaticMeshActor_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.GetGripStiffnessAndDamping
struct AGrippableStaticMeshActor_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.DenyGripping
struct AGrippableStaticMeshActor_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.ClosestGripSlotInRange
struct AGrippableStaticMeshActor_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshActor.AdvancedGripSettings
struct AGrippableStaticMeshActor_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.TickGrip
struct UGrippableStaticMeshComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.TeleportBehavior
struct UGrippableStaticMeshComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.SimulateOnDrop
struct UGrippableStaticMeshComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.SetHeld
struct UGrippableStaticMeshComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.SecondaryGripType
struct UGrippableStaticMeshComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.RequestsSocketing
struct UGrippableStaticMeshComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnUsed
struct UGrippableStaticMeshComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryUsed
struct UGrippableStaticMeshComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryGripRelease
struct UGrippableStaticMeshComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryGrip
struct UGrippableStaticMeshComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnInput
struct UGrippableStaticMeshComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnGripRelease
struct UGrippableStaticMeshComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnGrip
struct UGrippableStaticMeshComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnEndUsed
struct UGrippableStaticMeshComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnEndSecondaryUsed
struct UGrippableStaticMeshComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnChildGripRelease
struct UGrippableStaticMeshComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnChildGrip
struct UGrippableStaticMeshComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.IsHeld
struct UGrippableStaticMeshComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.GripMovementReplicationType
struct UGrippableStaticMeshComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.GripLateUpdateSetting
struct UGrippableStaticMeshComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.GripBreakDistance
struct UGrippableStaticMeshComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.GetPrimaryGripType
struct UGrippableStaticMeshComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.GetGripStiffnessAndDamping
struct UGrippableStaticMeshComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.DenyGripping
struct UGrippableStaticMeshComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.ClosestGripSlotInRange
struct UGrippableStaticMeshComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.GrippableStaticMeshComponent.AdvancedGripSettings
struct UGrippableStaticMeshComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.ReplicatedVRCameraComponent.Server_SendCameraTransform
struct UReplicatedVRCameraComponent_Server_SendCameraTransform_Params
{
	struct FBPVRComponentPosRep                        NewTransform;                                             // (Parm)
};

// Function VRExpansionPlugin.ReplicatedVRCameraComponent.OnRep_ReplicatedCameraTransform
struct UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.StopNavigationMovement
struct AVRBaseCharacter_StopNavigationMovement_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.SetCharacterSizeVR
struct AVRBaseCharacter_SetCharacterSizeVR_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHalfHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.SetCharacterHalfHeightVR
struct AVRBaseCharacter_SetCharacterHalfHeightVR_Params
{
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.SetActorRotationVR
struct AVRBaseCharacter_SetActorRotationVR_Params
{
	struct FRotator                                    NewRot;                                                   // (Parm, IsPlainOldData)
	bool                                               bUseYawOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccountForHMDRotation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.SetActorLocationAndRotationVR
struct AVRBaseCharacter_SetActorLocationAndRotationVR_Params
{
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FRotator                                    NewRot;                                                   // (Parm, IsPlainOldData)
	bool                                               bUseYawOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAccountForHMDRotation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.Server_SetSeatedMode
struct AVRBaseCharacter_Server_SetSeatedMode_Params
{
	class USceneComponent*                             SeatParent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSetSeatedMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      TargetLoc;                                                // (Parm)
	float                                              TargetYaw;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AllowedRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AllowedRadiusThreshold;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroToHead;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformRightController
struct AVRBaseCharacter_Server_SendTransformRightController_Params
{
	struct FBPVRComponentPosRep                        NewTransform;                                             // (Parm)
};

// Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformLeftController
struct AVRBaseCharacter_Server_SendTransformLeftController_Params
{
	struct FBPVRComponentPosRep                        NewTransform;                                             // (Parm)
};

// Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformCamera
struct AVRBaseCharacter_Server_SendTransformCamera_Params
{
	struct FBPVRComponentPosRep                        NewTransform;                                             // (Parm)
};

// Function VRExpansionPlugin.VRBaseCharacter.Server_ReZeroSeating
struct AVRBaseCharacter_Server_ReZeroSeating_Params
{
	struct FVector_NetQuantize100                      NewRelativeHeadLoc;                                       // (Parm)
	float                                              NewRelativeHeadYaw;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroToHead;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.RegenerateOffsetComponentToWorld
struct AVRBaseCharacter_RegenerateOffsetComponentToWorld_Params
{
	bool                                               bUpdateBounds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCalculatePureYaw;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.ReceiveNavigationMoveCompleted
struct AVRBaseCharacter_ReceiveNavigationMoveCompleted_Params
{
	TEnumAsByte<EPathFollowingResult>                  PathingResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.OnSeatThreshholdChanged
struct AVRBaseCharacter_OnSeatThreshholdChanged_Params
{
	bool                                               bIsWithinThreshold;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ToThresholdScaler;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.OnSeatedModeChanged
struct AVRBaseCharacter_OnSeatedModeChanged_Params
{
	bool                                               bNewSeatedMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasAlreadySeated;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.OnRep_SeatedCharInfo
struct AVRBaseCharacter_OnRep_SeatedCharInfo_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.OnRep_CapsuleHeight
struct AVRBaseCharacter_OnRep_CapsuleHeight_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.OnEndWallPushback
struct AVRBaseCharacter_OnEndWallPushback_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.OnCustomMoveActionPerformed
struct AVRBaseCharacter_OnCustomMoveActionPerformed_Params
{
	EVRMoveAction                                      MoveActionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MoveActionVector;                                         // (Parm, IsPlainOldData)
	struct FRotator                                    MoveActionRotator;                                        // (Parm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.OnClimbingSteppedUp
struct AVRBaseCharacter_OnClimbingSteppedUp_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.OnBeginWallPushback
struct AVRBaseCharacter_OnBeginWallPushback_Params
{
	struct FHitResult                                  HitResultOfImpact;                                        // (Parm, IsPlainOldData)
	bool                                               bHadLocomotionInput;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HmdInput;                                                 // (Parm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.NotifyOfTeleport
struct AVRBaseCharacter_NotifyOfTeleport_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacter.HasPartialPath
struct AVRBaseCharacter_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetVRUpVector
struct AVRBaseCharacter_GetVRUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetVRRotation
struct AVRBaseCharacter_GetVRRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetVRRightVector
struct AVRBaseCharacter_GetVRRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetVRLocation
struct AVRBaseCharacter_GetVRLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetVRForwardVector
struct AVRBaseCharacter_GetVRForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetTeleportLocation
struct AVRBaseCharacter_GetTeleportLocation_Params
{
	struct FVector                                     OriginalLocation;                                         // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetMoveStatus
struct AVRBaseCharacter_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.GetIKMesh
struct AVRBaseCharacter_GetIKMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.ExtendedSimpleMoveToLocation
struct AVRBaseCharacter_ExtendedSimpleMoveToLocation_Params
{
	struct FVector                                     GoalLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacter.AddActorWorldRotationVR
struct AVRBaseCharacter_AddActorWorldRotationVR_Params
{
	struct FRotator                                    DeltaRot;                                                 // (Parm, IsPlainOldData)
	bool                                               bUseYawOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetReplicatedMovementMode
struct UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Params
{
	EVRConjoinedMovementModes                          NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetCrouchedHalfHeight
struct UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Params
{
	float                                              NewCrouchedHalfHeight;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetClimbingMode
struct UVRBaseCharacterMovementComponent_SetClimbingMode_Params
{
	bool                                               bIsClimbing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.RewindVRMovement
struct UVRBaseCharacterMovementComponent_RewindVRMovement_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Teleport
struct UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Params
{
	struct FVector                                     TeleportLocation;                                         // (Parm, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // (Parm, IsPlainOldData)
	bool                                               bSkipEncroachmentCheck;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_StopAllMovement
struct UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Params
{
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SnapTurn
struct UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Params
{
	float                                              SnapTurnDeltaYaw;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SetRotation
struct UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Params
{
	float                                              NewYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Custom
struct UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Params
{
	EVRMoveAction                                      MoveActionToPerform;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EVRMoveActionDataReq                               DataRequirementsForMoveAction;                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MoveActionVector;                                         // (Parm, IsPlainOldData)
	struct FRotator                                    MoveActionRotator;                                        // (Parm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetCustomInputVector
struct UVRBaseCharacterMovementComponent_GetCustomInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClientVeryShortAdjustPosition
struct UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClientAdjustPosition
struct UVRBaseCharacterMovementComponent_ClientAdjustPosition_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.AddCustomReplicatedMovement
struct UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Params
{
	struct FVector                                     Movement;                                                 // (Parm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.SetButtonToRestingPosition
struct UVRButtonComponent_SetButtonToRestingPosition_Params
{
	bool                                               bLerpToPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.SetButtonState
struct UVRButtonComponent_SetButtonState_Params
{
	bool                                               bNewButtonState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallButtonChangedEvent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapIntoPosition;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.ResetInitialButtonLocation
struct UVRButtonComponent_ResetInitialButtonLocation_Params
{
};

// Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonStateChanged
struct UVRButtonComponent_ReceiveButtonStateChanged_Params
{
	bool                                               bCurButtonState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.OnOverlapEnd
struct UVRButtonComponent_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.OnOverlapBegin
struct UVRButtonComponent_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.IsValidOverlap
struct UVRButtonComponent_IsValidOverlap_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRButtonComponent.IsButtonInUse
struct UVRButtonComponent_IsButtonInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ServerMoveVRExLight
struct AVRCharacter_ServerMoveVRExLight_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVector_NetQuantize100                      CapsuleLoc;                                               // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	uint16_t                                           CapsuleYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ServerMoveVRDualHybridRootMotion
struct AVRCharacter_ServerMoveVRDualHybridRootMotion_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      OldCapsuleLoc;                                            // (Parm)
	struct FVRConditionalMoveRep                       OldConditionalReps;                                       // (Parm)
	struct FVector_NetQuantize100                      OldLFDiff;                                                // (Parm)
	uint16_t                                           OldCapsuleYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVector_NetQuantize100                      CapsuleLoc;                                               // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	uint16_t                                           CapsuleYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ServerMoveVRDualExLight
struct AVRCharacter_ServerMoveVRDualExLight_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      OldCapsuleLoc;                                            // (Parm)
	struct FVRConditionalMoveRep                       OldConditionalReps;                                       // (Parm)
	struct FVector_NetQuantize100                      OldLFDiff;                                                // (Parm)
	uint16_t                                           OldCapsuleYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVector_NetQuantize100                      CapsuleLoc;                                               // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	uint16_t                                           CapsuleYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ServerMoveVRDual
struct AVRCharacter_ServerMoveVRDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      OldCapsuleLoc;                                            // (Parm)
	struct FVRConditionalMoveRep                       OldConditionalReps;                                       // (Parm)
	struct FVector_NetQuantize100                      OldLFDiff;                                                // (Parm)
	uint16_t                                           OldCapsuleYaw;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVector_NetQuantize100                      CapsuleLoc;                                               // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	uint16_t                                           CapsuleYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ServerMoveVR
struct AVRCharacter_ServerMoveVR_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVector_NetQuantize100                      CapsuleLoc;                                               // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	uint16_t                                           CapsuleYaw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ClientVeryShortAdjustPositionVR
struct AVRCharacter_ClientVeryShortAdjustPositionVR_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	uint16_t                                           NewYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRCharacter.ClientAdjustPositionVR
struct AVRCharacter_ClientAdjustPositionVR_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // (Parm, IsPlainOldData)
	uint16_t                                           NewYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewVel;                                                   // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.TickGrip
struct UVRDialComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.TeleportBehavior
struct UVRDialComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.SimulateOnDrop
struct UVRDialComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.SetHeld
struct UVRDialComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              NewHoldingController;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewIsHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.SetDialAngle
struct UVRDialComponent_SetDialAngle_Params
{
	float                                              DialAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.SecondaryGripType
struct UVRDialComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.ResetInitialDialLocation
struct UVRDialComponent_ResetInitialDialLocation_Params
{
};

// Function VRExpansionPlugin.VRDialComponent.RequestsSocketing
struct UVRDialComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.ReceiveDialHitSnapAngle
struct UVRDialComponent_ReceiveDialHitSnapAngle_Params
{
	float                                              DialMilestoneAngle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.ReceiveDialFinishedLerping
struct UVRDialComponent_ReceiveDialFinishedLerping_Params
{
};

// Function VRExpansionPlugin.VRDialComponent.OnUsed
struct UVRDialComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.VRDialComponent.OnSecondaryUsed
struct UVRDialComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRDialComponent.OnSecondaryGripRelease
struct UVRDialComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRDialComponent.OnSecondaryGrip
struct UVRDialComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRDialComponent.OnInput
struct UVRDialComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.OnGripRelease
struct UVRDialComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.OnGrip
struct UVRDialComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRDialComponent.OnEndUsed
struct UVRDialComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.VRDialComponent.OnEndSecondaryUsed
struct UVRDialComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRDialComponent.OnChildGripRelease
struct UVRDialComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.OnChildGrip
struct UVRDialComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRDialComponent.IsHeld
struct UVRDialComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              CurHoldingController;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCurIsHeld;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.GripMovementReplicationType
struct UVRDialComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.GripLateUpdateSetting
struct UVRDialComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.GripBreakDistance
struct UVRDialComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.GetPrimaryGripType
struct UVRDialComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.GetGripStiffnessAndDamping
struct UVRDialComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.DenyGripping
struct UVRDialComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.ClosestGripSlotInRange
struct UVRDialComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRDialComponent.AdvancedGripSettings
struct UVRDialComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRDialComponent.AddDialAngle
struct UVRDialComponent_AddDialAngle_Params
{
	float                                              DialAngleDelta;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCallEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.SmoothUpdateLaserSpline
struct UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Params
{
	class USplineComponent*                            LaserSplineComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USplineMeshComponent*>                LaserSplineMeshComponents;                                // (Parm, ZeroConstructor)
	struct FVector                                     InStartLocation;                                          // (Parm, IsPlainOldData)
	struct FVector                                     InEndLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     InForward;                                                // (Parm, IsPlainOldData)
	float                                              LaserRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.RunEuroSmoothingFilter
struct UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Params
{
	struct FBPEuroLowPassFilter                        TargetEuroFilter;                                         // (Parm, OutParm, ReferenceParm)
	struct FVector                                     InRawValue;                                               // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SmoothedValue;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.RotateAroundPivot
struct UVRExpansionFunctionLibrary_RotateAroundPivot_Params
{
	struct FRotator                                    RotationDelta;                                            // (Parm, IsPlainOldData)
	struct FVector                                     OriginalLocation;                                         // (Parm, IsPlainOldData)
	struct FRotator                                    OriginalRotation;                                         // (Parm, IsPlainOldData)
	struct FVector                                     PivotPoint;                                               // (Parm, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               bUseOriginalYawOnly;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetEuroSmoothingFilter
struct UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Params
{
	struct FBPEuroLowPassFilter                        TargetEuroFilter;                                         // (Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.NonAuthorityMinimumAreaRectangle
struct UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             InVerts;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     SampleSurfaceNormal;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutRectCenter;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    OutRectRotation;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              OutSideLengthX;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutSideLengthY;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MatchesAnyTagsWithDirectParentTag
struct UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Params
{
	struct FGameplayTag                                DirectParentTag;                                          // (Parm)
	struct FGameplayTagContainer                       BaseContainer;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize100
struct UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Params
{
	struct FVector                                     InVector;                                                 // (Parm, IsPlainOldData)
	struct FVector_NetQuantize100                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize10
struct UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Params
{
	struct FVector                                     InVector;                                                 // (Parm, IsPlainOldData)
	struct FVector_NetQuantize10                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize
struct UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Params
{
	struct FVector                                     InVector;                                                 // (Parm, IsPlainOldData)
	struct FVector_NetQuantize                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize
struct UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
	struct FTransform_NetQuantize                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_RollingAverage
struct UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Params
{
	struct FVector                                     lastAverage;                                              // (Parm, IsPlainOldData)
	struct FVector                                     newSample;                                                // (Parm, IsPlainOldData)
	struct FVector                                     newAverage;                                               // (Parm, OutParm, IsPlainOldData)
	int                                                numSamples;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_Exponential
struct UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Params
{
	struct FVector                                     lastAverage;                                              // (Parm, IsPlainOldData)
	struct FVector                                     newSample;                                                // (Parm, IsPlainOldData)
	struct FVector                                     newAverage;                                               // (Parm, OutParm, IsPlainOldData)
	float                                              sampleFactor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreviewOrGame
struct UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreview
struct UVRExpansionFunctionLibrary_IsInVREditorPreview_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDWorn
struct UVRExpansionFunctionLibrary_GetIsHMDWorn_Params
{
	EBPHMDWornState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDConnected
struct UVRExpansionFunctionLibrary_GetIsHMDConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsActorMovable
struct UVRExpansionFunctionLibrary_GetIsActorMovable_Params
{
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDType
struct UVRExpansionFunctionLibrary_GetHMDType_Params
{
	EBPHMDDeviceType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDPureYaw
struct UVRExpansionFunctionLibrary_GetHMDPureYaw_Params
{
	struct FRotator                                    HMDRotation;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHandFromMotionSourceName
struct UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Params
{
	struct FName                                       MotionSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName_Component
struct UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Params
{
	struct FName                                       SlotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName
struct UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Params
{
	struct FName                                       SlotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	float                                              MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetFirstGameplayTagWithExactParent
struct UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Params
{
	struct FGameplayTag                                DirectParentTag;                                          // (Parm)
	struct FGameplayTagContainer                       BaseContainer;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                FoundTag;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.EqualEqual_FBPActorGripInformation
struct UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Params
{
	struct FBPActorGripInformation                     A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBPActorGripInformation                     B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_TransformToTransformNetQuantize
struct UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Params
{
	struct FTransform                                  InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform_NetQuantize                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize100
struct UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantize100                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize10
struct UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantize10                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize
struct UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector_NetQuantize                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize
struct UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Params
{
	struct FTransform_NetQuantize                      InTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRExpansionFunctionLibrary.AddSceneComponentByClass
struct UVRExpansionFunctionLibrary_AddSceneComponentByClass_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ComponentRelativeTransform;                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRExpansionPlugin.GesturesDatabase.RecalculateGestures
struct UGesturesDatabase_RecalculateGestures_Params
{
};

// Function VRExpansionPlugin.GesturesDatabase.ImportSplineAsGesture
struct UGesturesDatabase_ImportSplineAsGesture_Params
{
	class USplineComponent*                            HostSplineComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     GestureName;                                              // (Parm, ZeroConstructor)
	bool                                               bKeepSplineCurves;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SegmentLen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.GesturesDatabase.FillSplineWithGesture
struct UGesturesDatabase_FillSplineWithGesture_Params
{
	struct FVRGesture                                  Gesture;                                                  // (Parm, OutParm, ReferenceParm)
	class USplineComponent*                            SplineComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCenterPointsOnSpline;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScaleToBounds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OptionalBounds;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCurvedPoints;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFillInSplineMeshComponents;                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   MeshMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGestureComponent.SaveRecording
struct UVRGestureComponent_SaveRecording_Params
{
	struct FVRGesture                                  Recording;                                                // (Parm, OutParm, ReferenceParm)
	struct FString                                     RecordingName;                                            // (Parm, ZeroConstructor)
};

// Function VRExpansionPlugin.VRGestureComponent.RecalculateGestureSize
struct UVRGestureComponent_RecalculateGestureSize_Params
{
	struct FVRGesture                                  InputGesture;                                             // (Parm, OutParm, ReferenceParm)
	class UGesturesDatabase*                           GestureDB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGestureComponent.OnGestureDetected
struct UVRGestureComponent_OnGestureDetected_Params
{
	unsigned char                                      GestureType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DetectedGestureName;                                      // (Parm, OutParm, ZeroConstructor)
	int                                                DetectedGestureIndex;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UGesturesDatabase*                           GestureDataBase;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGestureComponent.EndRecording
struct UVRGestureComponent_EndRecording_Params
{
	struct FVRGesture                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRGestureComponent.DrawDebugGesture
struct UVRGestureComponent_DrawDebugGesture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  StartTransform;                                           // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVRGesture                                  GestureToDraw;                                            // (Parm)
	struct FColor                                      Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bPersistentLines;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGestureComponent.ClearRecording
struct UVRGestureComponent_ClearRecording_Params
{
};

// Function VRExpansionPlugin.VRGestureComponent.BeginRecording
struct UVRGestureComponent_BeginRecording_Params
{
	bool                                               bRunDetection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlattenGesture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawGesture;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAsSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SamplingHTZ;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SampleBufferSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClampingTolerance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.SaveControllerProfiles
struct UVRGlobalSettings_SaveControllerProfiles_Params
{
};

// Function VRExpansionPlugin.VRGlobalSettings.OverwriteControllerProfile
struct UVRGlobalSettings_OverwriteControllerProfile_Params
{
	struct FBPVRControllerProfile                      OverwritingProfile;                                       // (Parm, OutParm, ReferenceParm)
	bool                                               bSaveOutToConfig;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfileByName
struct UVRGlobalSettings_LoadControllerProfileByName_Params
{
	struct FName                                       ControllerProfileName;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetAsCurrentProfile;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfile
struct UVRGlobalSettings_LoadControllerProfile_Params
{
	struct FBPVRControllerProfile                      ControllerProfile;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSetAsCurrentProfile;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfileName
struct UVRGlobalSettings_GetCurrentProfileName_Params
{
	bool                                               bHadLoadedProfile;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfile
struct UVRGlobalSettings_GetCurrentProfile_Params
{
	bool                                               bHadLoadedProfile;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FBPVRControllerProfile                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfiles
struct UVRGlobalSettings_GetControllerProfiles_Params
{
	TArray<struct FBPVRControllerProfile>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfile
struct UVRGlobalSettings_GetControllerProfile_Params
{
	struct FName                                       ControllerProfileName;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPVRControllerProfile                      OutProfile;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.DeleteControllerProfile
struct UVRGlobalSettings_DeleteControllerProfile_Params
{
	struct FName                                       ControllerProfileName;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSaveOutToConfig;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByGivenControllerProfile
struct UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Params
{
	struct FBPVRControllerProfile                      ControllerProfile;                                        // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  SocketTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsRightHand;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByControllerProfile
struct UVRGlobalSettings_AdjustTransformByControllerProfile_Params
{
	struct FName                                       OptionalControllerProfileName;                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SocketTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsRightHand;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGlobalSettings.AddControllerProfile
struct UVRGlobalSettings_AddControllerProfile_Params
{
	struct FBPVRControllerProfile                      NewProfile;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               bSaveOutToConfig;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.TickGrip
struct UVRGripInterface_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.TeleportBehavior
struct UVRGripInterface_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.SimulateOnDrop
struct UVRGripInterface_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.SetHeld
struct UVRGripInterface_SetHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.SecondaryGripType
struct UVRGripInterface_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.RequestsSocketing
struct UVRGripInterface_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.OnUsed
struct UVRGripInterface_OnUsed_Params
{
};

// Function VRExpansionPlugin.VRGripInterface.OnSecondaryUsed
struct UVRGripInterface_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRGripInterface.OnSecondaryGripRelease
struct UVRGripInterface_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRGripInterface.OnSecondaryGrip
struct UVRGripInterface_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRGripInterface.OnInput
struct UVRGripInterface_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.OnGripRelease
struct UVRGripInterface_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.OnGrip
struct UVRGripInterface_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRGripInterface.OnEndUsed
struct UVRGripInterface_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.VRGripInterface.OnEndSecondaryUsed
struct UVRGripInterface_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRGripInterface.OnChildGripRelease
struct UVRGripInterface_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.OnChildGrip
struct UVRGripInterface_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRGripInterface.IsHeld
struct UVRGripInterface_IsHeld_Params
{
	class UGripMotionControllerComponent*              HoldingController;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHeld;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.GripMovementReplicationType
struct UVRGripInterface_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.GripLateUpdateSetting
struct UVRGripInterface_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.GripBreakDistance
struct UVRGripInterface_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.GetPrimaryGripType
struct UVRGripInterface_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.GetGripStiffnessAndDamping
struct UVRGripInterface_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.DenyGripping
struct UVRGripInterface_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.ClosestGripSlotInRange
struct UVRGripInterface_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRGripInterface.AdvancedGripSettings
struct UVRGripInterface_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_OnGripInit
struct UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Params
{
	class USceneComponent*                             InteractibleComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (Parm, OutParm, ReferenceParm)
	struct FBPVRInteractibleBaseData                   BaseDataToInit;                                           // (Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetThresholdSnappedValue
struct UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Params
{
	float                                              ValueToSnap;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SnapIncrement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SnapThreshold;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentRelativeTransform
struct UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Params
{
	class USceneComponent*                             SceneComponentToCheck;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPVRInteractibleBaseData                   BaseData;                                                 // (Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentParentTransform
struct UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Params
{
	class USceneComponent*                             SceneComponentToCheck;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxisDelta
struct UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Params
{
	EVRInteractibleAxis                                AxisToCalc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurInteractorLocation;                                    // (Parm, IsPlainOldData)
	float                                              InitialAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxis
struct UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Params
{
	EVRInteractibleAxis                                AxisToCalc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurInteractorLocation;                                    // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_BeginPlayInit
struct UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Params
{
	class USceneComponent*                             InteractibleComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPVRInteractibleBaseData                   BaseDataToInit;                                           // (Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRLeverComponent.TickGrip
struct UVRLeverComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.TeleportBehavior
struct UVRLeverComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.SimulateOnDrop
struct UVRLeverComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.SetHeld
struct UVRLeverComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              NewHoldingController;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewIsHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.SecondaryGripType
struct UVRLeverComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.ResetInitialLeverLocation
struct UVRLeverComponent_ResetInitialLeverLocation_Params
{
};

// Function VRExpansionPlugin.VRLeverComponent.RequestsSocketing
struct UVRLeverComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverStateChanged
struct UVRLeverComponent_ReceiveLeverStateChanged_Params
{
	bool                                               LeverStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EVRInteractibleLeverEventType                      LeverStatusType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeverAngleAtTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverFinishedLerping
struct UVRLeverComponent_ReceiveLeverFinishedLerping_Params
{
	float                                              LeverFinalAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.ReCalculateCurrentAngle
struct UVRLeverComponent_ReCalculateCurrentAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.OnUsed
struct UVRLeverComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.VRLeverComponent.OnSecondaryUsed
struct UVRLeverComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRLeverComponent.OnSecondaryGripRelease
struct UVRLeverComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRLeverComponent.OnSecondaryGrip
struct UVRLeverComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRLeverComponent.OnRep_InitialRelativeTransform
struct UVRLeverComponent_OnRep_InitialRelativeTransform_Params
{
};

// Function VRExpansionPlugin.VRLeverComponent.OnInput
struct UVRLeverComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.OnGripRelease
struct UVRLeverComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.OnGrip
struct UVRLeverComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRLeverComponent.OnEndUsed
struct UVRLeverComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.VRLeverComponent.OnEndSecondaryUsed
struct UVRLeverComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRLeverComponent.OnChildGripRelease
struct UVRLeverComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.OnChildGrip
struct UVRLeverComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRLeverComponent.IsHeld
struct UVRLeverComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              CurHoldingController;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCurIsHeld;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.GripMovementReplicationType
struct UVRLeverComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.GripLateUpdateSetting
struct UVRLeverComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.GripBreakDistance
struct UVRLeverComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.GetPrimaryGripType
struct UVRLeverComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.GetGripStiffnessAndDamping
struct UVRLeverComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.DenyGripping
struct UVRLeverComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.ClosestGripSlotInRange
struct UVRLeverComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLeverComponent.AdvancedGripSettings
struct UVRLeverComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRLogComponent.SetConsoleText
struct UVRLogComponent_SetConsoleText_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function VRExpansionPlugin.VRLogComponent.SendKeyEventToConsole
struct UVRLogComponent_SendKeyEventToConsole_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLogComponent.DrawConsoleToRenderTarget2D
struct UVRLogComponent_DrawConsoleToRenderTarget2D_Params
{
	EBPVRConsoleDrawType                               DrawType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScrollOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRLogComponent.AppendTextToConsole
struct UVRLogComponent_AppendTextToConsole_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	bool                                               bReturnAtEnd;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.TickGrip
struct UVRMountComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.TeleportBehavior
struct UVRMountComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.SimulateOnDrop
struct UVRMountComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.SetHeld
struct UVRMountComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              NewHoldingController;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewIsHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.SecondaryGripType
struct UVRMountComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.ResetInitialMountLocation
struct UVRMountComponent_ResetInitialMountLocation_Params
{
};

// Function VRExpansionPlugin.VRMountComponent.RequestsSocketing
struct UVRMountComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.OnUsed
struct UVRMountComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.VRMountComponent.OnSecondaryUsed
struct UVRMountComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRMountComponent.OnSecondaryGripRelease
struct UVRMountComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRMountComponent.OnSecondaryGrip
struct UVRMountComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRMountComponent.OnInput
struct UVRMountComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.OnGripRelease
struct UVRMountComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.OnGrip
struct UVRMountComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRMountComponent.OnEndUsed
struct UVRMountComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.VRMountComponent.OnEndSecondaryUsed
struct UVRMountComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRMountComponent.OnChildGripRelease
struct UVRMountComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.OnChildGrip
struct UVRMountComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRMountComponent.IsHeld
struct UVRMountComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              CurHoldingController;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCurIsHeld;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.GripMovementReplicationType
struct UVRMountComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.GripLateUpdateSetting
struct UVRMountComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.GripBreakDistance
struct UVRMountComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.GetPrimaryGripType
struct UVRMountComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.GetGripStiffnessAndDamping
struct UVRMountComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.DenyGripping
struct UVRMountComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.ClosestGripSlotInRange
struct UVRMountComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRMountComponent.AdvancedGripSettings
struct UVRMountComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRRootComponent.SetCapsuleSizeVR
struct UVRRootComponent_SetCapsuleSizeVR_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHalfHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRRootComponent.SetCapsuleHalfHeightVR
struct UVRRootComponent_SetCapsuleHalfHeightVR_Params
{
	float                                              HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVRDualHybridRootMotion
struct AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep                       OldConditionalReps;                                       // (Parm)
	struct FVector_NetQuantize100                      OldLFDiff;                                                // (Parm)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVRDual
struct AVRSimpleCharacter_ServerMoveVRDual_Params
{
	float                                              TimeStamp0;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel0;                                                 // (Parm)
	unsigned char                                      PendingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           View0;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep                       OldConditionalReps;                                       // (Parm)
	struct FVector_NetQuantize100                      OldLFDiff;                                                // (Parm)
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	unsigned char                                      NewFlags;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVR
struct AVRSimpleCharacter_ServerMoveVR_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       InAccel;                                                  // (Parm)
	struct FVector_NetQuantize100                      ClientLoc;                                                // (Parm)
	struct FVRConditionalMoveRep                       ConditionalReps;                                          // (Parm)
	struct FVector_NetQuantize100                      LFDiff;                                                   // (Parm)
	unsigned char                                      CompressedMoveFlags;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVRConditionalMoveRep2                      MoveReps;                                                 // (Parm)
	unsigned char                                      ClientMovementMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.TickGrip
struct UVRSliderComponent_TickGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.TeleportBehavior
struct UVRSliderComponent_TeleportBehavior_Params
{
	EGripInterfaceTeleportBehavior                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.SimulateOnDrop
struct UVRSliderComponent_SimulateOnDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.SetSplineComponentToFollow
struct UVRSliderComponent_SetSplineComponentToFollow_Params
{
	class USplineComponent*                            SplineToFollow;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.SetSliderProgress
struct UVRSliderComponent_SetSliderProgress_Params
{
	float                                              NewSliderProgress;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.SetHeld
struct UVRSliderComponent_SetHeld_Params
{
	class UGripMotionControllerComponent*              NewHoldingController;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewIsHeld;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.SecondaryGripType
struct UVRSliderComponent_SecondaryGripType_Params
{
	ESecondaryGripType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.ResetInitialSliderLocation
struct UVRSliderComponent_ResetInitialSliderLocation_Params
{
};

// Function VRExpansionPlugin.VRSliderComponent.RequestsSocketing
struct UVRSliderComponent_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderHitPoint
struct UVRSliderComponent_ReceiveSliderHitPoint_Params
{
	float                                              SliderProgressPoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderFinishedLerping
struct UVRSliderComponent_ReceiveSliderFinishedLerping_Params
{
	float                                              FinalProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.OnUsed
struct UVRSliderComponent_OnUsed_Params
{
};

// Function VRExpansionPlugin.VRSliderComponent.OnSecondaryUsed
struct UVRSliderComponent_OnSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRSliderComponent.OnSecondaryGripRelease
struct UVRSliderComponent_OnSecondaryGripRelease_Params
{
	class USceneComponent*                             ReleasingSecondaryGripComponent;                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRSliderComponent.OnSecondaryGrip
struct UVRSliderComponent_OnSecondaryGrip_Params
{
	class USceneComponent*                             SecondaryGripComponent;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRSliderComponent.OnRep_InitialRelativeTransform
struct UVRSliderComponent_OnRep_InitialRelativeTransform_Params
{
};

// Function VRExpansionPlugin.VRSliderComponent.OnInput
struct UVRSliderComponent_OnInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.OnGripRelease
struct UVRSliderComponent_OnGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.OnGrip
struct UVRSliderComponent_OnGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRSliderComponent.OnEndUsed
struct UVRSliderComponent_OnEndUsed_Params
{
};

// Function VRExpansionPlugin.VRSliderComponent.OnEndSecondaryUsed
struct UVRSliderComponent_OnEndSecondaryUsed_Params
{
};

// Function VRExpansionPlugin.VRSliderComponent.OnChildGripRelease
struct UVRSliderComponent_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent*              ReleasingController;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bWasSocketed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.OnChildGrip
struct UVRSliderComponent_OnChildGrip_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation                     GripInformation;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VRExpansionPlugin.VRSliderComponent.IsHeld
struct UVRSliderComponent_IsHeld_Params
{
	class UGripMotionControllerComponent*              CurHoldingController;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bCurIsHeld;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.GripMovementReplicationType
struct UVRSliderComponent_GripMovementReplicationType_Params
{
	EGripMovementReplicationSettings                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.GripLateUpdateSetting
struct UVRSliderComponent_GripLateUpdateSetting_Params
{
	EGripLateUpdateSettings                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.GripBreakDistance
struct UVRSliderComponent_GripBreakDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.GetPrimaryGripType
struct UVRSliderComponent_GetPrimaryGripType_Params
{
	bool                                               bIsSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.GetGripStiffnessAndDamping
struct UVRSliderComponent_GetGripStiffnessAndDamping_Params
{
	float                                              GripStiffnessOut;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              GripDampingOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.DenyGripping
struct UVRSliderComponent_DenyGripping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.ClosestGripSlotInRange
struct UVRSliderComponent_ClosestGripSlotInRange_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bSecondarySlot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent*              CallingController;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OverridePrefix;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.CalculateSliderProgress
struct UVRSliderComponent_CalculateSliderProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRSliderComponent.AdvancedGripSettings
struct UVRSliderComponent_AdvancedGripSettings_Params
{
	struct FBPAdvGripSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRExpansionPlugin.VRStereoWidgetComponent.SetPriority
struct UVRStereoWidgetComponent_SetPriority_Params
{
	int                                                InPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRStereoWidgetComponent.GetPriority
struct UVRStereoWidgetComponent_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRTrackedParentInterface.SetTrackedParent
struct UVRTrackedParentInterface_SetTrackedParent_Params
{
	class UPrimitiveComponent*                         NewParentComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WaistRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EBPVRWaistTrackingMode                             WaistTrackingMode;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRExpansionPlugin.VRVehiclePawn.SetBindToInput
struct AVRVehiclePawn_SetBindToInput_Params
{
	class AController*                                 CController;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBindToInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRVehiclePawn.ForceSecondaryPossession
struct AVRVehiclePawn_ForceSecondaryPossession_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRWheeledVehicle.SetOverrideController
struct AVRWheeledVehicle_SetOverrideController_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRWheeledVehicle.SetBindToInput
struct AVRWheeledVehicle_SetBindToInput_Params
{
	class AController*                                 CController;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBindToInput;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRExpansionPlugin.VRWheeledVehicle.ForceSecondaryPossession
struct AVRWheeledVehicle_ForceSecondaryPossession_Params
{
	class AController*                                 NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
