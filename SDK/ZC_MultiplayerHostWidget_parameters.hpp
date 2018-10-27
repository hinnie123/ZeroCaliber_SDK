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

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.SaveEquipments
struct UMultiplayerHostWidget_C_SaveEquipments_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ClearMessage
struct UMultiplayerHostWidget_C_ClearMessage_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DisplayMessage
struct UMultiplayerHostWidget_C_DisplayMessage_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.SetPassword
struct UMultiplayerHostWidget_C_SetPassword_Params
{
	struct FString                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreaseGameType
struct UMultiplayerHostWidget_C_DecreaseGameType_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreaseGameType
struct UMultiplayerHostWidget_C_IncreaseGameType_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ChangeSteamFriendsStatus
struct UMultiplayerHostWidget_C_ChangeSteamFriendsStatus_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.Init
struct UMultiplayerHostWidget_C_Init_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ChangeNetworkHostingType
struct UMultiplayerHostWidget_C_ChangeNetworkHostingType_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreaseDifficulty
struct UMultiplayerHostWidget_C_DecreaseDifficulty_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreaseDifficulty
struct UMultiplayerHostWidget_C_IncreaseDifficulty_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreasePlayerNum
struct UMultiplayerHostWidget_C_DecreasePlayerNum_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreasePlayerNum
struct UMultiplayerHostWidget_C_IncreasePlayerNum_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IsInteractable
struct UMultiplayerHostWidget_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnFailure_CA2CCBEB456BFC4C5C597BBDC3280D42
struct UMultiplayerHostWidget_C_OnFailure_CA2CCBEB456BFC4C5C597BBDC3280D42_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnSuccess_CA2CCBEB456BFC4C5C597BBDC3280D42
struct UMultiplayerHostWidget_C_OnSuccess_CA2CCBEB456BFC4C5C597BBDC3280D42_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnFailure_7310540C4F8B3170EE2F1A92D1A399EE
struct UMultiplayerHostWidget_C_OnFailure_7310540C4F8B3170EE2F1A92D1A399EE_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnSuccess_7310540C4F8B3170EE2F1A92D1A399EE
struct UMultiplayerHostWidget_C_OnSuccess_7310540C4F8B3170EE2F1A92D1A399EE_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.Construct
struct UMultiplayerHostWidget_C_Construct_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.RefreshList
struct UMultiplayerHostWidget_C_RefreshList_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnCurrentLevel
struct UMultiplayerHostWidget_C_OnCurrentLevel_Params
{
	struct FLevelStruct                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPlayersRight_K2Node_ComponentBoundEvent_219_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonPlayersRight_K2Node_ComponentBoundEvent_219_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPlayersLeft_K2Node_ComponentBoundEvent_236_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonPlayersLeft_K2Node_ComponentBoundEvent_236_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonDifficultyRight_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonDifficultyRight_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonDifficultyLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonDifficultyLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonHostTypeRight_K2Node_ComponentBoundEvent_514_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonHostTypeRight_K2Node_ComponentBoundEvent_514_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonHostTypeLeft_K2Node_ComponentBoundEvent_531_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonHostTypeLeft_K2Node_ComponentBoundEvent_531_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonAccessTypeRight_K2Node_ComponentBoundEvent_360_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonAccessTypeRight_K2Node_ComponentBoundEvent_360_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonAccessTypeLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonAccessTypeLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_630_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_630_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_647_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_647_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonStartServer_K2Node_ComponentBoundEvent_915_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonStartServer_K2Node_ComponentBoundEvent_915_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPassTextBox_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__ButtonPassTextBox_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__RemovePasswd_K2Node_ComponentBoundEvent_141_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerHostWidget_C_BndEvt__RemovePasswd_K2Node_ComponentBoundEvent_141_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ExecuteUbergraph_MultiplayerHostWidget
struct UMultiplayerHostWidget_C_ExecuteUbergraph_MultiplayerHostWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.PasswdPressed__DelegateSignature
struct UMultiplayerHostWidget_C_PasswdPressed__DelegateSignature_Params
{
};

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BackButtonPressed__DelegateSignature
struct UMultiplayerHostWidget_C_BackButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
