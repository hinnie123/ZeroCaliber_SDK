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

// Function Weapon_L85A.Weapon_L85A_C.UserConstructionScript
struct AWeapon_L85A_C_UserConstructionScript_Params
{
};

// Function Weapon_L85A.Weapon_L85A_C.FrontIronSightTurning__FinishedFunc
struct AWeapon_L85A_C_FrontIronSightTurning__FinishedFunc_Params
{
};

// Function Weapon_L85A.Weapon_L85A_C.FrontIronSightTurning__UpdateFunc
struct AWeapon_L85A_C_FrontIronSightTurning__UpdateFunc_Params
{
};

// Function Weapon_L85A.Weapon_L85A_C.AttachmentAttach
struct AWeapon_L85A_C_AttachmentAttach_Params
{
	class AAttachableStaticMeshActorBase_C**           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_L85A.Weapon_L85A_C.AttachmentReleaseLocal
struct AWeapon_L85A_C_AttachmentReleaseLocal_Params
{
	class AAttachmentBase_C**                          Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_L85A.Weapon_L85A_C.ExecuteUbergraph_Weapon_L85A
struct AWeapon_L85A_C_ExecuteUbergraph_Weapon_L85A_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
