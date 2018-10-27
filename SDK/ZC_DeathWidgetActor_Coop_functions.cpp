// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeathWidgetActor_Coop.DeathWidgetActor_Coop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeathWidgetActor_Coop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidgetActor_Coop.DeathWidgetActor_Coop_C.UserConstructionScript");

	ADeathWidgetActor_Coop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidgetActor_Coop.DeathWidgetActor_Coop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADeathWidgetActor_Coop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidgetActor_Coop.DeathWidgetActor_Coop_C.ReceiveBeginPlay");

	ADeathWidgetActor_Coop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidgetActor_Coop.DeathWidgetActor_Coop_C.ExecuteUbergraph_DeathWidgetActor_Coop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADeathWidgetActor_Coop_C::ExecuteUbergraph_DeathWidgetActor_Coop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidgetActor_Coop.DeathWidgetActor_Coop_C.ExecuteUbergraph_DeathWidgetActor_Coop");

	ADeathWidgetActor_Coop_C_ExecuteUbergraph_DeathWidgetActor_Coop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
