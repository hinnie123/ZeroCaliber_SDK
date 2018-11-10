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

// Function MenuBaseWidget.MenuBaseWidget_C.SelectButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UButton*>         OtherButtons                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UButton*                 SelectedButton                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenuBaseWidget_C::SelectButton(class UButton* SelectedButton, TArray<class UButton*>* OtherButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseWidget.MenuBaseWidget_C.SelectButton");

	UMenuBaseWidget_C_SelectButton_Params params;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherButtons != nullptr)
		*OtherButtons = params.OtherButtons;
}


// Function MenuBaseWidget.MenuBaseWidget_C.ResetButtonBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuBaseWidget_C::ResetButtonBackground(class UButton* Button, class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseWidget.MenuBaseWidget_C.ResetButtonBackground");

	UMenuBaseWidget_C_ResetButtonBackground_Params params;
	params.Button = Button;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuBaseWidget.MenuBaseWidget_C.CloseButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMenuBaseWidget_C::CloseButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseWidget.MenuBaseWidget_C.CloseButtonPressed__DelegateSignature");

	UMenuBaseWidget_C_CloseButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuBaseWidget.MenuBaseWidget_C.MenuChangeRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewMenu                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenuBaseWidget_C::MenuChangeRequest__DelegateSignature(class UClass* NewMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuBaseWidget.MenuBaseWidget_C.MenuChangeRequest__DelegateSignature");

	UMenuBaseWidget_C_MenuChangeRequest__DelegateSignature_Params params;
	params.NewMenu = NewMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
