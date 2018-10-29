// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MultiplayerHostWidget.MultiplayerHostWidget_C.SaveEquipments
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::SaveEquipments()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.SaveEquipments");

	UMultiplayerHostWidget_C_SaveEquipments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.ClearMessage");

	UMultiplayerHostWidget_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DisplayMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerHostWidget_C::DisplayMessage(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.DisplayMessage");

	UMultiplayerHostWidget_C_DisplayMessage_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.SetPassword
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMultiplayerHostWidget_C::SetPassword(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.SetPassword");

	UMultiplayerHostWidget_C_SetPassword_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreaseGameType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::DecreaseGameType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreaseGameType");

	UMultiplayerHostWidget_C_DecreaseGameType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreaseGameType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::IncreaseGameType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreaseGameType");

	UMultiplayerHostWidget_C_IncreaseGameType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ChangeSteamFriendsStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::ChangeSteamFriendsStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.ChangeSteamFriendsStatus");

	UMultiplayerHostWidget_C_ChangeSteamFriendsStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.Init");

	UMultiplayerHostWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ChangeNetworkHostingType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::ChangeNetworkHostingType()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.ChangeNetworkHostingType");

	UMultiplayerHostWidget_C_ChangeNetworkHostingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreaseDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::DecreaseDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreaseDifficulty");

	UMultiplayerHostWidget_C_DecreaseDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreaseDifficulty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::IncreaseDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreaseDifficulty");

	UMultiplayerHostWidget_C_IncreaseDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreasePlayerNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::DecreasePlayerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.DecreasePlayerNum");

	UMultiplayerHostWidget_C_DecreasePlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreasePlayerNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::IncreasePlayerNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.IncreasePlayerNum");

	UMultiplayerHostWidget_C_IncreasePlayerNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMultiplayerHostWidget_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.IsInteractable");

	UMultiplayerHostWidget_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnFailure_CA2CCBEB456BFC4C5C597BBDC3280D42
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::OnFailure_CA2CCBEB456BFC4C5C597BBDC3280D42()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnFailure_CA2CCBEB456BFC4C5C597BBDC3280D42");

	UMultiplayerHostWidget_C_OnFailure_CA2CCBEB456BFC4C5C597BBDC3280D42_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnSuccess_CA2CCBEB456BFC4C5C597BBDC3280D42
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::OnSuccess_CA2CCBEB456BFC4C5C597BBDC3280D42()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnSuccess_CA2CCBEB456BFC4C5C597BBDC3280D42");

	UMultiplayerHostWidget_C_OnSuccess_CA2CCBEB456BFC4C5C597BBDC3280D42_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnFailure_7310540C4F8B3170EE2F1A92D1A399EE
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::OnFailure_7310540C4F8B3170EE2F1A92D1A399EE()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnFailure_7310540C4F8B3170EE2F1A92D1A399EE");

	UMultiplayerHostWidget_C_OnFailure_7310540C4F8B3170EE2F1A92D1A399EE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnSuccess_7310540C4F8B3170EE2F1A92D1A399EE
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::OnSuccess_7310540C4F8B3170EE2F1A92D1A399EE()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnSuccess_7310540C4F8B3170EE2F1A92D1A399EE");

	UMultiplayerHostWidget_C_OnSuccess_7310540C4F8B3170EE2F1A92D1A399EE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMultiplayerHostWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.Construct");

	UMultiplayerHostWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_38_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.RefreshList
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::RefreshList()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.RefreshList");

	UMultiplayerHostWidget_C_RefreshList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnCurrentLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelStruct            Level                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerHostWidget_C::OnCurrentLevel(const struct FLevelStruct& Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.OnCurrentLevel");

	UMultiplayerHostWidget_C_OnCurrentLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPlayersRight_K2Node_ComponentBoundEvent_219_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonPlayersRight_K2Node_ComponentBoundEvent_219_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPlayersRight_K2Node_ComponentBoundEvent_219_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonPlayersRight_K2Node_ComponentBoundEvent_219_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPlayersLeft_K2Node_ComponentBoundEvent_236_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonPlayersLeft_K2Node_ComponentBoundEvent_236_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPlayersLeft_K2Node_ComponentBoundEvent_236_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonPlayersLeft_K2Node_ComponentBoundEvent_236_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonDifficultyRight_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonDifficultyRight_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonDifficultyRight_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonDifficultyRight_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonDifficultyLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonDifficultyLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonDifficultyLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonDifficultyLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonHostTypeRight_K2Node_ComponentBoundEvent_514_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonHostTypeRight_K2Node_ComponentBoundEvent_514_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonHostTypeRight_K2Node_ComponentBoundEvent_514_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonHostTypeRight_K2Node_ComponentBoundEvent_514_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonHostTypeLeft_K2Node_ComponentBoundEvent_531_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonHostTypeLeft_K2Node_ComponentBoundEvent_531_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonHostTypeLeft_K2Node_ComponentBoundEvent_531_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonHostTypeLeft_K2Node_ComponentBoundEvent_531_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonAccessTypeRight_K2Node_ComponentBoundEvent_360_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonAccessTypeRight_K2Node_ComponentBoundEvent_360_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonAccessTypeRight_K2Node_ComponentBoundEvent_360_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonAccessTypeRight_K2Node_ComponentBoundEvent_360_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonAccessTypeLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonAccessTypeLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonAccessTypeLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonAccessTypeLeft_K2Node_ComponentBoundEvent_389_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_630_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_630_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_630_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_630_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_647_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_647_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_647_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_647_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonStartServer_K2Node_ComponentBoundEvent_915_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonStartServer_K2Node_ComponentBoundEvent_915_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonStartServer_K2Node_ComponentBoundEvent_915_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonStartServer_K2Node_ComponentBoundEvent_915_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPassTextBox_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__ButtonPassTextBox_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__ButtonPassTextBox_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__ButtonPassTextBox_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__RemovePasswd_K2Node_ComponentBoundEvent_141_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerHostWidget_C::BndEvt__RemovePasswd_K2Node_ComponentBoundEvent_141_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BndEvt__RemovePasswd_K2Node_ComponentBoundEvent_141_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerHostWidget_C_BndEvt__RemovePasswd_K2Node_ComponentBoundEvent_141_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.ExecuteUbergraph_MultiplayerHostWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerHostWidget_C::ExecuteUbergraph_MultiplayerHostWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.ExecuteUbergraph_MultiplayerHostWidget");

	UMultiplayerHostWidget_C_ExecuteUbergraph_MultiplayerHostWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.PasswdPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::PasswdPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.PasswdPressed__DelegateSignature");

	UMultiplayerHostWidget_C_PasswdPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerHostWidget.MultiplayerHostWidget_C.BackButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerHostWidget_C::BackButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerHostWidget.MultiplayerHostWidget_C.BackButtonPressed__DelegateSignature");

	UMultiplayerHostWidget_C_BackButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
