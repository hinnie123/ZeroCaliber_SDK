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

// Function LevelSelectorActor.LevelSelectorActor_C.InitCampaignsStatus
struct ALevelSelectorActor_C_InitCampaignsStatus_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.GetCampaignStatus
struct ALevelSelectorActor_C_GetCampaignStatus_Params
{
	TEnumAsByte<ECampaignStatusEnum>                   Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.LevelDetailsScalingAnim
struct ALevelSelectorActor_C_LevelDetailsScalingAnim_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosEnd;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleStart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleEnd;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.SetLevelDetailsPos
struct ALevelSelectorActor_C_SetLevelDetailsPos_Params
{
	struct FVector2D                                   Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.LoadDataTables
struct ALevelSelectorActor_C_LoadDataTables_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.UserConstructionScript
struct ALevelSelectorActor_C_UserConstructionScript_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelUp__FinishedFunc
struct ALevelSelectorActor_C_ScaleDetailsPanelUp__FinishedFunc_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelUp__UpdateFunc
struct ALevelSelectorActor_C_ScaleDetailsPanelUp__UpdateFunc_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelDown__FinishedFunc
struct ALevelSelectorActor_C_ScaleDetailsPanelDown__FinishedFunc_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelDown__UpdateFunc
struct ALevelSelectorActor_C_ScaleDetailsPanelDown__UpdateFunc_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.ReceiveBeginPlay
struct ALevelSelectorActor_C_ReceiveBeginPlay_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.SpawningCampaign
struct ALevelSelectorActor_C_SpawningCampaign_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.LevelOnReleasedEvent
struct ALevelSelectorActor_C_LevelOnReleasedEvent_Params
{
	class UCampaignWidget_C*                           LevelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.LevelDetailBackBtnOnReleased
struct ALevelSelectorActor_C_LevelDetailBackBtnOnReleased_Params
{
};

// Function LevelSelectorActor.LevelSelectorActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ALevelSelectorActor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ALevelSelectorActor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelSelectorActor.LevelSelectorActor_C.ExecuteUbergraph_LevelSelectorActor
struct ALevelSelectorActor_C_ExecuteUbergraph_LevelSelectorActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
