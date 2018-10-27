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

// Function Weapon_DesertEagle.Weapon_DesertEagle_C.UserConstructionScript
struct AWeapon_DesertEagle_C_UserConstructionScript_Params
{
};

// Function Weapon_DesertEagle.Weapon_DesertEagle_C.ReceiveTick
struct AWeapon_DesertEagle_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Weapon_DesertEagle.Weapon_DesertEagle_C.ExecuteUbergraph_Weapon_DesertEagle
struct AWeapon_DesertEagle_C_ExecuteUbergraph_Weapon_DesertEagle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
