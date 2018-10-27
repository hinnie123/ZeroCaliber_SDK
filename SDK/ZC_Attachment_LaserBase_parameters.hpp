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

// Function Attachment_LaserBase.Attachment_LaserBase_C.SetDecalPositionAndVisibility
struct AAttachment_LaserBase_C_SetDecalPositionAndVisibility_Params
{
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.UserConstructionScript
struct AAttachment_LaserBase_C_UserConstructionScript_Params
{
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.Attached
struct AAttachment_LaserBase_C_Attached_Params
{
	bool*                                              WeaponInHand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.ReleasedWithoutAttachedToWeapon
struct AAttachment_LaserBase_C_ReleasedWithoutAttachedToWeapon_Params
{
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.DeactivateWhenWeaponReleased
struct AAttachment_LaserBase_C_DeactivateWhenWeaponReleased_Params
{
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.ActivateWhenWeaponGripped
struct AAttachment_LaserBase_C_ActivateWhenWeaponGripped_Params
{
	EControllerHand*                                   Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.OnGrip
struct AAttachment_LaserBase_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.ReceiveTick
struct AAttachment_LaserBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.Activate
struct AAttachment_LaserBase_C_Activate_Params
{
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.ReceiveBeginPlay
struct AAttachment_LaserBase_C_ReceiveBeginPlay_Params
{
};

// Function Attachment_LaserBase.Attachment_LaserBase_C.ExecuteUbergraph_Attachment_LaserBase
struct AAttachment_LaserBase_C_ExecuteUbergraph_Attachment_LaserBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
