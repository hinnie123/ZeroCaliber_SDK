#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass LeftHand_AnimBP.LeftHand_AnimBP_C
// 0x0994 (0x0CF4 - 0x0360)
class ULeftHand_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_577CF9EC4CDB93EC37CCC9A616276AD6;      // 0x0368(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DBCD9136420DD2058B1C77B8985B7A46;// 0x03B0(0x0128)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_74CC61824EB6855584138E82C85D4BAF;// 0x04D8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55C76AD54D1B38407338A580E130BB88;// 0x05B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E55007334AE1E22C36DB90BAEC0A44F1;// 0x0668(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_070DF0BC4EF775F01753D5804B8E2FDF;// 0x0718(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5217054F4CA3CEC7B7938081EBDCABBE;// 0x07C8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A37D8B34B57EC75537B818B412937CC;// 0x0878(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0A83FA7418635447DC4D09403D08DE5;// 0x0928(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F5DD9C2D4FBDAF3978B242B4A57B9324;// 0x09D8(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E276209C431A9276463ACAB282ECBE51;// 0x0AF8(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0568C9A74D7538583881DF9BE623D1A1;// 0x0BA8(0x0128)
	float                                              Grip;                                                     // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGripEnum>                             GripState;                                                // 0x0CD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CD5(0x0003) MISSED OFFSET
	float                                              InterpSpeed;                                              // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             HandPose;                                                 // 0x0CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CDD(0x0003) MISSED OFFSET
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              GripBlendValue;                                           // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MC_L_TriggerValue;                                        // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MC_R_TriggerValue;                                        // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass LeftHand_AnimBP.LeftHand_AnimBP_C");
		return ptr;
	}


	void GetPlayerPawn(bool* Success);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_TwoWayBlend_F5DD9C2D4FBDAF3978B242B4A57B9324();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_0568C9A74D7538583881DF9BE623D1A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendListByEnum_74CC61824EB6855584138E82C85D4BAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_DBCD9136420DD2058B1C77B8985B7A46();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_LeftHand_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
