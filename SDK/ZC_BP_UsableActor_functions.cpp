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

// Function BP_UsableActor.BP_UsableActor_C.GetStaticMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMesh                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_UsableActor_C::GetStaticMeshComponent(class UStaticMeshComponent** StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UsableActor.BP_UsableActor_C.GetStaticMeshComponent");

	UBP_UsableActor_C_GetStaticMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaticMesh != nullptr)
		*StaticMesh = params.StaticMesh;
}


// Function BP_UsableActor.BP_UsableActor_C.StopFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UsableActor_C::StopFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UsableActor.BP_UsableActor_C.StopFocus");

	UBP_UsableActor_C_StopFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UsableActor.BP_UsableActor_C.StartFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UsableActor_C::StartFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UsableActor.BP_UsableActor_C.StartFocus");

	UBP_UsableActor_C_StartFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UsableActor.BP_UsableActor_C.Use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_UsableActor_C::Use(bool IsPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UsableActor.BP_UsableActor_C.Use");

	UBP_UsableActor_C_Use_Params params;
	params.IsPlayer = IsPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
