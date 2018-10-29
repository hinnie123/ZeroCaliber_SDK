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

// Function Bipod_Decor.Bipod_Decor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABipod_Decor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bipod_Decor.Bipod_Decor_C.UserConstructionScript");

	ABipod_Decor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
