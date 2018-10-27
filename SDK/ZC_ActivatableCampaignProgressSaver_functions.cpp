// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableCampaignProgressSaver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.UserConstructionScript");

	AActivatableCampaignProgressSaver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableCampaignProgressSaver_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.Activated");

	AActivatableCampaignProgressSaver_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActivatableCampaignProgressSaver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.ReceiveBeginPlay");

	AActivatableCampaignProgressSaver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.ExecuteUbergraph_ActivatableCampaignProgressSaver
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableCampaignProgressSaver_C::ExecuteUbergraph_ActivatableCampaignProgressSaver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C.ExecuteUbergraph_ActivatableCampaignProgressSaver");

	AActivatableCampaignProgressSaver_C_ExecuteUbergraph_ActivatableCampaignProgressSaver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
