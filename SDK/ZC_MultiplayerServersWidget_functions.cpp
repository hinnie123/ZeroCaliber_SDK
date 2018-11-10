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

// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortServerWidgetsByEnum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMultiplayerServerWidgetSorting> SortBy                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::SortServerWidgetsByEnum(TEnumAsByte<EMultiplayerServerWidgetSorting> SortBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortServerWidgetsByEnum");

	UMultiplayerServersWidget_C_SortServerWidgetsByEnum_Params params;
	params.SortBy = SortBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortServerWidgetsByDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::SortServerWidgetsByDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortServerWidgetsByDefault");

	UMultiplayerServersWidget_C_SortServerWidgetsByDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortByMapName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Ascending                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::SortByMapName(bool Ascending, TArray<struct FBlueprintSessionResult>* Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortByMapName");

	UMultiplayerServersWidget_C_SortByMapName_Params params;
	params.Ascending = Ascending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortByPlayerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ascending                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerServersWidget_C::SortByPlayerName(bool Ascending, TArray<struct FBlueprintSessionResult>* Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortByPlayerName");

	UMultiplayerServersWidget_C_SortByPlayerName_Params params;
	params.Ascending = Ascending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.HoverSortingButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsHover                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::HoverSortingButton(class UButton* Button, bool IsHover)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.HoverSortingButton");

	UMultiplayerServersWidget_C_HoverSortingButton_Params params;
	params.Button = Button;
	params.IsHover = IsHover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortingButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Sorting_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMultiplayerServersWidget_C::SortingButtonClicked(class UButton* Sorting_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortingButtonClicked");

	UMultiplayerServersWidget_C_SortingButtonClicked_Params params;
	params.Sorting_Button = Sorting_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortByPlayerNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ascending                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerServersWidget_C::SortByPlayerNum(bool Ascending, TArray<struct FBlueprintSessionResult>* Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SortByPlayerNum");

	UMultiplayerServersWidget_C_SortByPlayerNum_Params params;
	params.Ascending = Ascending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.FilterByGameDifficulty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Sessions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBlueprintSessionResult> Results                        (Parm, OutParm, ZeroConstructor)

void UMultiplayerServersWidget_C::FilterByGameDifficulty(TArray<struct FBlueprintSessionResult>* Sessions, TArray<struct FBlueprintSessionResult>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.FilterByGameDifficulty");

	UMultiplayerServersWidget_C_FilterByGameDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;
	if (Results != nullptr)
		*Results = params.Results;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.FilterByPassword
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> InSessions                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBlueprintSessionResult> Sessions                       (Parm, OutParm, ZeroConstructor)

void UMultiplayerServersWidget_C::FilterByPassword(TArray<struct FBlueprintSessionResult>* InSessions, TArray<struct FBlueprintSessionResult>* Sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.FilterByPassword");

	UMultiplayerServersWidget_C_FilterByPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSessions != nullptr)
		*InSessions = params.InSessions;
	if (Sessions != nullptr)
		*Sessions = params.Sessions;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SetFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::SetFilter()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SetFilter");

	UMultiplayerServersWidget_C_SetFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SelectButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMultiplayerServersWidget_C::SelectButton(bool IsSelected, class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SelectButton");

	UMultiplayerServersWidget_C_SelectButton_Params params;
	params.IsSelected = IsSelected;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.SaveEquipments
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::SaveEquipments()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.SaveEquipments");

	UMultiplayerServersWidget_C_SaveEquipments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DecreasePage
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::DecreasePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.DecreasePage");

	UMultiplayerServersWidget_C_DecreasePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.IncreasePage
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::IncreasePage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.IncreasePage");

	UMultiplayerServersWidget_C_IncreasePage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.UpdatePageCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::UpdatePageCounter(int CurrentPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.UpdatePageCounter");

	UMultiplayerServersWidget_C_UpdatePageCounter_Params params;
	params.CurrentPage = CurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.Initialize");

	UMultiplayerServersWidget_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.ClearMessage");

	UMultiplayerServersWidget_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DisplayMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerServersWidget_C::DisplayMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.DisplayMessage");

	UMultiplayerServersWidget_C_DisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::DisableButton(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.DisableButton");

	UMultiplayerServersWidget_C_DisableButton_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ShowProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::ShowProcessing(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.ShowProcessing");

	UMultiplayerServersWidget_C_ShowProcessing_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.RefreshServer
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::RefreshServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.RefreshServer");

	UMultiplayerServersWidget_C_RefreshServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DecreaseDifficultyIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::DecreaseDifficultyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.DecreaseDifficultyIndex");

	UMultiplayerServersWidget_C_DecreaseDifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.IncreaseDifficultyIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::IncreaseDifficultyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.IncreaseDifficultyIndex");

	UMultiplayerServersWidget_C_IncreaseDifficultyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_49C151CC409A0901E035D5A8F84CC91A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerServersWidget_C::OnFailure_49C151CC409A0901E035D5A8F84CC91A(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_49C151CC409A0901E035D5A8F84CC91A");

	UMultiplayerServersWidget_C_OnFailure_49C151CC409A0901E035D5A8F84CC91A_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_49C151CC409A0901E035D5A8F84CC91A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerServersWidget_C::OnSuccess_49C151CC409A0901E035D5A8F84CC91A(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_49C151CC409A0901E035D5A8F84CC91A");

	UMultiplayerServersWidget_C_OnSuccess_49C151CC409A0901E035D5A8F84CC91A_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_5283F06A4A1E6F3077AFB7B34EC2FD44
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerServersWidget_C::OnFailure_5283F06A4A1E6F3077AFB7B34EC2FD44(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_5283F06A4A1E6F3077AFB7B34EC2FD44");

	UMultiplayerServersWidget_C_OnFailure_5283F06A4A1E6F3077AFB7B34EC2FD44_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_5283F06A4A1E6F3077AFB7B34EC2FD44
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerServersWidget_C::OnSuccess_5283F06A4A1E6F3077AFB7B34EC2FD44(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_5283F06A4A1E6F3077AFB7B34EC2FD44");

	UMultiplayerServersWidget_C_OnSuccess_5283F06A4A1E6F3077AFB7B34EC2FD44_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_3971568F4EBDC12AA31DEDB8109E139D
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::OnFailure_3971568F4EBDC12AA31DEDB8109E139D()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_3971568F4EBDC12AA31DEDB8109E139D");

	UMultiplayerServersWidget_C_OnFailure_3971568F4EBDC12AA31DEDB8109E139D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_3971568F4EBDC12AA31DEDB8109E139D
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::OnSuccess_3971568F4EBDC12AA31DEDB8109E139D()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_3971568F4EBDC12AA31DEDB8109E139D");

	UMultiplayerServersWidget_C_OnSuccess_3971568F4EBDC12AA31DEDB8109E139D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_32CEBF17423768E5E532E496EA7C0C84
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::OnFailure_32CEBF17423768E5E532E496EA7C0C84()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnFailure_32CEBF17423768E5E532E496EA7C0C84");

	UMultiplayerServersWidget_C_OnFailure_32CEBF17423768E5E532E496EA7C0C84_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_32CEBF17423768E5E532E496EA7C0C84
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::OnSuccess_32CEBF17423768E5E532E496EA7C0C84()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnSuccess_32CEBF17423768E5E532E496EA7C0C84");

	UMultiplayerServersWidget_C_OnSuccess_32CEBF17423768E5E532E496EA7C0C84_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMultiplayerServersWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.Construct");

	UMultiplayerServersWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonGameTypeRight_K2Node_ComponentBoundEvent_22_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonGameTypeLeft_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__BackRefresh_K2Node_ComponentBoundEvent_100_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__BackRefresh_K2Node_ComponentBoundEvent_100_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__BackRefresh_K2Node_ComponentBoundEvent_100_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__BackRefresh_K2Node_ComponentBoundEvent_100_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.LoadInfoWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::LoadInfoWidgets(int Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.LoadInfoWidgets");

	UMultiplayerServersWidget_C_LoadInfoWidgets_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ServerInfoSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMultiplayerServersWidget_C::ServerInfoSelected(class UServerInfoWidget_C* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.ServerInfoSelected");

	UMultiplayerServersWidget_C_ServerInfoSelected_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonCreate_K2Node_ComponentBoundEvent_166_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonCreate_K2Node_ComponentBoundEvent_166_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonCreate_K2Node_ComponentBoundEvent_166_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonCreate_K2Node_ComponentBoundEvent_166_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.LoadPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::LoadPage(int Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.LoadPage");

	UMultiplayerServersWidget_C_LoadPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnJoinServer
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::OnJoinServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnJoinServer");

	UMultiplayerServersWidget_C_OnJoinServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPageRight_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonPageRight_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPageRight_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonPageRight_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPageLeft_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonPageLeft_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPageLeft_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonPageLeft_K2Node_ComponentBoundEvent_146_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonDedicated_K2Node_ComponentBoundEvent_516_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonDedicated_K2Node_ComponentBoundEvent_516_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonDedicated_K2Node_ComponentBoundEvent_516_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonDedicated_K2Node_ComponentBoundEvent_516_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonLan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonLan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonLan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonLan_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonDirectConnect_K2Node_ComponentBoundEvent_182_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonDirectConnect_K2Node_ComponentBoundEvent_182_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonDirectConnect_K2Node_ComponentBoundEvent_182_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonDirectConnect_K2Node_ComponentBoundEvent_182_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnJoinWithPassword
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::OnJoinWithPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.OnJoinWithPassword");

	UMultiplayerServersWidget_C_OnJoinWithPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoinServerWithPassword
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMultiplayerServersWidget_C::JoinServerWithPassword(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoinServerWithPassword");

	UMultiplayerServersWidget_C_JoinServerWithPassword_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPassword_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonPassword_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonPassword_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonPassword_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortMapName_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortPlayerName_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerServersWidget_C::BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UMultiplayerServersWidget_C_BndEvt__ButtonSortPlayer_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.ExecuteUbergraph_MultiplayerServersWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerServersWidget_C::ExecuteUbergraph_MultiplayerServersWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.ExecuteUbergraph_MultiplayerServersWidget");

	UMultiplayerServersWidget_C_ExecuteUbergraph_MultiplayerServersWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.FailedToJoin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::FailedToJoin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.FailedToJoin__DelegateSignature");

	UMultiplayerServersWidget_C_FailedToJoin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoiningInProgress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::JoiningInProgress__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoiningInProgress__DelegateSignature");

	UMultiplayerServersWidget_C_JoiningInProgress__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.CorrectPassword__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::CorrectPassword__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.CorrectPassword__DelegateSignature");

	UMultiplayerServersWidget_C_CorrectPassword__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.InvalidPassword__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::InvalidPassword__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.InvalidPassword__DelegateSignature");

	UMultiplayerServersWidget_C_InvalidPassword__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoinWithPassword__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::JoinWithPassword__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.JoinWithPassword__DelegateSignature");

	UMultiplayerServersWidget_C_JoinWithPassword__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.DirectConnectPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::DirectConnectPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.DirectConnectPressed__DelegateSignature");

	UMultiplayerServersWidget_C_DirectConnectPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerServersWidget.MultiplayerServersWidget_C.CreateButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMultiplayerServersWidget_C::CreateButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerServersWidget.MultiplayerServersWidget_C.CreateButtonPressed__DelegateSignature");

	UMultiplayerServersWidget_C_CreateButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
