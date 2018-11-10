#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ue4ASP_Character.Ue4ASP_Character_C
// 0x001A (0x075A - 0x0740)
class AUe4ASP_Character_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (Transient, DuplicateTransient)
	class UCameraComponent*                            PlayerCamera;                                             // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         CameraBoom;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Jump_Button_Down;                                         // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Crouch_Button_Down;                                       // 0x0759(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ue4ASP_Character.Ue4ASP_Character_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Jump_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_244(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_257(float AxisValue);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_269(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue);
	void ExecuteUbergraph_Ue4ASP_Character(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
