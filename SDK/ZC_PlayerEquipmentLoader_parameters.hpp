#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.SpawnAttachment
struct APlayerEquipmentLoader_C_SpawnAttachment_Params
{
	class UClass*                                      Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase_C*                               Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            NewAttachment;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.SpawnWeaponWithAttachments
struct APlayerEquipmentLoader_C_SpawnWeaponWithAttachments_Params
{
	struct FWeaponStateDataStruct2                     WeaponStateData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActivateAttachments;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponBase_C*                               WeaponActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.UserConstructionScript
struct APlayerEquipmentLoader_C_UserConstructionScript_Params
{
};

// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.LoadPlayerEquipment
struct APlayerEquipmentLoader_C_LoadPlayerEquipment_Params
{
	class APlayerPawnCharacter_C*                      PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerEquipmentStruct                      PlayerEquipmentStruct;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerEquipmentLoader.PlayerEquipmentLoader_C.ExecuteUbergraph_PlayerEquipmentLoader
struct APlayerEquipmentLoader_C_ExecuteUbergraph_PlayerEquipmentLoader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
