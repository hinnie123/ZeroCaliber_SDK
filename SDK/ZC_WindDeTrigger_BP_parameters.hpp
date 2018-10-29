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

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.SetWeaponTail
struct AWindDeTrigger_BP_C_SetWeaponTail_Params
{
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.GetGrippedWeapon
struct AWindDeTrigger_BP_C_GetGrippedWeapon_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase_C*                               Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.GetBinauralWindReference
struct AWindDeTrigger_BP_C_GetBinauralWindReference_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.UserConstructionScript
struct AWindDeTrigger_BP_C_UserConstructionScript_Params
{
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AWindDeTrigger_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AWindDeTrigger_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.ReceiveBeginPlay
struct AWindDeTrigger_BP_C_ReceiveBeginPlay_Params
{
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.SetWeaponinPlayerHand
struct AWindDeTrigger_BP_C_SetWeaponinPlayerHand_Params
{
};

// Function WindDeTrigger_BP.WindDeTrigger_BP_C.ExecuteUbergraph_WindDeTrigger_BP
struct AWindDeTrigger_BP_C_ExecuteUbergraph_WindDeTrigger_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
