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

// Function OptionsControlsMappingViveMenuWidget.OptionsControlsMappingViveMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsMappingViveMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsMappingViveMenuWidget.OptionsControlsMappingViveMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsMappingViveMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsMappingViveMenuWidget.OptionsControlsMappingViveMenuWidget_C.ExecuteUbergraph_OptionsControlsMappingViveMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsControlsMappingViveMenuWidget_C::ExecuteUbergraph_OptionsControlsMappingViveMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsMappingViveMenuWidget.OptionsControlsMappingViveMenuWidget_C.ExecuteUbergraph_OptionsControlsMappingViveMenuWidget");

	UOptionsControlsMappingViveMenuWidget_C_ExecuteUbergraph_OptionsControlsMappingViveMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
