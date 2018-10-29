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

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.TurnOnLight
struct AAttachment_Flashlight_01_C_TurnOnLight_Params
{
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.UserConstructionScript
struct AAttachment_Flashlight_01_C_UserConstructionScript_Params
{
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.Activate
struct AAttachment_Flashlight_01_C_Activate_Params
{
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.Attached
struct AAttachment_Flashlight_01_C_Attached_Params
{
	bool*                                              WeaponInHand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ReleasedWithoutAttachedToWeapon
struct AAttachment_Flashlight_01_C_ReleasedWithoutAttachedToWeapon_Params
{
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.DeactivateWhenWeaponReleased
struct AAttachment_Flashlight_01_C_DeactivateWhenWeaponReleased_Params
{
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ActivateWhenWeaponGripped
struct AAttachment_Flashlight_01_C_ActivateWhenWeaponGripped_Params
{
	EControllerHand*                                   Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_Flashlight_01.Attachment_Flashlight_01_C.ExecuteUbergraph_Attachment_Flashlight_01
struct AAttachment_Flashlight_01_C_ExecuteUbergraph_Attachment_Flashlight_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
