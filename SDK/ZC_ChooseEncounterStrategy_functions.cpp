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

// Function ChooseEncounterStrategy.ChooseEncounterStrategy_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChooseEncounterStrategy_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseEncounterStrategy.ChooseEncounterStrategy_C.ReceiveExecuteAI");

	UChooseEncounterStrategy_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseEncounterStrategy.ChooseEncounterStrategy_C.ExecuteUbergraph_ChooseEncounterStrategy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChooseEncounterStrategy_C::ExecuteUbergraph_ChooseEncounterStrategy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseEncounterStrategy.ChooseEncounterStrategy_C.ExecuteUbergraph_ChooseEncounterStrategy");

	UChooseEncounterStrategy_C_ExecuteUbergraph_ChooseEncounterStrategy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
