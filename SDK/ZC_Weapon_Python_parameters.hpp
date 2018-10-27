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

// Function Weapon_Python.Weapon_Python_C.ReleaseMagazineByTriggerHand
struct AWeapon_Python_C_ReleaseMagazineByTriggerHand_Params
{
};

// Function Weapon_Python.Weapon_Python_C.ReleaseMagazine
struct AWeapon_Python_C_ReleaseMagazine_Params
{
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

// Function Weapon_Python.Weapon_Python_C.BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AWeapon_Python_C_BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Weapon_Python.Weapon_Python_C.AttachmentAttach
struct AWeapon_Python_C_AttachmentAttach_Params
{
	class AAttachableStaticMeshActorBase_C**           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function Weapon_Python.Weapon_Python_C.ReleaseSlider
struct AWeapon_Python_C_ReleaseSlider_Params
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

// Function Weapon_Python.Weapon_Python_C.ExecuteUbergraph_Weapon_Python
struct AWeapon_Python_C_ExecuteUbergraph_Weapon_Python_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
