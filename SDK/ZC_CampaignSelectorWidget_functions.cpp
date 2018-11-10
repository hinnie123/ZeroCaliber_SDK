// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CampaignSelectorWidget.CampaignSelectorWidget_C.ClearCampaigns
// (Public, BlueprintCallable, BlueprintEvent)

void UCampaignSelectorWidget_C::ClearCampaigns()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignSelectorWidget.CampaignSelectorWidget_C.ClearCampaigns");

	UCampaignSelectorWidget_C_ClearCampaigns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignSelectorWidget.CampaignSelectorWidget_C.AddCampaigns
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLevelLoaderStruct> CampaignStruct                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UCampaignWidget_C*> Campaigns                      (Parm, OutParm, ZeroConstructor)

void UCampaignSelectorWidget_C::AddCampaigns(TArray<struct FLevelLoaderStruct>* CampaignStruct, TArray<class UCampaignWidget_C*>* Campaigns)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignSelectorWidget.CampaignSelectorWidget_C.AddCampaigns");

	UCampaignSelectorWidget_C_AddCampaigns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CampaignStruct != nullptr)
		*CampaignStruct = params.CampaignStruct;
	if (Campaigns != nullptr)
		*Campaigns = params.Campaigns;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
