// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerInfo.ServerInfo_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHighlight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfo_C::Highlight(bool bHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfo.ServerInfo_C.Highlight");

	UServerInfo_C_Highlight_Params params;
	params.bHighlight = bHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfo.ServerInfo_C.LoadServerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class U3DMenu_C*               Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfo_C::LoadServerInfo(const struct FBlueprintSessionResult& SessionResult, class U3DMenu_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfo.ServerInfo_C.LoadServerInfo");

	UServerInfo_C_LoadServerInfo_Params params;
	params.SessionResult = SessionResult;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfo.ServerInfo_C.BndEvt__Button_74_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfo_C::BndEvt__Button_74_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfo.ServerInfo_C.BndEvt__Button_74_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UServerInfo_C_BndEvt__Button_74_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfo.ServerInfo_C.ExecuteUbergraph_ServerInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfo_C::ExecuteUbergraph_ServerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfo.ServerInfo_C.ExecuteUbergraph_ServerInfo");

	UServerInfo_C_ExecuteUbergraph_ServerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
