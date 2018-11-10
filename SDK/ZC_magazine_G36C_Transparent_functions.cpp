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

// Function magazine_G36C_Transparent.magazine_G36C_Transparent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amagazine_G36C_Transparent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function magazine_G36C_Transparent.magazine_G36C_Transparent_C.UserConstructionScript");

	Amagazine_G36C_Transparent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function magazine_G36C_Transparent.magazine_G36C_Transparent_C.ReduceAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)

void Amagazine_G36C_Transparent_C::ReduceAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function magazine_G36C_Transparent.magazine_G36C_Transparent_C.ReduceAmmoCount");

	Amagazine_G36C_Transparent_C_ReduceAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function magazine_G36C_Transparent.magazine_G36C_Transparent_C.ExecuteUbergraph_magazine_G36C_Transparent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amagazine_G36C_Transparent_C::ExecuteUbergraph_magazine_G36C_Transparent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function magazine_G36C_Transparent.magazine_G36C_Transparent_C.ExecuteUbergraph_magazine_G36C_Transparent");

	Amagazine_G36C_Transparent_C_ExecuteUbergraph_magazine_G36C_Transparent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
