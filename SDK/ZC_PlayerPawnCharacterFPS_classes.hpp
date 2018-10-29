#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C
// 0x0078 (0x10CC - 0x1054)
class APlayerPawnCharacterFPS_C : public APlayerPawnCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1054(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1058(0x0008) (Transient, DuplicateTransient)
	struct FTransform                                  LeftHandRelativeTransform;                                // 0x1060(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RightHandRelativeTransform;                               // 0x1090(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VrReplicatedCameraRelativeLocation;                       // 0x10C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnCharacterFPS.PlayerPawnCharacterFPS_C");
		return ptr;
	}


	void DebugKillAllEnemies();
	void DetachMenuToInFrontOfPlayer(class AActor* MenuActor);
	void InitializeHud();
	void TryToGrabObject(class UObject** ObjectToTryToGrab, struct FTransform* WorldTransform, class UGripMotionControllerComponent** Hand, class UGripMotionControllerComponent** OtherHand, bool* IsSlotGrip, struct FGameplayTag* GripSecondaryTag, struct FName* GripBoneName, bool* IsSecondaryGrip, bool* Gripped);
	void UserConstructionScript();
	void InpActEvt_I_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_J_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_L_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_U_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_O_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_10(float AxisValue);
	void CustomEvent(bool SwitchToOutOfBody);
	void ReceiveTick(float* DeltaSeconds);
	void On_Possessed();
	void ReceiveBeginPlay();
	void UpdateMCTriggerValues();
	void OptionsIsRightHandedChanged(bool* IsRightHanded);
	void OpenClosePauseMenu();
	void OpenCloseMultiplayerMenu();
	void ExecuteUbergraph_PlayerPawnCharacterFPS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
