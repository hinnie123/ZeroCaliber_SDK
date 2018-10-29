// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RightHand_AnimBP.RightHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5
// (BlueprintEvent)

void URightHand_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP.RightHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5");

	URightHand_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_AnimGraphNode_BlendSpacePlayer_576D30B241B2C62D0E9AB2A7EE11CFC5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP.RightHand_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URightHand_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP.RightHand_AnimBP_C.BlueprintUpdateAnimation");

	URightHand_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP.RightHand_AnimBP_C.ExecuteUbergraph_RightHand_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URightHand_AnimBP_C::ExecuteUbergraph_RightHand_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP.RightHand_AnimBP_C.ExecuteUbergraph_RightHand_AnimBP");

	URightHand_AnimBP_C_ExecuteUbergraph_RightHand_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
