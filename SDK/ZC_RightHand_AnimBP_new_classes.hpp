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

// AnimBlueprintGeneratedClass RightHand_AnimBP_new.RightHand_AnimBP_new_C
// 0x0990 (0x0CF0 - 0x0360)
class URightHand_AnimBP_new_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4F046FE04B7AA1EA9246D68865C2EBCE;      // 0x0368(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_FB1AF20B4F744BFA8BAD8384F2B892DB;// 0x03B0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE7095A941FB643C7190D28FB8EDE559;// 0x0490(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E4DD85064201A745B65EA38A281140AF;// 0x0540(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDA1950E44634614DA41A1ABB7E4B62F;// 0x05F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE9D002148D2768885CB4CB9B176268B;// 0x06A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C162F1844C6156760A01787461D348B;// 0x0750(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9573C9C24B8C53A648AF18B2431D725F;// 0x0800(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52F0DCE243BC6DD0DD5249A9CCB7CB36;// 0x08B0(0x0128)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_177B3F85452E6BF2A3ADFBBA4F26898D;// 0x09D8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E0BD388C4F9962C716D290ADBF59E209;// 0x0AF8(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C24148048ECFB9352CE8FBF60BD2025;// 0x0C20(0x00B0)
	float                                              Grip;                                                     // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGripEnum>                             GripState;                                                // 0x0CD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CD5(0x0003) MISSED OFFSET
	float                                              InterpSpeed;                                              // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             HandPose;                                                 // 0x0CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CDD(0x0003) MISSED OFFSET
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              GripBlendValue;                                           // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MC_R_TriggerValue;                                        // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RightHand_AnimBP_new.RightHand_AnimBP_new_C");
		return ptr;
	}


	void GetPlayerPawn(bool* Success);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_TwoWayBlend_177B3F85452E6BF2A3ADFBBA4F26898D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_E0BD388C4F9962C716D290ADBF59E209();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_52F0DCE243BC6DD0DD5249A9CCB7CB36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendListByEnum_FB1AF20B4F744BFA8BAD8384F2B892DB();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_RightHand_AnimBP_new(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
