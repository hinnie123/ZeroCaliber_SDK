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

// Function MenuActor_GameInfo.MenuActor_GameInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMenuActor_GameInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_GameInfo.MenuActor_GameInfo_C.UserConstructionScript");

	AMenuActor_GameInfo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_GameInfo.MenuActor_GameInfo_C.ActivateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_GameInfo_C::ActivateWidget(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_GameInfo.MenuActor_GameInfo_C.ActivateWidget");

	AMenuActor_GameInfo_C_ActivateWidget_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_GameInfo.MenuActor_GameInfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMenuActor_GameInfo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_GameInfo.MenuActor_GameInfo_C.ReceiveBeginPlay");

	AMenuActor_GameInfo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor_GameInfo.MenuActor_GameInfo_C.ExecuteUbergraph_MenuActor_GameInfo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_GameInfo_C::ExecuteUbergraph_MenuActor_GameInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor_GameInfo.MenuActor_GameInfo_C.ExecuteUbergraph_MenuActor_GameInfo");

	AMenuActor_GameInfo_C_ExecuteUbergraph_MenuActor_GameInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
