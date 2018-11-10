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

// Function HoloTutorial_Base.HoloTutorial_Base_C.HandleVideoPlayers
struct AHoloTutorial_Base_C_HandleVideoPlayers_Params
{
	bool                                               Close;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.ShowStates
struct AHoloTutorial_Base_C_ShowStates_Params
{
	bool                                               Activated;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.UserConstructionScript
struct AHoloTutorial_Base_C_UserConstructionScript_Params
{
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.HoloTimeline__FinishedFunc
struct AHoloTutorial_Base_C_HoloTimeline__FinishedFunc_Params
{
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.HoloTimeline__UpdateFunc
struct AHoloTutorial_Base_C_HoloTimeline__UpdateFunc_Params
{
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.ReceiveBeginPlay
struct AHoloTutorial_Base_C_ReceiveBeginPlay_Params
{
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.BndEvt__ActivateTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AHoloTutorial_Base_C_BndEvt__ActivateTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.Handle Activation
struct AHoloTutorial_Base_C_Handle_Activation_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.BndEvt__DeactivateTrigger_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature
struct AHoloTutorial_Base_C_BndEvt__DeactivateTrigger_K2Node_ComponentBoundEvent_20_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoloTutorial_Base.HoloTutorial_Base_C.ExecuteUbergraph_HoloTutorial_Base
struct AHoloTutorial_Base_C_ExecuteUbergraph_HoloTutorial_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
