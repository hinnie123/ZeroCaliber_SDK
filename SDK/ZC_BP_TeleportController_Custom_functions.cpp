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

// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.AttachLaserBeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TeleportController_Custom_C::AttachLaserBeam(class USceneComponent* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.AttachLaserBeam");

	ABP_TeleportController_Custom_C_AttachLaserBeam_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UpdateLaserBeamCustom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TeleportController_Custom_C::UpdateLaserBeamCustom(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UpdateLaserBeamCustom");

	ABP_TeleportController_Custom_C_UpdateLaserBeamCustom_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TeleportController_Custom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UserConstructionScript");

	ABP_TeleportController_Custom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UpdateLaserBeam
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TeleportController_Custom_C::UpdateLaserBeam(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UpdateLaserBeam");

	ABP_TeleportController_Custom_C_UpdateLaserBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.ExecuteUbergraph_BP_TeleportController_Custom
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TeleportController_Custom_C::ExecuteUbergraph_BP_TeleportController_Custom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.ExecuteUbergraph_BP_TeleportController_Custom");

	ABP_TeleportController_Custom_C_ExecuteUbergraph_BP_TeleportController_Custom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
