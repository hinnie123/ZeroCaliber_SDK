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

// Function MainMenuWidget.MainMenuWidget_C.GetVRGameInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVRGameInstanceVendetta_C* VRGameInstance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainMenuWidget_C::GetVRGameInstance(class UVRGameInstanceVendetta_C** VRGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.GetVRGameInstance");

	UMainMenuWidget_C_GetVRGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VRGameInstance != nullptr)
		*VRGameInstance = params.VRGameInstance;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature");

	UMainMenuWidget_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature");

	UMainMenuWidget_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__RestartButton_K2Node_ComponentBoundEvent_135_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__RestartButton_K2Node_ComponentBoundEvent_135_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__RestartButton_K2Node_ComponentBoundEvent_135_OnButtonReleasedEvent__DelegateSignature");

	UMainMenuWidget_C_BndEvt__RestartButton_K2Node_ComponentBoundEvent_135_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature");

	UMainMenuWidget_C_BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMainMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UMainMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenuWidget_C::ExecuteUbergraph_MainMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget");

	UMainMenuWidget_C_ExecuteUbergraph_MainMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
