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

// Function BP_SmartGlass.BP_SmartGlass_C.GetStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMesh                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SmartGlass_C::GetStaticMeshComponent(class UStaticMeshComponent** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartGlass.BP_SmartGlass_C.GetStaticMeshComponent");

	ABP_SmartGlass_C_GetStaticMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
}


// Function BP_SmartGlass.BP_SmartGlass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartGlass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartGlass.BP_SmartGlass_C.UserConstructionScript");

	ABP_SmartGlass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartGlass.BP_SmartGlass_C.Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartGlass_C::Use(bool IsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartGlass.BP_SmartGlass_C.Use");

	ABP_SmartGlass_C_Use_Params params;
	params.IsPlayer = IsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartGlass.BP_SmartGlass_C.StartFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartGlass_C::StartFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartGlass.BP_SmartGlass_C.StartFocus");

	ABP_SmartGlass_C_StartFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartGlass.BP_SmartGlass_C.StopFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmartGlass_C::StopFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartGlass.BP_SmartGlass_C.StopFocus");

	ABP_SmartGlass_C_StopFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SmartGlass.BP_SmartGlass_C.ExecuteUbergraph_BP_SmartGlass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmartGlass_C::ExecuteUbergraph_BP_SmartGlass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmartGlass.BP_SmartGlass_C.ExecuteUbergraph_BP_SmartGlass");

	ABP_SmartGlass_C_ExecuteUbergraph_BP_SmartGlass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
