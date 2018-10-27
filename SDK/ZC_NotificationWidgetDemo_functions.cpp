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

// Function NotificationWidgetDemo.NotificationWidgetDemo_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UNotificationWidgetDemo_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationWidgetDemo.NotificationWidgetDemo_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UNotificationWidgetDemo_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationWidgetDemo.NotificationWidgetDemo_C.ExecuteUbergraph_NotificationWidgetDemo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotificationWidgetDemo_C::ExecuteUbergraph_NotificationWidgetDemo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationWidgetDemo.NotificationWidgetDemo_C.ExecuteUbergraph_NotificationWidgetDemo");

	UNotificationWidgetDemo_C_ExecuteUbergraph_NotificationWidgetDemo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationWidgetDemo.NotificationWidgetDemo_C.CloseButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNotificationWidgetDemo_C::CloseButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationWidgetDemo.NotificationWidgetDemo_C.CloseButtonPressed__DelegateSignature");

	UNotificationWidgetDemo_C_CloseButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
