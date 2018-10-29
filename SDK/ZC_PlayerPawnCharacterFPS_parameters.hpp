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

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.DebugKillAllEnemies
struct APlayerPawnCharacterFPS_C_DebugKillAllEnemies_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.DetachMenuToInFrontOfPlayer
struct APlayerPawnCharacterFPS_C_DetachMenuToInFrontOfPlayer_Params
{
	class AActor*                                      MenuActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InitializeHud
struct APlayerPawnCharacterFPS_C_InitializeHud_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.TryToGrabObject
struct APlayerPawnCharacterFPS_C_TryToGrabObject_Params
{
	class UObject**                                    ObjectToTryToGrab;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 WorldTransform;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UGripMotionControllerComponent**             Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent**             OtherHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsSlotGrip;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               GripSecondaryTag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName*                                      GripBoneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSecondaryGrip;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Gripped;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.UserConstructionScript
struct APlayerPawnCharacterFPS_C_UserConstructionScript_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_I_K2Node_InputKeyEvent_18
struct APlayerPawnCharacterFPS_C_InpActEvt_I_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_J_K2Node_InputKeyEvent_17
struct APlayerPawnCharacterFPS_C_InpActEvt_J_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_K_K2Node_InputKeyEvent_16
struct APlayerPawnCharacterFPS_C_InpActEvt_K_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_L_K2Node_InputKeyEvent_15
struct APlayerPawnCharacterFPS_C_InpActEvt_L_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_U_K2Node_InputKeyEvent_14
struct APlayerPawnCharacterFPS_C_InpActEvt_U_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_O_K2Node_InputKeyEvent_13
struct APlayerPawnCharacterFPS_C_InpActEvt_O_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12
struct APlayerPawnCharacterFPS_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_11
struct APlayerPawnCharacterFPS_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_10
struct APlayerPawnCharacterFPS_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_9
struct APlayerPawnCharacterFPS_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_8
struct APlayerPawnCharacterFPS_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_7
struct APlayerPawnCharacterFPS_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_C_K2Node_InputKeyEvent_6
struct APlayerPawnCharacterFPS_C_InpActEvt_C_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_C_K2Node_InputKeyEvent_5
struct APlayerPawnCharacterFPS_C_InpActEvt_C_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_Jump_K2Node_InputActionEvent_2
struct APlayerPawnCharacterFPS_C_InpActEvt_Jump_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_Jump_K2Node_InputActionEvent_1
struct APlayerPawnCharacterFPS_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_T_K2Node_InputKeyEvent_4
struct APlayerPawnCharacterFPS_C_InpActEvt_T_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_T_K2Node_InputKeyEvent_3
struct APlayerPawnCharacterFPS_C_InpActEvt_T_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_R_K2Node_InputKeyEvent_2
struct APlayerPawnCharacterFPS_C_InpActEvt_R_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_1
struct APlayerPawnCharacterFPS_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct APlayerPawnCharacterFPS_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
struct APlayerPawnCharacterFPS_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_6
struct APlayerPawnCharacterFPS_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_6_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_10
struct APlayerPawnCharacterFPS_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_10_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.CustomEvent
struct APlayerPawnCharacterFPS_C_CustomEvent_Params
{
	bool                                               SwitchToOutOfBody;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ReceiveTick
struct APlayerPawnCharacterFPS_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.On Possessed
struct APlayerPawnCharacterFPS_C_On_Possessed_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ReceiveBeginPlay
struct APlayerPawnCharacterFPS_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.UpdateMCTriggerValues
struct APlayerPawnCharacterFPS_C_UpdateMCTriggerValues_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OptionsIsRightHandedChanged
struct APlayerPawnCharacterFPS_C_OptionsIsRightHandedChanged_Params
{
	bool*                                              IsRightHanded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OpenClosePauseMenu
struct APlayerPawnCharacterFPS_C_OpenClosePauseMenu_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.OpenCloseMultiplayerMenu
struct APlayerPawnCharacterFPS_C_OpenCloseMultiplayerMenu_Params
{
};

// Function PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C.ExecuteUbergraph_PlayerPawnCharacterFPS
struct APlayerPawnCharacterFPS_C_ExecuteUbergraph_PlayerPawnCharacterFPS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
