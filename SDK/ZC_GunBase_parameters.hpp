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

// Function GunBase.GunBase_C.RequestsSocketing
struct AGunBase_C_RequestsSocketing_Params
{
	class USceneComponent*                             ParentToSocketTo;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       OptionalSocketName;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform_NetQuantize                      RelativeTransform;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GunBase.GunBase_C.UserConstructionScript
struct AGunBase_C_UserConstructionScript_Params
{
};

// Function GunBase.GunBase_C.OnUsed
struct AGunBase_C_OnUsed_Params
{
};

// Function GunBase.GunBase_C.OnSecondaryUsed
struct AGunBase_C_OnSecondaryUsed_Params
{
};

// Function GunBase.GunBase_C.OnEndSecondaryUsed
struct AGunBase_C_OnEndSecondaryUsed_Params
{
};

// Function GunBase.GunBase_C.FireGun
struct AGunBase_C_FireGun_Params
{
};

// Function GunBase.GunBase_C.EndFireGun
struct AGunBase_C_EndFireGun_Params
{
};

// Function GunBase.GunBase_C.FireGunServer
struct AGunBase_C_FireGunServer_Params
{
};

// Function GunBase.GunBase_C.EndFireGunServer
struct AGunBase_C_EndFireGunServer_Params
{
};

// Function GunBase.GunBase_C.OnGrip
struct AGunBase_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GunBase.GunBase_C.OnGripRelease
struct AGunBase_C_OnGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GunBase.GunBase_C.FireGunLocal
struct AGunBase_C_FireGunLocal_Params
{
};

// Function GunBase.GunBase_C.EndFireGunLocal
struct AGunBase_C_EndFireGunLocal_Params
{
};

// Function GunBase.GunBase_C.FireBullet
struct AGunBase_C_FireBullet_Params
{
};

// Function GunBase.GunBase_C.ReceiveTick
struct AGunBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GunBase.GunBase_C.ReceiveBeginPlay
struct AGunBase_C_ReceiveBeginPlay_Params
{
};

// Function GunBase.GunBase_C.OnEndUsed
struct AGunBase_C_OnEndUsed_Params
{
};

// Function GunBase.GunBase_C.ExecuteUbergraph_GunBase
struct AGunBase_C_ExecuteUbergraph_GunBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
