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

// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.SpawnAttachment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponBase_C*           Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAttachableStaticMeshActorBase_C* NewAttachment                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerEquipmentLoader_C::SpawnAttachment(class UClass* Attachment, const struct FName& SocketName, class AWeaponBase_C* Weapon, class AActor* Owner, class AAttachableStaticMeshActorBase_C** NewAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.SpawnAttachment");

	APlayerEquipmentLoader_C_SpawnAttachment_Params params;
	params.Attachment = Attachment;
	params.SocketName = SocketName;
	params.Weapon = Weapon;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewAttachment != nullptr)
		*NewAttachment = params.NewAttachment;
}


// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.SpawnWeaponWithAttachments
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponStateDataStruct2 WeaponStateData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ActivateAttachments            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponBase_C*           WeaponActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerEquipmentLoader_C::SpawnWeaponWithAttachments(const struct FWeaponStateDataStruct2& WeaponStateData, class USceneComponent* Target, class AActor* Owner, bool ActivateAttachments, EControllerHand Hand, class AWeaponBase_C** WeaponActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.SpawnWeaponWithAttachments");

	APlayerEquipmentLoader_C_SpawnWeaponWithAttachments_Params params;
	params.WeaponStateData = WeaponStateData;
	params.Target = Target;
	params.Owner = Owner;
	params.ActivateAttachments = ActivateAttachments;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponActor != nullptr)
		*WeaponActor = params.WeaponActor;
}


// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerEquipmentLoader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.UserConstructionScript");

	APlayerEquipmentLoader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.LoadPlayerEquipment
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawnCharacter_C*  PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerEquipmentStruct  PlayerEquipmentStruct          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APlayerEquipmentLoader_C::LoadPlayerEquipment(class APlayerPawnCharacter_C* PlayerPawn, const struct FPlayerEquipmentStruct& PlayerEquipmentStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.LoadPlayerEquipment");

	APlayerEquipmentLoader_C_LoadPlayerEquipment_Params params;
	params.PlayerPawn = PlayerPawn;
	params.PlayerEquipmentStruct = PlayerEquipmentStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.ExecuteUbergraph_PlayerEquipmentLoader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerEquipmentLoader_C::ExecuteUbergraph_PlayerEquipmentLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.ExecuteUbergraph_PlayerEquipmentLoader");

	APlayerEquipmentLoader_C_ExecuteUbergraph_PlayerEquipmentLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
