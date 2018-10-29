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

// Function BP_Door_02.BP_Door_02_C.GetStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMesh                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Door_02_C::GetStaticMeshComponent(class UStaticMeshComponent** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.GetStaticMeshComponent");

	ABP_Door_02_C_GetStaticMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
}


// Function BP_Door_02.BP_Door_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.UserConstructionScript");

	ABP_Door_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.ToggleDoor__FinishedFunc
// (BlueprintEvent)

void ABP_Door_02_C::ToggleDoor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.ToggleDoor__FinishedFunc");

	ABP_Door_02_C_ToggleDoor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.ToggleDoor__UpdateFunc
// (BlueprintEvent)

void ABP_Door_02_C::ToggleDoor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.ToggleDoor__UpdateFunc");

	ABP_Door_02_C_ToggleDoor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.StartFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_02_C::StartFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.StartFocus");

	ABP_Door_02_C_StartFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.StopFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_02_C::StopFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.StopFocus");

	ABP_Door_02_C_StopFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_02_C::Use(bool IsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.Use");

	ABP_Door_02_C_Use_Params params;
	params.IsPlayer = IsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.AutoClose
// (BlueprintCallable, BlueprintEvent)

void ABP_Door_02_C::AutoClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.AutoClose");

	ABP_Door_02_C_AutoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Door_02_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.ReceiveBeginPlay");

	ABP_Door_02_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_02.BP_Door_02_C.ExecuteUbergraph_BP_Door_02
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_02_C::ExecuteUbergraph_BP_Door_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_02.BP_Door_02_C.ExecuteUbergraph_BP_Door_02");

	ABP_Door_02_C_ExecuteUbergraph_BP_Door_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
