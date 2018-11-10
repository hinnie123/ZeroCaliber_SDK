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

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.DebugKillAllEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::DebugKillAllEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.DebugKillAllEnemies");

	APlayerPawnCharacterFPS_C_DebugKillAllEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.DetachMenuToInFrontOfPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MenuActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::DetachMenuToInFrontOfPlayer(class AActor* MenuActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.DetachMenuToInFrontOfPlayer");

	APlayerPawnCharacterFPS_C_DetachMenuToInFrontOfPlayer_Params params;
	params.MenuActor = MenuActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InitializeHud
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::InitializeHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InitializeHud");

	APlayerPawnCharacterFPS_C_InitializeHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.TryToGrabObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             WorldTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UGripMotionControllerComponent** Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  GripBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Gripped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::TryToGrabObject(class UObject** ObjectToTryToGrab, struct FTransform* WorldTransform, class UGripMotionControllerComponent** Hand, class UGripMotionControllerComponent** OtherHand, bool* IsSlotGrip, struct FGameplayTag* GripSecondaryTag, struct FName* GripBoneName, bool* IsSecondaryGrip, bool* Gripped)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.TryToGrabObject");

	APlayerPawnCharacterFPS_C_TryToGrabObject_Params params;
	params.ObjectToTryToGrab = ObjectToTryToGrab;
	params.WorldTransform = WorldTransform;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.IsSlotGrip = IsSlotGrip;
	params.GripSecondaryTag = GripSecondaryTag;
	params.GripBoneName = GripBoneName;
	params.IsSecondaryGrip = IsSecondaryGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gripped != nullptr)
		*Gripped = params.Gripped;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.UserConstructionScript");

	APlayerPawnCharacterFPS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_I_K2Node_InputKeyEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_I_K2Node_InputKeyEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_I_K2Node_InputKeyEvent_18");

	APlayerPawnCharacterFPS_C_InpActEvt_I_K2Node_InputKeyEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_J_K2Node_InputKeyEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_J_K2Node_InputKeyEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_J_K2Node_InputKeyEvent_17");

	APlayerPawnCharacterFPS_C_InpActEvt_J_K2Node_InputKeyEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_K_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_K_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_K_K2Node_InputKeyEvent_16");

	APlayerPawnCharacterFPS_C_InpActEvt_K_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_L_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_L_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_L_K2Node_InputKeyEvent_15");

	APlayerPawnCharacterFPS_C_InpActEvt_L_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_U_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_U_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_U_K2Node_InputKeyEvent_14");

	APlayerPawnCharacterFPS_C_InpActEvt_U_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_O_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_O_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_O_K2Node_InputKeyEvent_13");

	APlayerPawnCharacterFPS_C_InpActEvt_O_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12");

	APlayerPawnCharacterFPS_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_NumPadEight_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_11");

	APlayerPawnCharacterFPS_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_NumPadNine_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_10");

	APlayerPawnCharacterFPS_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_NumPadSix_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_9");

	APlayerPawnCharacterFPS_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_NumPadFive_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_8");

	APlayerPawnCharacterFPS_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_NumPadFour_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7");

	APlayerPawnCharacterFPS_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_C_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_C_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_C_K2Node_InputKeyEvent_6");

	APlayerPawnCharacterFPS_C_InpActEvt_C_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_C_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_C_K2Node_InputKeyEvent_5");

	APlayerPawnCharacterFPS_C_InpActEvt_C_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_Jump_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_Jump_K2Node_InputActionEvent_2");

	APlayerPawnCharacterFPS_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_Jump_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_Jump_K2Node_InputActionEvent_1");

	APlayerPawnCharacterFPS_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_T_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_T_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_T_K2Node_InputKeyEvent_4");

	APlayerPawnCharacterFPS_C_InpActEvt_T_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_T_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_T_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_T_K2Node_InputKeyEvent_3");

	APlayerPawnCharacterFPS_C_InpActEvt_T_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_R_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_R_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_R_K2Node_InputKeyEvent_2");

	APlayerPawnCharacterFPS_C_InpActEvt_R_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacterFPS_C::InpActEvt_LeftControl_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_1");

	APlayerPawnCharacterFPS_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	APlayerPawnCharacterFPS_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3");

	APlayerPawnCharacterFPS_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_6
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_6(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_6");

	APlayerPawnCharacterFPS_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_6_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_10
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_10(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_10");

	APlayerPawnCharacterFPS_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_10_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SwitchToOutOfBody              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::CustomEvent(bool SwitchToOutOfBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.CustomEvent");

	APlayerPawnCharacterFPS_C_CustomEvent_Params params;
	params.SwitchToOutOfBody = SwitchToOutOfBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ReceiveTick");

	APlayerPawnCharacterFPS_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.On Possessed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::On_Possessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.On Possessed");

	APlayerPawnCharacterFPS_C_On_Possessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawnCharacterFPS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ReceiveBeginPlay");

	APlayerPawnCharacterFPS_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.UpdateMCTriggerValues
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::UpdateMCTriggerValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.UpdateMCTriggerValues");

	APlayerPawnCharacterFPS_C_UpdateMCTriggerValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OptionsIsRightHandedChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsRightHanded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::OptionsIsRightHandedChanged(bool* IsRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OptionsIsRightHandedChanged");

	APlayerPawnCharacterFPS_C_OptionsIsRightHandedChanged_Params params;
	params.IsRightHanded = IsRightHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OpenClosePauseMenu
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::OpenClosePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OpenClosePauseMenu");

	APlayerPawnCharacterFPS_C_OpenClosePauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OpenCloseMultiplayerMenu
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacterFPS_C::OpenCloseMultiplayerMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OpenCloseMultiplayerMenu");

	APlayerPawnCharacterFPS_C_OpenCloseMultiplayerMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ExecuteUbergraph_PlayerPawnCharacterFPS
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacterFPS_C::ExecuteUbergraph_PlayerPawnCharacterFPS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ExecuteUbergraph_PlayerPawnCharacterFPS");

	APlayerPawnCharacterFPS_C_ExecuteUbergraph_PlayerPawnCharacterFPS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
