#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.GetPlayerPawnCharacter
struct UOptionsGameMenuWidget_C_GetPlayerPawnCharacter_Params
{
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectSubtitleButtons
struct UOptionsGameMenuWidget_C_SelectSubtitleButtons_Params
{
	bool                                               SubtitleEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.TurnOffOutline
struct UOptionsGameMenuWidget_C_TurnOffOutline_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.TurnOnOutline
struct UOptionsGameMenuWidget_C_TurnOnOutline_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectOutlineButton
struct UOptionsGameMenuWidget_C_SelectOutlineButton_Params
{
	bool                                               OutlinUse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectDifficultyButton
struct UOptionsGameMenuWidget_C_SelectDifficultyButton_Params
{
	TEnumAsByte<EDifficulty>                           Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.GetTextPlayerHeight
struct UOptionsGameMenuWidget_C_GetTextPlayerHeight_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.Construct
struct UOptionsGameMenuWidget_C_Construct_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__MediumButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__MediumButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__HardButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.PreConstruct
struct UOptionsGameMenuWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.OnSliderValueChanged
struct UOptionsGameMenuWidget_C_OnSliderValueChanged_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OutlineOnButton_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__OutlineOnButton_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OutlineOffButton_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__OutlineOffButton_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OnButton_K2Node_ComponentBoundEvent_140_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__OnButton_K2Node_ComponentBoundEvent_140_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OffButton_K2Node_ComponentBoundEvent_163_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__OffButton_K2Node_ComponentBoundEvent_163_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__AutomeasureButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UOptionsGameMenuWidget_C_BndEvt__AutomeasureButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.CalculateHeight
struct UOptionsGameMenuWidget_C_CalculateHeight_Params
{
};

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.ExecuteUbergraph_OptionsGameMenuWidget
struct UOptionsGameMenuWidget_C_ExecuteUbergraph_OptionsGameMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
