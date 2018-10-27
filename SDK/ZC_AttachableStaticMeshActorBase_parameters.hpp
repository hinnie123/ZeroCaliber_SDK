#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ModifyCollisionWhenBlocked
struct AAttachableStaticMeshActorBase_C_ModifyCollisionWhenBlocked_Params
{
	bool                                               ShouldCollide;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ClosestGripSlotInRange
struct AAttachableStaticMeshActorBase_C_ClosestGripSlotInRange_Params
{
	struct FVector*                                    WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              bSecondarySlot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent**             CallingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      OverridePrefix;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.CanBeDetached
struct AAttachableStaticMeshActorBase_C_CanBeDetached_Params
{
	class UGripMotionControllerComponent*              GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Detachable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.UserConstructionScript
struct AAttachableStaticMeshActorBase_C_UserConstructionScript_Params
{
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Attached
struct AAttachableStaticMeshActorBase_C_Attached_Params
{
	bool                                               WeaponInHand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Released
struct AAttachableStaticMeshActorBase_C_Released_Params
{
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.Activate
struct AAttachableStaticMeshActorBase_C_Activate_Params
{
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.OnGrip
struct AAttachableStaticMeshActorBase_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ReleasedWithoutAttachedToWeapon
struct AAttachableStaticMeshActorBase_C_ReleasedWithoutAttachedToWeapon_Params
{
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.DeactivateWhenWeaponReleased
struct AAttachableStaticMeshActorBase_C_DeactivateWhenWeaponReleased_Params
{
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ActivateWhenWeaponGripped
struct AAttachableStaticMeshActorBase_C_ActivateWhenWeaponGripped_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.AttachSound
struct AAttachableStaticMeshActorBase_C_AttachSound_Params
{
	float                                              ReloadType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.ExecuteUbergraph_AttachableStaticMeshActorBase
struct AAttachableStaticMeshActorBase_C_ExecuteUbergraph_AttachableStaticMeshActorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
