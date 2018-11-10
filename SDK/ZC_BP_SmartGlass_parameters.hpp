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

// Function BP_SmartGlass.BP_SmartGlass_C.GetStaticMeshComponent
struct ABP_SmartGlass_C_GetStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SmartGlass.BP_SmartGlass_C.UserConstructionScript
struct ABP_SmartGlass_C_UserConstructionScript_Params
{
};

// Function BP_SmartGlass.BP_SmartGlass_C.Use
struct ABP_SmartGlass_C_Use_Params
{
	bool                                               IsPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmartGlass.BP_SmartGlass_C.StartFocus
struct ABP_SmartGlass_C_StartFocus_Params
{
};

// Function BP_SmartGlass.BP_SmartGlass_C.StopFocus
struct ABP_SmartGlass_C_StopFocus_Params
{
};

// Function BP_SmartGlass.BP_SmartGlass_C.ExecuteUbergraph_BP_SmartGlass
struct ABP_SmartGlass_C_ExecuteUbergraph_BP_SmartGlass_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
