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

// Function LevelData.LevelData_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALevelData_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelData.LevelData_C.UserConstructionScript");

	ALevelData_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelData.LevelData_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALevelData_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelData.LevelData_C.ReceiveBeginPlay");

	ALevelData_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelData.LevelData_C.ExecuteUbergraph_LevelData
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelData_C::ExecuteUbergraph_LevelData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelData.LevelData_C.ExecuteUbergraph_LevelData");

	ALevelData_C_ExecuteUbergraph_LevelData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelData.LevelData_C.Initialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelData_C::Initialized__DelegateSignature(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelData.LevelData_C.Initialized__DelegateSignature");

	ALevelData_C_Initialized__DelegateSignature_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
