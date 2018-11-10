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

// Function Magazine_Colt_Python.Magazine_Colt_Python_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMagazine_Colt_Python_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Colt_Python.Magazine_Colt_Python_C.UserConstructionScript");

	AMagazine_Colt_Python_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Colt_Python.Magazine_Colt_Python_C.Attached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WeaponInHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Colt_Python_C::Attached(bool* WeaponInHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Colt_Python.Magazine_Colt_Python_C.Attached");

	AMagazine_Colt_Python_C_Attached_Params params;
	params.WeaponInHand = WeaponInHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Magazine_Colt_Python.Magazine_Colt_Python_C.ExecuteUbergraph_Magazine_Colt_Python
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMagazine_Colt_Python_C::ExecuteUbergraph_Magazine_Colt_Python(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Magazine_Colt_Python.Magazine_Colt_Python_C.ExecuteUbergraph_Magazine_Colt_Python");

	AMagazine_Colt_Python_C_ExecuteUbergraph_Magazine_Colt_Python_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
