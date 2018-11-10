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

// Function TargetInterface.TargetInterface_C.GetTargetData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTargetData>     NewParam                       (Parm, OutParm, ZeroConstructor)

void UTargetInterface_C::GetTargetData(TArray<struct FTargetData>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInterface.TargetInterface_C.GetTargetData");

	UTargetInterface_C_GetTargetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function TargetInterface.TargetInterface_C.GetTargetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void UTargetInterface_C::GetTargetLocation(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TargetInterface.TargetInterface_C.GetTargetLocation");

	UTargetInterface_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
