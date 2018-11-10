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

// Function WeaponPistolBase.WeaponPistolBase_C.UserConstructionScript
struct AWeaponPistolBase_C_UserConstructionScript_Params
{
};

// Function WeaponPistolBase.WeaponPistolBase_C.MagazineEjectTimeLine__FinishedFunc
struct AWeaponPistolBase_C_MagazineEjectTimeLine__FinishedFunc_Params
{
};

// Function WeaponPistolBase.WeaponPistolBase_C.MagazineEjectTimeLine__UpdateFunc
struct AWeaponPistolBase_C_MagazineEjectTimeLine__UpdateFunc_Params
{
};

// Function WeaponPistolBase.WeaponPistolBase_C.FireModeChangeUpdate
struct AWeaponPistolBase_C_FireModeChangeUpdate_Params
{
	float*                                             Lerp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponPistolBase.WeaponPistolBase_C.ReleaseMagazinePistol
struct AWeaponPistolBase_C_ReleaseMagazinePistol_Params
{
	class AAttachmentBase_C*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponPistolBase.WeaponPistolBase_C.AttachmentReleaseLocal
struct AWeaponPistolBase_C_AttachmentReleaseLocal_Params
{
	class AAttachmentBase_C**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponPistolBase.WeaponPistolBase_C.ExecuteUbergraph_WeaponPistolBase
struct AWeaponPistolBase_C_ExecuteUbergraph_WeaponPistolBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
