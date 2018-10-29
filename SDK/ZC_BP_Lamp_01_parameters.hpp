#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Lamp_01.BP_Lamp_01_C.GetStaticMeshComponent
struct ABP_Lamp_01_C_GetStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Lamp_01.BP_Lamp_01_C.UserConstructionScript
struct ABP_Lamp_01_C_UserConstructionScript_Params
{
};

// Function BP_Lamp_01.BP_Lamp_01_C.Use
struct ABP_Lamp_01_C_Use_Params
{
	bool                                               IsPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lamp_01.BP_Lamp_01_C.StartFocus
struct ABP_Lamp_01_C_StartFocus_Params
{
};

// Function BP_Lamp_01.BP_Lamp_01_C.StopFocus
struct ABP_Lamp_01_C_StopFocus_Params
{
};

// Function BP_Lamp_01.BP_Lamp_01_C.ExecuteUbergraph_BP_Lamp_01
struct ABP_Lamp_01_C_ExecuteUbergraph_BP_Lamp_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
