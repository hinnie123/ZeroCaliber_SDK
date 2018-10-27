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

// Function BP_UsableActor.BP_UsableActor_C.GetStaticMeshComponent
struct UBP_UsableActor_C_GetStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UsableActor.BP_UsableActor_C.StopFocus
struct UBP_UsableActor_C_StopFocus_Params
{
};

// Function BP_UsableActor.BP_UsableActor_C.StartFocus
struct UBP_UsableActor_C_StartFocus_Params
{
};

// Function BP_UsableActor.BP_UsableActor_C.Use
struct UBP_UsableActor_C_Use_Params
{
	bool                                               IsPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
