#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.GetWeaponData
struct APlayerEquipmentSaver_C_GetWeaponData_Params
{
	class AWeaponBase_C*                               Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponStateDataStruct2                     WeaponStateData;                                          // (Parm, OutParm)
};

// Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.GetAndSavePlayerEquipment
struct APlayerEquipmentSaver_C_GetAndSavePlayerEquipment_Params
{
};

// Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.UserConstructionScript
struct APlayerEquipmentSaver_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
