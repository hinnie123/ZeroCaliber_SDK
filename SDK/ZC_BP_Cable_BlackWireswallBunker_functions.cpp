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

// Function BP_Cable_BlackWireswallBunker.BP_Cable_BlackWireswallBunker_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Cable_BlackWireswallBunker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cable_BlackWireswallBunker.BP_Cable_BlackWireswallBunker_C.UserConstructionScript");

	ABP_Cable_BlackWireswallBunker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
