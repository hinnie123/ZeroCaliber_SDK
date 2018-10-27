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

// Function Weapon_Uzi.Weapon_Uzi_C.UserConstructionScript
struct AWeapon_Uzi_C_UserConstructionScript_Params
{
};

// Function Weapon_Uzi.Weapon_Uzi_C.OnSecondaryGrip
struct AWeapon_Uzi_C_OnSecondaryGrip_Params
{
	class USceneComponent**                            SecondaryGripComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Weapon_Uzi.Weapon_Uzi_C.OnSecondaryGripRelease
struct AWeapon_Uzi_C_OnSecondaryGripRelease_Params
{
	class USceneComponent**                            ReleasingSecondaryGripComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Weapon_Uzi.Weapon_Uzi_C.ExecuteUbergraph_Weapon_Uzi
struct AWeapon_Uzi_C_ExecuteUbergraph_Weapon_Uzi_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
