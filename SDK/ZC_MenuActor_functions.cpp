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

// Function MenuActor.MenuActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMenuActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.UserConstructionScript");

	AMenuActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMenuActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.ReceiveBeginPlay");

	AMenuActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.MenuChangedRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewMenu                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_C::MenuChangedRequest(class UClass* NewMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.MenuChangedRequest");

	AMenuActor_C_MenuChangedRequest_Params params;
	params.NewMenu = NewMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_C::LevelDataInitialized(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.LevelDataInitialized");

	AMenuActor_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.OnCloseMenu
// (BlueprintCallable, BlueprintEvent)

void AMenuActor_C::OnCloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.OnCloseMenu");

	AMenuActor_C_OnCloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.ActivateMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_C::ActivateMenu(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.ActivateMenu");

	AMenuActor_C_ActivateMenu_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.ExecuteUbergraph_MenuActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMenuActor_C::ExecuteUbergraph_MenuActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.ExecuteUbergraph_MenuActor");

	AMenuActor_C_ExecuteUbergraph_MenuActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MenuActor.MenuActor_C.CloseMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AMenuActor_C::CloseMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MenuActor.MenuActor_C.CloseMenu__DelegateSignature");

	AMenuActor_C_CloseMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
