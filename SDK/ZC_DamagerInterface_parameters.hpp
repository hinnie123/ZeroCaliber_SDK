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

// Function DamagerInterface.DamagerInterface_C.GetKills
struct UDamagerInterface_C_GetKills_Params
{
	int                                                Kills;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DamagerInterface.DamagerInterface_C.Kill
struct UDamagerInterface_C_Kill_Params
{
};

// Function DamagerInterface.DamagerInterface_C.GetProjectilesHitHead
struct UDamagerInterface_C_GetProjectilesHitHead_Params
{
	int                                                ProjectilesHitHead;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DamagerInterface.DamagerInterface_C.ProjectileHitHead
struct UDamagerInterface_C_ProjectileHitHead_Params
{
};

// Function DamagerInterface.DamagerInterface_C.GetProjectilesHit
struct UDamagerInterface_C_GetProjectilesHit_Params
{
	int                                                ProjectilesHit;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DamagerInterface.DamagerInterface_C.GetProjectilesFired
struct UDamagerInterface_C_GetProjectilesFired_Params
{
	int                                                ProjectilesFired;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DamagerInterface.DamagerInterface_C.ProjectileHit
struct UDamagerInterface_C_ProjectileHit_Params
{
};

// Function DamagerInterface.DamagerInterface_C.ProjectileFired
struct UDamagerInterface_C_ProjectileFired_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
