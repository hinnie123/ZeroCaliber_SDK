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

// AnimBlueprintGeneratedClass RightHand_AnimBP.RightHand_AnimBP_C
// 0x0184 (0x04E4 - 0x0360)
class URightHand_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5AC1092F4EF0949D151F1D9EC2FBEA7D;      // 0x0368(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5;// 0x03B0(0x0128)
	TEnumAsByte<EGripEnum>                             GripState;                                                // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              InterpSpeed;                                              // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Grip;                                                     // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RightHand_AnimBP.RightHand_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_RightHand_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
