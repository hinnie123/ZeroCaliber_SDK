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

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.IsLevelLocked
struct UCampaignDetailsWidget_C_IsLevelLocked_Params
{
	struct FLevelStruct                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.ChangeStartButtonStyle
struct UCampaignDetailsWidget_C_ChangeStartButtonStyle_Params
{
	TEnumAsByte<ECampaignStatusEnum>                   LevelStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.TurnOnVisibility
struct UCampaignDetailsWidget_C_TurnOnVisibility_Params
{
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.Construct
struct UCampaignDetailsWidget_C_Construct_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__StartLevelButton_K2Node_ComponentBoundEvent_87_OnButtonReleasedEvent__DelegateSignature
struct UCampaignDetailsWidget_C_BndEvt__StartLevelButton_K2Node_ComponentBoundEvent_87_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_104_OnButtonReleasedEvent__DelegateSignature
struct UCampaignDetailsWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_104_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.UpdateDetails
struct UCampaignDetailsWidget_C_UpdateDetails_Params
{
	struct FLevelLoaderStruct                          LevelLoaderStruct;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ECampaignStatusEnum>                   CampaignStatus;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.UpdateStatus
struct UCampaignDetailsWidget_C_UpdateStatus_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.OnCurrentLevel
struct UCampaignDetailsWidget_C_OnCurrentLevel_Params
{
	struct FLevelStruct                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_226_OnButtonReleasedEvent__DelegateSignature
struct UCampaignDetailsWidget_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_226_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__DoubleButtonLeft_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature
struct UCampaignDetailsWidget_C_BndEvt__DoubleButtonLeft_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__DoubleButtonRight_K2Node_ComponentBoundEvent_128_OnButtonReleasedEvent__DelegateSignature
struct UCampaignDetailsWidget_C_BndEvt__DoubleButtonRight_K2Node_ComponentBoundEvent_128_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.ExecuteUbergraph_CampaignDetailsWidget
struct UCampaignDetailsWidget_C_ExecuteUbergraph_CampaignDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
