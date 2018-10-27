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

// Function 3DMenu.3DMenu_C.DisableButtons
struct U3DMenu_C_DisableButtons_Params
{
	bool                                               bDisable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 3DMenu.3DMenu_C.ClearMessage
struct U3DMenu_C_ClearMessage_Params
{
};

// Function 3DMenu.3DMenu_C.DisplayMessage
struct U3DMenu_C_DisplayMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function 3DMenu.3DMenu_C.ShowProcessing
struct U3DMenu_C_ShowProcessing_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 3DMenu.3DMenu_C.SetFocusedPanel
struct U3DMenu_C_SetFocusedPanel_Params
{
	class UServerInfo_C*                               Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function 3DMenu.3DMenu_C.OnFailure_BF05D0D34E41E3B3A3944DAD348F03B4
struct U3DMenu_C_OnFailure_BF05D0D34E41E3B3A3944DAD348F03B4_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function 3DMenu.3DMenu_C.OnSuccess_BF05D0D34E41E3B3A3944DAD348F03B4
struct U3DMenu_C_OnSuccess_BF05D0D34E41E3B3A3944DAD348F03B4_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function 3DMenu.3DMenu_C.OnFailure_2B9602E044744BAEA47D46A8A180ECA6
struct U3DMenu_C_OnFailure_2B9602E044744BAEA47D46A8A180ECA6_Params
{
};

// Function 3DMenu.3DMenu_C.OnSuccess_2B9602E044744BAEA47D46A8A180ECA6
struct U3DMenu_C_OnSuccess_2B9602E044744BAEA47D46A8A180ECA6_Params
{
};

// Function 3DMenu.3DMenu_C.OnFailure_17E506A5433C55551FC56DAF4EBC4D25
struct U3DMenu_C_OnFailure_17E506A5433C55551FC56DAF4EBC4D25_Params
{
};

// Function 3DMenu.3DMenu_C.OnSuccess_17E506A5433C55551FC56DAF4EBC4D25
struct U3DMenu_C_OnSuccess_17E506A5433C55551FC56DAF4EBC4D25_Params
{
};

// Function 3DMenu.3DMenu_C.OnFailure_12D959694EA5B5529EA03FBA2A564C06
struct U3DMenu_C_OnFailure_12D959694EA5B5529EA03FBA2A564C06_Params
{
};

// Function 3DMenu.3DMenu_C.OnSuccess_12D959694EA5B5529EA03FBA2A564C06
struct U3DMenu_C_OnSuccess_12D959694EA5B5529EA03FBA2A564C06_Params
{
};

// Function 3DMenu.3DMenu_C.OnFailure_6F048AE542D3C22E0E13DCAA7BD7A7A9
struct U3DMenu_C_OnFailure_6F048AE542D3C22E0E13DCAA7BD7A7A9_Params
{
};

// Function 3DMenu.3DMenu_C.OnSuccess_6F048AE542D3C22E0E13DCAA7BD7A7A9
struct U3DMenu_C_OnSuccess_6F048AE542D3C22E0E13DCAA7BD7A7A9_Params
{
};

// Function 3DMenu.3DMenu_C.OnFailure_25FE13714E6A7B4A2140E39B5AFD34A4
struct U3DMenu_C_OnFailure_25FE13714E6A7B4A2140E39B5AFD34A4_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function 3DMenu.3DMenu_C.OnSuccess_25FE13714E6A7B4A2140E39B5AFD34A4
struct U3DMenu_C_OnSuccess_25FE13714E6A7B4A2140E39B5AFD34A4_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function 3DMenu.3DMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature
struct U3DMenu_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function 3DMenu.3DMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature
struct U3DMenu_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function 3DMenu.3DMenu_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
struct U3DMenu_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function 3DMenu.3DMenu_C.ExecuteUbergraph_3DMenu
struct U3DMenu_C_ExecuteUbergraph_3DMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
