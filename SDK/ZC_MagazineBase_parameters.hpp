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

// Function MagazineBase.MagazineBase_C.KickOutMagazine
struct AMagazineBase_C_KickOutMagazine_Params
{
	class AActor*                                      InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagazineBase.MagazineBase_C.CanBeDetached
struct AMagazineBase_C_CanBeDetached_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Detachable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MagazineBase.MagazineBase_C.GetAmmoCount
struct AMagazineBase_C_GetAmmoCount_Params
{
	int                                                AmmoCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MagazineBase.MagazineBase_C.ReduceAmmoCount
struct AMagazineBase_C_ReduceAmmoCount_Params
{
};

// Function MagazineBase.MagazineBase_C.GetCurrentOffset
struct AMagazineBase_C_GetCurrentOffset_Params
{
	struct FTransform                                  CurrentOffset;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function MagazineBase.MagazineBase_C.UserConstructionScript
struct AMagazineBase_C_UserConstructionScript_Params
{
};

// Function MagazineBase.MagazineBase_C.SetDisappearTimer
struct AMagazineBase_C_SetDisappearTimer_Params
{
};

// Function MagazineBase.MagazineBase_C.ReceiveHit
struct AMagazineBase_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MagazineBase.MagazineBase_C.ExecuteUbergraph_MagazineBase
struct AMagazineBase_C_ExecuteUbergraph_MagazineBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
