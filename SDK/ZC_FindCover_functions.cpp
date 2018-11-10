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

// Function FindCover.FindCover_C.GetFurthestCaverFromSensedPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACover_C*                Cover1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACover_C*                Cover2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACover_C*                FurthestCover                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFindCover_C::GetFurthestCaverFromSensedPawn(class ACover_C* Cover1, class ACover_C* Cover2, class ACover_C** FurthestCover)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindCover.FindCover_C.GetFurthestCaverFromSensedPawn");

	UFindCover_C_GetFurthestCaverFromSensedPawn_Params params;
	params.Cover1 = Cover1;
	params.Cover2 = Cover2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FurthestCover != nullptr)
		*FurthestCover = params.FurthestCover;
}


// Function FindCover.FindCover_C.GetOtherCoverOrSelf
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACover_C*                Cover                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACover_C*                OtherCover                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFindCover_C::GetOtherCoverOrSelf(class ACover_C* Cover, class ACover_C** OtherCover)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindCover.FindCover_C.GetOtherCoverOrSelf");

	UFindCover_C_GetOtherCoverOrSelf_Params params;
	params.Cover = Cover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherCover != nullptr)
		*OtherCover = params.OtherCover;
}


// Function FindCover.FindCover_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFindCover_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindCover.FindCover_C.ReceiveExecuteAI");

	UFindCover_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FindCover.FindCover_C.ExecuteUbergraph_FindCover
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFindCover_C::ExecuteUbergraph_FindCover(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FindCover.FindCover_C.ExecuteUbergraph_FindCover");

	UFindCover_C_ExecuteUbergraph_FindCover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
