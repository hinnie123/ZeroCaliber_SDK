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

// Function DeathWidgetActor_SinglePlayer.DeathWidgetActor_SinglePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathWidgetActor_SinglePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidgetActor_SinglePlayer.DeathWidgetActor_SinglePlayer_C.UserConstructionScript");

	ADeathWidgetActor_SinglePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
