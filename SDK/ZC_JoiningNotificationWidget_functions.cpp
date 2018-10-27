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

// Function JoiningNotificationWidget.JoiningNotificationWidget_C.FailedToJoin
// (Public, BlueprintCallable, BlueprintEvent)

void UJoiningNotificationWidget_C::FailedToJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoiningNotificationWidget.JoiningNotificationWidget_C.FailedToJoin");

	UJoiningNotificationWidget_C_FailedToJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoiningNotificationWidget.JoiningNotificationWidget_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UJoiningNotificationWidget_C::PlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoiningNotificationWidget.JoiningNotificationWidget_C.PlayAnim");

	UJoiningNotificationWidget_C_PlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoiningNotificationWidget.JoiningNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJoiningNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoiningNotificationWidget.JoiningNotificationWidget_C.Construct");

	UJoiningNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoiningNotificationWidget.JoiningNotificationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UJoiningNotificationWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoiningNotificationWidget.JoiningNotificationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature");

	UJoiningNotificationWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoiningNotificationWidget.JoiningNotificationWidget_C.ExecuteUbergraph_JoiningNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoiningNotificationWidget_C::ExecuteUbergraph_JoiningNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoiningNotificationWidget.JoiningNotificationWidget_C.ExecuteUbergraph_JoiningNotificationWidget");

	UJoiningNotificationWidget_C_ExecuteUbergraph_JoiningNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoiningNotificationWidget.JoiningNotificationWidget_C.CloseButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UJoiningNotificationWidget_C::CloseButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoiningNotificationWidget.JoiningNotificationWidget_C.CloseButtonPressed__DelegateSignature");

	UJoiningNotificationWidget_C_CloseButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
