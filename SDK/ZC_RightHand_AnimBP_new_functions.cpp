// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.GetPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URightHand_AnimBP_new_C::GetPlayerPawn(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.GetPlayerPawn");

	URightHand_AnimBP_new_C_GetPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_TwoWayBlend_177B3F85452E6BF2A3ADFBBA4F26898D
// (BlueprintEvent)

void URightHand_AnimBP_new_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_TwoWayBlend_177B3F85452E6BF2A3ADFBBA4F26898D()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_TwoWayBlend_177B3F85452E6BF2A3ADFBBA4F26898D");

	URightHand_AnimBP_new_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_TwoWayBlend_177B3F85452E6BF2A3ADFBBA4F26898D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_E0BD388C4F9962C716D290ADBF59E209
// (BlueprintEvent)

void URightHand_AnimBP_new_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_E0BD388C4F9962C716D290ADBF59E209()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_E0BD388C4F9962C716D290ADBF59E209");

	URightHand_AnimBP_new_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_E0BD388C4F9962C716D290ADBF59E209_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_52F0DCE243BC6DD0DD5249A9CCB7CB36
// (BlueprintEvent)

void URightHand_AnimBP_new_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_52F0DCE243BC6DD0DD5249A9CCB7CB36()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_52F0DCE243BC6DD0DD5249A9CCB7CB36");

	URightHand_AnimBP_new_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendSpacePlayer_52F0DCE243BC6DD0DD5249A9CCB7CB36_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendListByEnum_FB1AF20B4F744BFA8BAD8384F2B892DB
// (BlueprintEvent)

void URightHand_AnimBP_new_C::EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendListByEnum_FB1AF20B4F744BFA8BAD8384F2B892DB()
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendListByEnum_FB1AF20B4F744BFA8BAD8384F2B892DB");

	URightHand_AnimBP_new_C_EvaluateGraphExposedInputs_ExecuteUbergraph_RightHand_AnimBP_new_AnimGraphNode_BlendListByEnum_FB1AF20B4F744BFA8BAD8384F2B892DB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URightHand_AnimBP_new_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.BlueprintUpdateAnimation");

	URightHand_AnimBP_new_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.ExecuteUbergraph_RightHand_AnimBP_new
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URightHand_AnimBP_new_C::ExecuteUbergraph_RightHand_AnimBP_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RightHand_AnimBP_new.RightHand_AnimBP_new_C.ExecuteUbergraph_RightHand_AnimBP_new");

	URightHand_AnimBP_new_C_ExecuteUbergraph_RightHand_AnimBP_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
