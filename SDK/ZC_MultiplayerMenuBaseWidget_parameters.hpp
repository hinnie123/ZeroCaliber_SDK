#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.DisableButtons
struct UMultiplayerMenuBaseWidget_C_DisableButtons_Params
{
	bool                                               bDisable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ClearMessage
struct UMultiplayerMenuBaseWidget_C_ClearMessage_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.DisplayMessage
struct UMultiplayerMenuBaseWidget_C_DisplayMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ShowProcessing
struct UMultiplayerMenuBaseWidget_C_ShowProcessing_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.SetFocusedPanel
struct UMultiplayerMenuBaseWidget_C_SetFocusedPanel_Params
{
	class UServerInfoWidget_C*                         Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_67415F4E4C5209D7254488AEAE7BEC59
struct UMultiplayerMenuBaseWidget_C_OnFailure_67415F4E4C5209D7254488AEAE7BEC59_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_67415F4E4C5209D7254488AEAE7BEC59
struct UMultiplayerMenuBaseWidget_C_OnSuccess_67415F4E4C5209D7254488AEAE7BEC59_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_6B15780C48582725CF062FA5C14C10AF
struct UMultiplayerMenuBaseWidget_C_OnFailure_6B15780C48582725CF062FA5C14C10AF_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_6B15780C48582725CF062FA5C14C10AF
struct UMultiplayerMenuBaseWidget_C_OnSuccess_6B15780C48582725CF062FA5C14C10AF_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_381183F745E67D08CCBD3F81B2D137F1
struct UMultiplayerMenuBaseWidget_C_OnFailure_381183F745E67D08CCBD3F81B2D137F1_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_381183F745E67D08CCBD3F81B2D137F1
struct UMultiplayerMenuBaseWidget_C_OnSuccess_381183F745E67D08CCBD3F81B2D137F1_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_1895203F49ECDB2E582548BD1FF0A56F
struct UMultiplayerMenuBaseWidget_C_OnFailure_1895203F49ECDB2E582548BD1FF0A56F_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_1895203F49ECDB2E582548BD1FF0A56F
struct UMultiplayerMenuBaseWidget_C_OnSuccess_1895203F49ECDB2E582548BD1FF0A56F_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_266DBD654F6523FA07F052B9DBE7DD56
struct UMultiplayerMenuBaseWidget_C_OnFailure_266DBD654F6523FA07F052B9DBE7DD56_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_266DBD654F6523FA07F052B9DBE7DD56
struct UMultiplayerMenuBaseWidget_C_OnSuccess_266DBD654F6523FA07F052B9DBE7DD56_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_31127B5A4550F207C61EFBBDF2AEF213
struct UMultiplayerMenuBaseWidget_C_OnFailure_31127B5A4550F207C61EFBBDF2AEF213_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_31127B5A4550F207C61EFBBDF2AEF213
struct UMultiplayerMenuBaseWidget_C_OnSuccess_31127B5A4550F207C61EFBBDF2AEF213_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature
struct UMultiplayerMenuBaseWidget_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature
struct UMultiplayerMenuBaseWidget_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
struct UMultiplayerMenuBaseWidget_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ExecuteUbergraph_MultiplayerMenuBaseWidget
struct UMultiplayerMenuBaseWidget_C_ExecuteUbergraph_MultiplayerMenuBaseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
