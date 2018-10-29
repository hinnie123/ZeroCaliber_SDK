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

// Function CampaignSelectorWidget.CampaignSelectorWidget_C.ClearCampaigns
struct UCampaignSelectorWidget_C_ClearCampaigns_Params
{
};

// Function CampaignSelectorWidget.CampaignSelectorWidget_C.AddCampaigns
struct UCampaignSelectorWidget_C_AddCampaigns_Params
{
	TArray<struct FLevelLoaderStruct>                  CampaignStruct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UCampaignWidget_C*>                   Campaigns;                                                // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
