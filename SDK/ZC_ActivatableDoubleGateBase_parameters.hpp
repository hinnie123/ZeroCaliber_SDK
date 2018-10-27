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

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.UserConstructionScript
struct AActivatableDoubleGateBase_C_UserConstructionScript_Params
{
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Timeline_2__FinishedFunc
struct AActivatableDoubleGateBase_C_Timeline_2__FinishedFunc_Params
{
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Timeline_2__UpdateFunc
struct AActivatableDoubleGateBase_C_Timeline_2__UpdateFunc_Params
{
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.AnimateGates
struct AActivatableDoubleGateBase_C_AnimateGates_Params
{
	struct FTransform                                  StartTransformLeft;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  EndTransformLeft;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  StartTransformRight;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  EndTransformRight;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Deactivated
struct AActivatableDoubleGateBase_C_Deactivated_Params
{
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.Activated
struct AActivatableDoubleGateBase_C_Activated_Params
{
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.LoadState
struct AActivatableDoubleGateBase_C_LoadState_Params
{
};

// Function ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.ExecuteUbergraph_ActivatableDoubleGateBase
struct AActivatableDoubleGateBase_C_ExecuteUbergraph_ActivatableDoubleGateBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
