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

// Function DamageableInterface.DamageableInterface_C.IsAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDamageableInterface_C::IsAlive(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageableInterface.DamageableInterface_C.IsAlive");

	UDamageableInterface_C_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function DamageableInterface.DamageableInterface_C.ApplyDamageCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             IntigatedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitBoneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDamageableInterface_C::ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageableInterface.DamageableInterface_C.ApplyDamageCustom");

	UDamageableInterface_C_ApplyDamageCustom_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.IntigatedBy = IntigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitBoneName = HitBoneName;
	params.HitComponent = HitComponent;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
