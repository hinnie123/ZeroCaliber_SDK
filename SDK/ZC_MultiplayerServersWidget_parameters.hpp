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

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SaveEquipments
struct UMultiplayerServersWidget_C_SaveEquipments_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DecreasePage
struct UMultiplayerServersWidget_C_DecreasePage_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.IncreasePage
struct UMultiplayerServersWidget_C_IncreasePage_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.UpdatePageCounter
struct UMultiplayerServersWidget_C_UpdatePageCounter_Params
{
	int                                                CurrentPage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.Initialize
struct UMultiplayerServersWidget_C_Initialize_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ClearMessage
struct UMultiplayerServersWidget_C_ClearMessage_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DisplayMessage
struct UMultiplayerServersWidget_C_DisplayMessage_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DisableButton
struct UMultiplayerServersWidget_C_DisableButton_Params
{
	bool                                               Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ShowProcessing
struct UMultiplayerServersWidget_C_ShowProcessing_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.RefreshServer
struct UMultiplayerServersWidget_C_RefreshServer_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DecreaseGameTypeIndex
struct UMultiplayerServersWidget_C_DecreaseGameTypeIndex_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.IncreaseGameTypeIndex
struct UMultiplayerServersWidget_C_IncreaseGameTypeIndex_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_49C151CC409A0901E035D5A8F84CC91A
struct UMultiplayerServersWidget_C_OnFailure_49C151CC409A0901E035D5A8F84CC91A_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_49C151CC409A0901E035D5A8F84CC91A
struct UMultiplayerServersWidget_C_OnSuccess_49C151CC409A0901E035D5A8F84CC91A_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_5283F06A4A1E6F3077AFB7B34EC2FD44
struct UMultiplayerServersWidget_C_OnFailure_5283F06A4A1E6F3077AFB7B34EC2FD44_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_5283F06A4A1E6F3077AFB7B34EC2FD44
struct UMultiplayerServersWidget_C_OnSuccess_5283F06A4A1E6F3077AFB7B34EC2FD44_Params
{
	TArray<struct FBlueprintSessionResult>             Results;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_3971568F4EBDC12AA31DEDB8109E139D
struct UMultiplayerServersWidget_C_OnFailure_3971568F4EBDC12AA31DEDB8109E139D_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_3971568F4EBDC12AA31DEDB8109E139D
struct UMultiplayerServersWidget_C_OnSuccess_3971568F4EBDC12AA31DEDB8109E139D_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_32CEBF17423768E5E532E496EA7C0C84
struct UMultiplayerServersWidget_C_OnFailure_32CEBF17423768E5E532E496EA7C0C84_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_32CEBF17423768E5E532E496EA7C0C84
struct UMultiplayerServersWidget_C_OnSuccess_32CEBF17423768E5E532E496EA7C0C84_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.Construct
struct UMultiplayerServersWidget_C_Construct_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__BackRefresh_K2Node_ComponentBoundEvent_100_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__BackRefresh_K2Node_ComponentBoundEvent_100_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.LoadInfoWidgets
struct UMultiplayerServersWidget_C_LoadInfoWidgets_Params
{
	int                                                Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ServerInfoSelected
struct UMultiplayerServersWidget_C_ServerInfoSelected_Params
{
	class UServerInfoWidget_C*                         ServerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonCreate_K2Node_ComponentBoundEvent_166_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonCreate_K2Node_ComponentBoundEvent_166_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.LoadPage
struct UMultiplayerServersWidget_C_LoadPage_Params
{
	int                                                Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnJoinServer
struct UMultiplayerServersWidget_C_OnJoinServer_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPageRight_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonPageRight_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPageLeft_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonPageLeft_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonDedicated_K2Node_ComponentBoundEvent_516_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonDedicated_K2Node_ComponentBoundEvent_516_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonLan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonLan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonDirectConnect_K2Node_ComponentBoundEvent_182_OnButtonReleasedEvent__DelegateSignature
struct UMultiplayerServersWidget_C_BndEvt__ButtonDirectConnect_K2Node_ComponentBoundEvent_182_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnJoinWithPassword
struct UMultiplayerServersWidget_C_OnJoinWithPassword_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoinServerWithPassword
struct UMultiplayerServersWidget_C_JoinServerWithPassword_Params
{
	struct FString                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ExecuteUbergraph_MultiplayerServersWidget
struct UMultiplayerServersWidget_C_ExecuteUbergraph_MultiplayerServersWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.FailedToJoin__DelegateSignature
struct UMultiplayerServersWidget_C_FailedToJoin__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoiningInProgress__DelegateSignature
struct UMultiplayerServersWidget_C_JoiningInProgress__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.CorrectPassword__DelegateSignature
struct UMultiplayerServersWidget_C_CorrectPassword__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.InvalidPassword__DelegateSignature
struct UMultiplayerServersWidget_C_InvalidPassword__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoinWithPassword__DelegateSignature
struct UMultiplayerServersWidget_C_JoinWithPassword__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DirectConnectPressed__DelegateSignature
struct UMultiplayerServersWidget_C_DirectConnectPressed__DelegateSignature_Params
{
};

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.CreateButtonPressed__DelegateSignature
struct UMultiplayerServersWidget_C_CreateButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
