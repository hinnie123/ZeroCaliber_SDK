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

// Function Weapon_Python.Weapon_Python_C.LoadCartridgeAfterCheckpoint
struct AWeapon_Python_C_LoadCartridgeAfterCheckpoint_Params
{
};

// Function Weapon_Python.Weapon_Python_C.AttachmentAttachCheck
struct AWeapon_Python_C_AttachmentAttachCheck_Params
{
	class AAttachableStaticMeshActorBase_C**           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewAttachment;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachmentCategory>*                  AttachmentCategory;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Attachable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            AttachableAttachment;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIndicatorShown;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.MagRolloutAllowed
struct AWeapon_Python_C_MagRolloutAllowed_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.MagRollinAllowed
struct AWeapon_Python_C_MagRollinAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.UserConstructionScript
struct AWeapon_Python_C_UserConstructionScript_Params
{
};

// Function Weapon_Python.Weapon_Python_C.ReleaseMagAnim__FinishedFunc
struct AWeapon_Python_C_ReleaseMagAnim__FinishedFunc_Params
{
};

// Function Weapon_Python.Weapon_Python_C.ReleaseMagAnim__UpdateFunc
struct AWeapon_Python_C_ReleaseMagAnim__UpdateFunc_Params
{
};

// Function Weapon_Python.Weapon_Python_C.RotateCylinder__FinishedFunc
struct AWeapon_Python_C_RotateCylinder__FinishedFunc_Params
{
};

// Function Weapon_Python.Weapon_Python_C.RotateCylinder__UpdateFunc
struct AWeapon_Python_C_RotateCylinder__UpdateFunc_Params
{
};

// Function Weapon_Python.Weapon_Python_C.Timeline_0_0__FinishedFunc
struct AWeapon_Python_C_Timeline_0_0__FinishedFunc_Params
{
};

// Function Weapon_Python.Weapon_Python_C.Timeline_0_0__UpdateFunc
struct AWeapon_Python_C_Timeline_0_0__UpdateFunc_Params
{
};

// Function Weapon_Python.Weapon_Python_C.OnReleaseMagazine
struct AWeapon_Python_C_OnReleaseMagazine_Params
{
};

// Function Weapon_Python.Weapon_Python_C.ReceiveTick
struct AWeapon_Python_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.ChamberAmmo
struct AWeapon_Python_C_ChamberAmmo_Params
{
};

// Function Weapon_Python.Weapon_Python_C.FireBullet
struct AWeapon_Python_C_FireBullet_Params
{
};

// Function Weapon_Python.Weapon_Python_C.Reload
struct AWeapon_Python_C_Reload_Params
{
};

// Function Weapon_Python.Weapon_Python_C.SpawnCartridgeCase
struct AWeapon_Python_C_SpawnCartridgeCase_Params
{
};

// Function Weapon_Python.Weapon_Python_C.FireModeChangeUpdate
struct AWeapon_Python_C_FireModeChangeUpdate_Params
{
	float*                                             Lerp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.ReceiveBeginPlay
struct AWeapon_Python_C_ReceiveBeginPlay_Params
{
};

// Function Weapon_Python.Weapon_Python_C.MagRollout
struct AWeapon_Python_C_MagRollout_Params
{
};

// Function Weapon_Python.Weapon_Python_C.MagrollOutEnabled
struct AWeapon_Python_C_MagrollOutEnabled_Params
{
};

// Function Weapon_Python.Weapon_Python_C.MagRollIn
struct AWeapon_Python_C_MagRollIn_Params
{
};

// Function Weapon_Python.Weapon_Python_C.AttachmentReleaseLocal
struct AWeapon_Python_C_AttachmentReleaseLocal_Params
{
	class AAttachmentBase_C**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.ReleaseMagazine
struct AWeapon_Python_C_ReleaseMagazine_Params
{
};

// Function Weapon_Python.Weapon_Python_C.ReleaseSliderLocal
struct AWeapon_Python_C_ReleaseSliderLocal_Params
{
};

// Function Weapon_Python.Weapon_Python_C.AttachmentAttachLocal
struct AWeapon_Python_C_AttachmentAttachLocal_Params
{
	class AAttachableStaticMeshActorBase_C**           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.InstantCocking
struct AWeapon_Python_C_InstantCocking_Params
{
};

// Function Weapon_Python.Weapon_Python_C.ExecuteUbergraph_Weapon_Python
struct AWeapon_Python_C_ExecuteUbergraph_Weapon_Python_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
