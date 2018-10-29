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

// AnimBlueprintGeneratedClass UE4ASP_HeroTPP_AnimBlueprint.UE4ASP_HeroTPP_AnimBlueprint_C
// 0x0B5B (0x0EBB - 0x0360)
class UUE4ASP_HeroTPP_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0C0304664E5D637E777F8F82B80BDD47;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78C3746B4C10022D609AD6A27618D2ED;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58EDEBE34160C294191EBFAB9F63A3B7;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23C30FC54F432C27A8D2E086D1A0B4F4;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFFCF0144598EDEE64EE439BD7BDAFDF;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5540D45C4BCA55AEC05DA1A1E21BFB58;// 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E2FA68D046B28AF86B5CBAA099FA056F;// 0x05A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A;// 0x05F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E;// 0x0638(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C6D350441E998F44093C798BB4C071C;// 0x0680(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3163F8234400D90A8D5A4494801CFE23;// 0x06C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C6840A414E888EE73F8F539647D22D1E;// 0x0710(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4664B17F4CB02F4B6A675C8868CAFEA8;// 0x0838(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2D643BA4C3600B1D9D7D8A75F5F8A1F;// 0x0880(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_923A2E92452270AE79162487AF01084E;// 0x0930(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C0BEA184A4517BE4A73F6B8B18270A7;// 0x0978(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EB35F24F40F27C351EA7A7914C563941;// 0x0A28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7CE5CCED48F84FFA8C99C89BAFADD7E9;// 0x0A70(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8707377A4A7AB494C1B0E98C0818F0AE;// 0x0B20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B905355488C69F57D1302949E0D172D;// 0x0B68(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2CECE82A42D9A4C2879D88A5ECEE39CB;// 0x0C18(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1995CFFC4E4C2C5D00C8549266C69DEE;// 0x0C60(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5925BA954F8CE550AF7F2186CB70990D;// 0x0D88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD21F2574F606D48D79179B2C8B9494C;// 0x0DD0(0x00E0)
	float                                              Speed;                                                    // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Jump;                                              // 0x0EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumping;                                                  // 0x0EB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Crouching;                                                // 0x0EBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass UE4ASP_HeroTPP_AnimBlueprint.UE4ASP_HeroTPP_AnimBlueprint_C");
		return ptr;
	}


	void Can_Jump(bool Should_Jump, bool* bJumping);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_FFFCF0144598EDEE64EE439BD7BDAFDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_5540D45C4BCA55AEC05DA1A1E21BFB58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_E2FA68D046B28AF86B5CBAA099FA056F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_5C6D350441E998F44093C798BB4C071C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_3163F8234400D90A8D5A4494801CFE23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_C6840A414E888EE73F8F539647D22D1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_58EDEBE34160C294191EBFAB9F63A3B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_78C3746B4C10022D609AD6A27618D2ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_1995CFFC4E4C2C5D00C8549266C69DEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_Jump();
	void AnimNotify_IdleStart();
	void AnimNotify_JogStart();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint_AnimGraphNode_TransitionResult_23C30FC54F432C27A8D2E086D1A0B4F4();
	void ExecuteUbergraph_UE4ASP_HeroTPP_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
