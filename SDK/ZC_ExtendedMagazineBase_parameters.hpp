#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.GetAmmoCount
struct AExtendedMagazineBase_C_GetAmmoCount_Params
{
	int                                                AmmoCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.UserConstructionScript
struct AExtendedMagazineBase_C_UserConstructionScript_Params
{
};

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.ReceiveBeginPlay
struct AExtendedMagazineBase_C_ReceiveBeginPlay_Params
{
};

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.Released
struct AExtendedMagazineBase_C_Released_Params
{
};

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.ReduceAmmoCount
struct AExtendedMagazineBase_C_ReduceAmmoCount_Params
{
};

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.ExecuteUbergraph_ExtendedMagazineBase
struct AExtendedMagazineBase_C_ExecuteUbergraph_ExtendedMagazineBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
