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

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ActivateScope
struct AAttachment_Scope_Base_C_ActivateScope_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Turn_On;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.TurnOnRendering
struct AAttachment_Scope_Base_C_TurnOnRendering_Params
{
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.UserConstructionScript
struct AAttachment_Scope_Base_C_UserConstructionScript_Params
{
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ReceiveBeginPlay
struct AAttachment_Scope_Base_C_ReceiveBeginPlay_Params
{
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.OnGrip
struct AAttachment_Scope_Base_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ReleasedWithoutAttachedToWeapon
struct AAttachment_Scope_Base_C_ReleasedWithoutAttachedToWeapon_Params
{
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.DeactivateWhenWeaponReleased
struct AAttachment_Scope_Base_C_DeactivateWhenWeaponReleased_Params
{
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.Attached
struct AAttachment_Scope_Base_C_Attached_Params
{
	bool*                                              WeaponInHand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ActivateWhenWeaponGripped
struct AAttachment_Scope_Base_C_ActivateWhenWeaponGripped_Params
{
	EControllerHand*                                   Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.Activate
struct AAttachment_Scope_Base_C_Activate_Params
{
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.Hover
struct AAttachment_Scope_Base_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>*                           InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Attachment_Scope_Base.Attachment_Scope_Base_C.ExecuteUbergraph_Attachment_Scope_Base
struct AAttachment_Scope_Base_C_ExecuteUbergraph_Attachment_Scope_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
