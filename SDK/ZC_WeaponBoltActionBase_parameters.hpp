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

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.TransformBoltMeshes
struct AWeaponBoltActionBase_C_TransformBoltMeshes_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.UserConstructionScript
struct AWeaponBoltActionBase_C_UserConstructionScript_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.SetCockingPositions
struct AWeaponBoltActionBase_C_SetCockingPositions_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.Hover
struct AWeaponBoltActionBase_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>*                           InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.Unhover
struct AWeaponBoltActionBase_C_Unhover_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.FireGunLocal
struct AWeaponBoltActionBase_C_FireGunLocal_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.HandleCocking
struct AWeaponBoltActionBase_C_HandleCocking_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.SpawnCartridgeCase
struct AWeaponBoltActionBase_C_SpawnCartridgeCase_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.AmmoFired
struct AWeaponBoltActionBase_C_AmmoFired_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.FireCocking
struct AWeaponBoltActionBase_C_FireCocking_Params
{
};

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.ExecuteUbergraph_WeaponBoltActionBase
struct AWeaponBoltActionBase_C_ExecuteUbergraph_WeaponBoltActionBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
