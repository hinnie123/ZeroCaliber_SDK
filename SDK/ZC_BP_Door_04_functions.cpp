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

// Function BP_Door_04.BP_Door_04_C.GetStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMesh                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_Door_04_C::GetStaticMeshComponent(class UStaticMeshComponent** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_04.BP_Door_04_C.GetStaticMeshComponent");

	ABP_Door_04_C_GetStaticMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
}


// Function BP_Door_04.BP_Door_04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_04.BP_Door_04_C.UserConstructionScript");

	ABP_Door_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_04.BP_Door_04_C.Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_04_C::Use(bool IsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_04.BP_Door_04_C.Use");

	ABP_Door_04_C_Use_Params params;
	params.IsPlayer = IsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_04.BP_Door_04_C.StartFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_04_C::StartFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_04.BP_Door_04_C.StartFocus");

	ABP_Door_04_C_StartFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_04.BP_Door_04_C.StopFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Door_04_C::StopFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_04.BP_Door_04_C.StopFocus");

	ABP_Door_04_C_StopFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Door_04.BP_Door_04_C.ExecuteUbergraph_BP_Door_04
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Door_04_C::ExecuteUbergraph_BP_Door_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Door_04.BP_Door_04_C.ExecuteUbergraph_BP_Door_04");

	ABP_Door_04_C_ExecuteUbergraph_BP_Door_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
