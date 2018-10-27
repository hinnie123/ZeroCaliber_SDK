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

// Function IngameMenuWidget.IngameMenuWidget_C.GetVRGameInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVRGameInstanceVendetta_C* VRGameInstance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIngameMenuWidget_C::GetVRGameInstance(class UVRGameInstanceVendetta_C** VRGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.GetVRGameInstance");

	UIngameMenuWidget_C_GetVRGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VRGameInstance != nullptr)
		*VRGameInstance = params.VRGameInstance;
}


// Function IngameMenuWidget.IngameMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIngameMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.Construct");

	UIngameMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenuWidget_C::BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature");

	UIngameMenuWidget_C_BndEvt__OptionsButton_K2Node_ComponentBoundEvent_162_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenuWidget_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature");

	UIngameMenuWidget_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_191_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenuWidget_C::BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature");

	UIngameMenuWidget_C_BndEvt__RestartLevelButton_K2Node_ComponentBoundEvent_148_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__RestartCheckpointButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenuWidget_C::BndEvt__RestartCheckpointButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__RestartCheckpointButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UIngameMenuWidget_C_BndEvt__RestartCheckpointButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__ExitToMenuButton_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenuWidget_C::BndEvt__ExitToMenuButton_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__ExitToMenuButton_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature");

	UIngameMenuWidget_C_BndEvt__ExitToMenuButton_K2Node_ComponentBoundEvent_36_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameMenuWidget_C::LevelDataInitialized(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.LevelDataInitialized");

	UIngameMenuWidget_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UIngameMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UIngameMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameMenuWidget.IngameMenuWidget_C.ExecuteUbergraph_IngameMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameMenuWidget_C::ExecuteUbergraph_IngameMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IngameMenuWidget.IngameMenuWidget_C.ExecuteUbergraph_IngameMenuWidget");

	UIngameMenuWidget_C_ExecuteUbergraph_IngameMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
