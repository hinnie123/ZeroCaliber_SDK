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

// Function CampaignWidget.CampaignWidget_C.GetStatus
struct UCampaignWidget_C_GetStatus_Params
{
	TEnumAsByte<ECampaignStatusEnum>                   Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignWidget.CampaignWidget_C.SetStatus
struct UCampaignWidget_C_SetStatus_Params
{
	TEnumAsByte<ECampaignStatusEnum>                   Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignWidget.CampaignWidget_C.Init
struct UCampaignWidget_C_Init_Params
{
	struct FLevelLoaderStruct                          LevelLoader;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct UCampaignWidget_C_BndEvt__LevelButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature
struct UCampaignWidget_C_BndEvt__LevelButton_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UCampaignWidget_C_BndEvt__LevelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function CampaignWidget.CampaignWidget_C.ExecuteUbergraph_CampaignWidget
struct UCampaignWidget_C_ExecuteUbergraph_CampaignWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignWidget.CampaignWidget_C.Unhovered__DelegateSignature
struct UCampaignWidget_C_Unhovered__DelegateSignature_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CampaignWidget.CampaignWidget_C.Hovered__DelegateSignature
struct UCampaignWidget_C_Hovered__DelegateSignature_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CampaignWidget.CampaignWidget_C.Released__DelegateSignature
struct UCampaignWidget_C_Released__DelegateSignature_Params
{
	class UCampaignWidget_C*                           LevelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
