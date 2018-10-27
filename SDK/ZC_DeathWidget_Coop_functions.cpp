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

// Function DeathWidget_Coop.DeathWidget_Coop_C.CheckAllies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDeathWidget_Coop_C::CheckAllies()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget_Coop.DeathWidget_Coop_C.CheckAllies");

	UDeathWidget_Coop_C_CheckAllies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget_Coop.DeathWidget_Coop_C.BndEvt__BackToLobbyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UDeathWidget_Coop_C::BndEvt__BackToLobbyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget_Coop.DeathWidget_Coop_C.BndEvt__BackToLobbyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UDeathWidget_Coop_C_BndEvt__BackToLobbyButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget_Coop.DeathWidget_Coop_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDeathWidget_Coop_C::Initialize(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget_Coop.DeathWidget_Coop_C.Initialize");

	UDeathWidget_Coop_C_Initialize_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathWidget_Coop.DeathWidget_Coop_C.ExecuteUbergraph_DeathWidget_Coop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDeathWidget_Coop_C::ExecuteUbergraph_DeathWidget_Coop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathWidget_Coop.DeathWidget_Coop_C.ExecuteUbergraph_DeathWidget_Coop");

	UDeathWidget_Coop_C_ExecuteUbergraph_DeathWidget_Coop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
