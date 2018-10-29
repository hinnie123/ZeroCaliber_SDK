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

// Function LeftHand_AnimBP.LeftHand_AnimBP_C.GetPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeftHand_AnimBP_C::GetPlayerPawn(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.GetPlayerPawn");

	ULeftHand_AnimBP_C_GetPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_TwoWayBlend_F5DD9C2D4FBDAF3978B242B4A57B9324
// (BlueprintEvent)

void ULeftHand_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_TwoWayBlend_F5DD9C2D4FBDAF3978B242B4A57B9324()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_TwoWayBlend_F5DD9C2D4FBDAF3978B242B4A57B9324");

	ULeftHand_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_TwoWayBlend_F5DD9C2D4FBDAF3978B242B4A57B9324_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_0568C9A74D7538583881DF9BE623D1A1
// (BlueprintEvent)

void ULeftHand_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_0568C9A74D7538583881DF9BE623D1A1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_0568C9A74D7538583881DF9BE623D1A1");

	ULeftHand_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_0568C9A74D7538583881DF9BE623D1A1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendListByEnum_74CC61824EB6855584138E82C85D4BAF
// (BlueprintEvent)

void ULeftHand_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendListByEnum_74CC61824EB6855584138E82C85D4BAF()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendListByEnum_74CC61824EB6855584138E82C85D4BAF");

	ULeftHand_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendListByEnum_74CC61824EB6855584138E82C85D4BAF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_DBCD9136420DD2058B1C77B8985B7A46
// (BlueprintEvent)

void ULeftHand_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_DBCD9136420DD2058B1C77B8985B7A46()
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_DBCD9136420DD2058B1C77B8985B7A46");

	ULeftHand_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_LeftHand_AnimBP_AnimGraphNode_BlendSpacePlayer_DBCD9136420DD2058B1C77B8985B7A46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftHand_AnimBP.LeftHand_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeftHand_AnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.BlueprintUpdateAnimation");

	ULeftHand_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeftHand_AnimBP.LeftHand_AnimBP_C.ExecuteUbergraph_LeftHand_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeftHand_AnimBP_C::ExecuteUbergraph_LeftHand_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeftHand_AnimBP.LeftHand_AnimBP_C.ExecuteUbergraph_LeftHand_AnimBP");

	ULeftHand_AnimBP_C_ExecuteUbergraph_LeftHand_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
