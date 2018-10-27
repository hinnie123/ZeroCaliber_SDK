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

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.UserConstructionScript");

	AMenuActor_Multiplayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AMenuActor_Multiplayer_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_0__FinishedFunc");

	AMenuActor_Multiplayer_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AMenuActor_Multiplayer_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_0__UpdateFunc");

	AMenuActor_Multiplayer_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AMenuActor_Multiplayer_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_2__FinishedFunc");

	AMenuActor_Multiplayer_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AMenuActor_Multiplayer_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_2__UpdateFunc");

	AMenuActor_Multiplayer_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AMenuActor_Multiplayer_C::BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AMenuActor_Multiplayer_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_Multiplayer_C::BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AMenuActor_Multiplayer_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMenuActor_Multiplayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.ReceiveBeginPlay");

	AMenuActor_Multiplayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnBackButtonPressed
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnBackButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnBackButtonPressed");

	AMenuActor_Multiplayer_C_OnBackButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCreateButtonPressed
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnCreateButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCreateButtonPressed");

	AMenuActor_Multiplayer_C_OnCreateButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCloseButtonPressed
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnCloseButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCloseButtonPressed");

	AMenuActor_Multiplayer_C_OnCloseButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.AnimateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           PlayForward                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMenuActor_Multiplayer_C::AnimateWidget(class UWidgetComponent* Widget, bool PlayForward, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.AnimateWidget");

	AMenuActor_Multiplayer_C_AnimateWidget_Params params;
	params.Widget = Widget;
	params.PlayForward = PlayForward;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnDirectConnectPressed
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnDirectConnectPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnDirectConnectPressed");

	AMenuActor_Multiplayer_C_OnDirectConnectPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.IpJoinOnBackButtonPressed
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::IpJoinOnBackButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.IpJoinOnBackButtonPressed");

	AMenuActor_Multiplayer_C_IpJoinOnBackButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnPasswordPressed
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnPasswordPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnPasswordPressed");

	AMenuActor_Multiplayer_C_OnPasswordPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnPasswordPanelClose
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnPasswordPanelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnPasswordPanelClose");

	AMenuActor_Multiplayer_C_OnPasswordPanelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.SetPassword
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Password                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AMenuActor_Multiplayer_C::SetPassword(const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.SetPassword");

	AMenuActor_Multiplayer_C_SetPassword_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoinWithPassword
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnJoinWithPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoinWithPassword");

	AMenuActor_Multiplayer_C_OnJoinWithPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.JoinWithPassword
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PasswordJoin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AMenuActor_Multiplayer_C::JoinWithPassword(const struct FString& PasswordJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.JoinWithPassword");

	AMenuActor_Multiplayer_C_JoinWithPassword_Params params;
	params.PasswordJoin = PasswordJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnInvalidPassword
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnInvalidPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnInvalidPassword");

	AMenuActor_Multiplayer_C_OnInvalidPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCorrectPassword
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnCorrectPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCorrectPassword");

	AMenuActor_Multiplayer_C_OnCorrectPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoinInProgress
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnJoinInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoinInProgress");

	AMenuActor_Multiplayer_C_OnJoinInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.FailedToJoin
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::FailedToJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.FailedToJoin");

	AMenuActor_Multiplayer_C_FailedToJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoiningWidgetClose
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::OnJoiningWidgetClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoiningWidgetClose");

	AMenuActor_Multiplayer_C_OnJoiningWidgetClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C**           LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_Multiplayer_C::LevelDataInitialized(class ALevelData_C** LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.LevelDataInitialized");

	AMenuActor_Multiplayer_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.CheckPlayerLaserBeam
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_Multiplayer_C::CheckPlayerLaserBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.CheckPlayerLaserBeam");

	AMenuActor_Multiplayer_C_CheckPlayerLaserBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.ExecuteUbergraph_MenuActor_Multiplayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_Multiplayer_C::ExecuteUbergraph_MenuActor_Multiplayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.ExecuteUbergraph_MenuActor_Multiplayer");

	AMenuActor_Multiplayer_C_ExecuteUbergraph_MenuActor_Multiplayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
