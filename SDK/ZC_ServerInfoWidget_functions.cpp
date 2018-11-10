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

// Function ServerInfoWidget.ServerInfoWidget_C.Highlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Background                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::Highlight(class UImage* Background, const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Highlight");

	UServerInfoWidget_C_Highlight_Params params;
	params.Background = Background;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.LoadServerInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult SessionResult                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerInfoWidget_C::LoadServerInfo(const struct FBlueprintSessionResult& SessionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.LoadServerInfo");

	UServerInfoWidget_C_LoadServerInfo_Params params;
	params.SessionResult = SessionResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Construct");

	UServerInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfoWidget_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfoWidget_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_489_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfoWidget_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_489_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_489_OnButtonHoverEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_489_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_501_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UServerInfoWidget_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_501_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_501_OnButtonHoverEvent__DelegateSignature");

	UServerInfoWidget_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_501_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.ClearSelection
// (BlueprintCallable, BlueprintEvent)

void UServerInfoWidget_C::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ClearSelection");

	UServerInfoWidget_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerInfoWidget_C::ExecuteUbergraph_ServerInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget");

	UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.JoinServerWithPassword__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UServerInfoWidget_C::JoinServerWithPassword__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.JoinServerWithPassword__DelegateSignature");

	UServerInfoWidget_C_JoinServerWithPassword__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.JoinServer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UServerInfoWidget_C::JoinServer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.JoinServer__DelegateSignature");

	UServerInfoWidget_C_JoinServer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerInfoWidget.ServerInfoWidget_C.ServerInfoSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerInfoWidget_C::ServerInfoSelected__DelegateSignature(class UServerInfoWidget_C* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ServerInfoSelected__DelegateSignature");

	UServerInfoWidget_C_ServerInfoSelected__DelegateSignature_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
