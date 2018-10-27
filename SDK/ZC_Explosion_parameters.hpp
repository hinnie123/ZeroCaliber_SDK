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

// Function Explosion.Explosion_C.ImpactDecals
struct AExplosion_C_ImpactDecals_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Explosion.Explosion_C.UserConstructionScript
struct AExplosion_C_UserConstructionScript_Params
{
};

// Function Explosion.Explosion_C.ReceiveBeginPlay
struct AExplosion_C_ReceiveBeginPlay_Params
{
};

// Function Explosion.Explosion_C.ExecuteUbergraph_Explosion
struct AExplosion_C_ExecuteUbergraph_Explosion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
