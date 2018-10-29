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

// AnimBlueprintGeneratedClass UE4_Mannequin_AnimBP_IK.UE4_Mannequin_AnimBP_IK_C
// 0x1DD1 (0x2131 - 0x0360)
class UUE4_Mannequin_AnimBP_IK_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B0A089FD473D7AAEB756FFA79F1DC7A6;// 0x0368(0x0160)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_1178982349BBA1992138E7BBF48DC8D9; // 0x04D0(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_67F089C84E184A4A98C77690A365CD05; // 0x0740(0x0270)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E69BE37B417D8C569EEB6A8D56898B35;// 0x09B0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_169B88A840C2CB646B3DE5A29AB33A41;// 0x09F8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_398697CC4A4C0075DD0B18B86DE2DF3D; // 0x0A40(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_7AD29E6548F7A8CF7CC5428D1FA054FD; // 0x0CB0(0x0270)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FE17FA24ED1EF7DECCFD59BDDF4A9DF;// 0x0F20(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22541AA84D9FB886930FFEB325CB3C17;// 0x0F68(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2B40D0B14AF8FCC9C426C695DF38C9D4;// 0x0FB0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B60DD864B81CEA3F4D31F8DC554E48B;// 0x0FF8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_612371C94422A10B077F81A57217C6D0;// 0x1040(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D9E96B54C923E9FCD9E9FAAE01406D7;// 0x1088(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04EF6B1046C2830A79A63EB313FE0989;// 0x10D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A6A1EF3A4B513699793FE4A7B21C8AB7;// 0x1118(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8B91C54F4AB3124D0063DD90C8C7681E;// 0x1160(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B38D3E949714DE8F69E11A1F1AE4BCC;// 0x11A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E79BC74A4A07B4434F3C31A042E25E96;// 0x11F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_944A85E04C46EF3E754A438D8C5B1B90;// 0x1238(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_600B334D460B37FFA76090A6918B625E;// 0x1280(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05FC96884AFFAA5933D09C9EA9B49C07;// 0x13A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFFC22114205CB9CC40378A032A95911;// 0x13F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F7C8FD8040C965FB4EDBA383DE5442D0;// 0x14A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0A47EF4F45119417262D1BB6DE5CB1E4;// 0x14E8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7F1C6B044AD73186268E1C9C0912B3C3;// 0x1598(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9388849B416A401726F0BC8F0F14DD1F;// 0x15E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FEF38BBF45351262228361B86ABEEAD1;// 0x1690(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5C0CBE6A4B8D4676B3CEE1A2BD2C6B58;// 0x16D8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3A64F86C4F9C810254C33893BE70E6B6;// 0x1788(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EE3E63A6417AC556B4A05A8904B09E6F;// 0x17D0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_29C36B5E43B78831B8EE4AA21E0E0379;// 0x18F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FE1AE5C64624673617C7C0BDCA5D5BEF;// 0x1940(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_FDF1DE4C4C9056B46E2E3386B1FE1FAF;      // 0x1A20(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_317681D14E0F3922D44D708D4D15E382;// 0x1A68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F2C893DF42F938295DDE21936CD7AF3D;// 0x1BC8(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8BE4ABC442DB313A06444FA8F87E0548;// 0x1D28(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2823874444BB8A668D9AEBB14FD53381;// 0x1DF8(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8CD1469D4C58ED8BCC85ACBA448C2AAF;// 0x1EA8(0x0160)
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // 0x2008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandWorldLocationRight;                                   // 0x2010(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HandWorldRotationRight;                                   // 0x201C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandWorldLocationLeft;                                    // 0x2028(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HandWorldRotationLeft;                                    // 0x2034(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadWorldLocation;                                        // 0x2040(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HeadWorldRotation;                                        // 0x204C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandJointTargetRightCurrent;                              // 0x2058(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandJointTargetRight;                                     // 0x2064(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandJointTargetLeftCurrent;                               // 0x2070(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandJointTargetLeft;                                      // 0x207C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightFootEffectorLocation;                                // 0x2088(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftFootEffectorLocation;                                 // 0x2094(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Jump;                                              // 0x20A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x20A1(0x0003) MISSED OFFSET
	float                                              HeadRotationAlpha;                                        // 0x20A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x20A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x20AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Crouching;                                                // 0x20B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x20B1(0x0003) MISSED OFFSET
	struct FVector                                     RightFootJointTarget;                                     // 0x20B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftFootJointTarget;                                      // 0x20C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x20CC(0x0004) MISSED OFFSET
	struct FTransform                                  HandTRight;                                               // 0x20D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HandTLeft;                                                // 0x2100(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Alive;                                                    // 0x2130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass UE4_Mannequin_AnimBP_IK.UE4_Mannequin_AnimBP_IK_C");
		return ptr;
	}


	void Can_Jump(bool ShouldJump, bool* bJumping);
	void SetIKParams();
	void GetPlayerPawn(bool* Success);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_E79BC74A4A07B4434F3C31A042E25E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_944A85E04C46EF3E754A438D8C5B1B90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_BlendSpacePlayer_600B334D460B37FFA76090A6918B625E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_612371C94422A10B077F81A57217C6D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_0B38D3E949714DE8F69E11A1F1AE4BCC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_5B60DD864B81CEA3F4D31F8DC554E48B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_BlendSpacePlayer_EE3E63A6417AC556B4A05A8904B09E6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_2B40D0B14AF8FCC9C426C695DF38C9D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_BlendListByBool_8BE4ABC442DB313A06444FA8F87E0548();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_22541AA84D9FB886930FFEB325CB3C17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_8B91C54F4AB3124D0063DD90C8C7681E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_5FE17FA24ED1EF7DECCFD59BDDF4A9DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TwoBoneIK_7AD29E6548F7A8CF7CC5428D1FA054FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_3D9E96B54C923E9FCD9E9FAAE01406D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TwoBoneIK_398697CC4A4C0075DD0B18B86DE2DF3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_A6A1EF3A4B513699793FE4A7B21C8AB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TwoBoneIK_67F089C84E184A4A98C77690A365CD05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TwoBoneIK_1178982349BBA1992138E7BBF48DC8D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_ModifyBone_B0A089FD473D7AAEB756FFA79F1DC7A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4_Mannequin_AnimBP_IK_AnimGraphNode_TransitionResult_04EF6B1046C2830A79A63EB313FE0989();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_Jump();
	void AnimNotify_IdleStart();
	void AnimNotify_JogStart();
	void AnimNotify_NotifyStepCrouch();
	void AnimNotify_NotifyStepWalk();
	void AnimNotify_NotifyStepRun();
	void ExecuteUbergraph_UE4_Mannequin_AnimBP_IK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
