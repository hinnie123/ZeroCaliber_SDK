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

// Function Explosion.Explosion_C.ImpactDecals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AExplosion_C::ImpactDecals(const struct FVector& Location, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosion.Explosion_C.ImpactDecals");

	AExplosion_C_ImpactDecals_Params params;
	params.Location = Location;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosion.Explosion_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosion.Explosion_C.UserConstructionScript");

	AExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosion.Explosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExplosion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosion.Explosion_C.ReceiveBeginPlay");

	AExplosion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Explosion.Explosion_C.ExecuteUbergraph_Explosion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExplosion_C::ExecuteUbergraph_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Explosion.Explosion_C.ExecuteUbergraph_Explosion");

	AExplosion_C_ExecuteUbergraph_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
