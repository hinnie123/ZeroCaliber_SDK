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

// Function WeaponShotgunBase.WeaponShotgunBase_C.UserConstructionScript
struct AWeaponShotgunBase_C_UserConstructionScript_Params
{
};

// Function WeaponShotgunBase.WeaponShotgunBase_C.AttachmentAttach
struct AWeaponShotgunBase_C_AttachmentAttach_Params
{
	class AAttachableStaticMeshActorBase_C**           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponShotgunBase.WeaponShotgunBase_C.ChamberAmmo
struct AWeaponShotgunBase_C_ChamberAmmo_Params
{
};

// Function WeaponShotgunBase.WeaponShotgunBase_C.FireProjectile
struct AWeaponShotgunBase_C_FireProjectile_Params
{
};

// Function WeaponShotgunBase.WeaponShotgunBase_C.ExecuteUbergraph_WeaponShotgunBase
struct AWeaponShotgunBase_C_ExecuteUbergraph_WeaponShotgunBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
