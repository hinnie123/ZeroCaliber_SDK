#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MenuBaseWidget.MenuBaseWidget_C.SelectButton
struct UMenuBaseWidget_C_SelectButton_Params
{
	TArray<class UButton*>                             OtherButtons;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UButton*                                     SelectedButton;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MenuBaseWidget.MenuBaseWidget_C.ResetButtonBackground
struct UMenuBaseWidget_C_ResetButtonBackground_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuBaseWidget.MenuBaseWidget_C.CloseButtonPressed__DelegateSignature
struct UMenuBaseWidget_C_CloseButtonPressed__DelegateSignature_Params
{
};

// Function MenuBaseWidget.MenuBaseWidget_C.MenuChangeRequest__DelegateSignature
struct UMenuBaseWidget_C_MenuChangeRequest__DelegateSignature_Params
{
	class UClass*                                      NewMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
