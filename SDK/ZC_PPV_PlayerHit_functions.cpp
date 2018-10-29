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

// Function PPV_PlayerHit.PPV_PlayerHit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APPV_PlayerHit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PPV_PlayerHit.PPV_PlayerHit_C.UserConstructionScript");

	APPV_PlayerHit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
