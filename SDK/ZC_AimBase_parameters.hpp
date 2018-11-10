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

// Function AimBase.AimBase_C.GetNearestActor
struct UAimBase_C_GetNearestActor_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NearestActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AimBase.AimBase_C.GetTargetLocation
struct UAimBase_C_GetTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function AimBase.AimBase_C.CurrentTargetIsInvalid
struct UAimBase_C_CurrentTargetIsInvalid_Params
{
};

// Function AimBase.AimBase_C.PerceiveEnemyEvent
struct UAimBase_C_PerceiveEnemyEvent_Params
{
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AimBase.AimBase_C.ExecuteUbergraph_AimBase
struct UAimBase_C_ExecuteUbergraph_AimBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
