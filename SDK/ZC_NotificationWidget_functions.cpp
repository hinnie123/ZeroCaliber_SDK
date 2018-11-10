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

// Function NotificationWidget.NotificationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UNotificationWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationWidget.NotificationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UNotificationWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationWidget.NotificationWidget_C.ExecuteUbergraph_NotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotificationWidget_C::ExecuteUbergraph_NotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationWidget.NotificationWidget_C.ExecuteUbergraph_NotificationWidget");

	UNotificationWidget_C_ExecuteUbergraph_NotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationWidget.NotificationWidget_C.CloseButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNotificationWidget_C::CloseButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationWidget.NotificationWidget_C.CloseButtonPressed__DelegateSignature");

	UNotificationWidget_C_CloseButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
