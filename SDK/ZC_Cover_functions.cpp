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

// Function Cover.Cover_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACover_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cover.Cover_C.UserConstructionScript");

	ACover_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
