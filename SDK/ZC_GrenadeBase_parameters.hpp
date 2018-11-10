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

// Function GrenadeBase.GrenadeBase_C.UserConstructionScript
struct AGrenadeBase_C_UserConstructionScript_Params
{
};

// Function GrenadeBase.GrenadeBase_C.OnChildGrip
struct AGrenadeBase_C_OnChildGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GrenadeBase.GrenadeBase_C.OnGripRelease
struct AGrenadeBase_C_OnGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeBase.GrenadeBase_C.SetCollisionResponse
struct AGrenadeBase_C_SetCollisionResponse_Params
{
	TEnumAsByte<ECollisionResponse>*                   NewResponse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrenadeBase.GrenadeBase_C.Hover
struct AGrenadeBase_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>*                           InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GrenadeBase.GrenadeBase_C.ExecuteUbergraph_GrenadeBase
struct AGrenadeBase_C_ExecuteUbergraph_GrenadeBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
