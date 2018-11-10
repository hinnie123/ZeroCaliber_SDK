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

// Function ActivatableBase.ActivatableBase_C.LoadState
struct AActivatableBase_C_LoadState_Params
{
};

// Function ActivatableBase.ActivatableBase_C.OnRep_State
struct AActivatableBase_C_OnRep_State_Params
{
};

// Function ActivatableBase.ActivatableBase_C.DrawArrowFromToActor
struct AActivatableBase_C_DrawArrowFromToActor_Params
{
	class AActor*                                      FromActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ToActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScaleMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                ArrowColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.AllDeactivationsGot
struct AActivatableBase_C_AllDeactivationsGot_Params
{
	bool                                               AllActivatorsActivated;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.AllActivationsGot
struct AActivatableBase_C_AllActivationsGot_Params
{
	bool                                               AllActivatorsActivated;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.UserConstructionScript
struct AActivatableBase_C_UserConstructionScript_Params
{
};

// Function ActivatableBase.ActivatableBase_C.ReceiveBeginPlay
struct AActivatableBase_C_ReceiveBeginPlay_Params
{
};

// Function ActivatableBase.ActivatableBase_C.HandleActivatedEventDispatcher
struct AActivatableBase_C_HandleActivatedEventDispatcher_Params
{
	class AActivatableBase_C*                          Activator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.Activate
struct AActivatableBase_C_Activate_Params
{
};

// Function ActivatableBase.ActivatableBase_C.Deactivate
struct AActivatableBase_C_Deactivate_Params
{
};

// Function ActivatableBase.ActivatableBase_C.HandleDeactivatedEventDispatcher
struct AActivatableBase_C_HandleDeactivatedEventDispatcher_Params
{
	class AActivatableBase_C*                          Activator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.Activated
struct AActivatableBase_C_Activated_Params
{
};

// Function ActivatableBase.ActivatableBase_C.Deactivated
struct AActivatableBase_C_Deactivated_Params
{
};

// Function ActivatableBase.ActivatableBase_C.CallActivatedEvent
struct AActivatableBase_C_CallActivatedEvent_Params
{
};

// Function ActivatableBase.ActivatableBase_C.CallDeactivatedEvent
struct AActivatableBase_C_CallDeactivatedEvent_Params
{
};

// Function ActivatableBase.ActivatableBase_C.ExecuteUbergraph_ActivatableBase
struct AActivatableBase_C_ExecuteUbergraph_ActivatableBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.DeactivatedEventDispatcher__DelegateSignature
struct AActivatableBase_C_DeactivatedEventDispatcher__DelegateSignature_Params
{
	class AActivatableBase_C*                          Activator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableBase.ActivatableBase_C.ActivatedEventDispatcher__DelegateSignature
struct AActivatableBase_C_ActivatedEventDispatcher__DelegateSignature_Params
{
	class AActivatableBase_C*                          Activator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
