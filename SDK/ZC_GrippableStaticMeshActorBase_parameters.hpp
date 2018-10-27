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

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.SetCollisionResponse
struct AGrippableStaticMeshActorBase_C_SetCollisionResponse_Params
{
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.AttachHandSecondary
struct AGrippableStaticMeshActorBase_C_AttachHandSecondary_Params
{
	class UGripMotionControllerComponent*              GripMotionController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.AttachHandPrimary
struct AGrippableStaticMeshActorBase_C_AttachHandPrimary_Params
{
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.IsLocallyControlled
struct AGrippableStaticMeshActorBase_C_IsLocallyControlled_Params
{
	bool                                               LocallyControlled;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.RumbleController
struct AGrippableStaticMeshActorBase_C_RumbleController_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.CancelDisappearTimer
struct AGrippableStaticMeshActorBase_C_CancelDisappearTimer_Params
{
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.SetDisappearTimer
struct AGrippableStaticMeshActorBase_C_SetDisappearTimer_Params
{
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.UserConstructionScript
struct AGrippableStaticMeshActorBase_C_UserConstructionScript_Params
{
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveTick
struct AGrippableStaticMeshActorBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnGripRelease
struct AGrippableStaticMeshActorBase_C_OnGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Disappear
struct AGrippableStaticMeshActorBase_C_Disappear_Params
{
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnGrip
struct AGrippableStaticMeshActorBase_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveHit
struct AGrippableStaticMeshActorBase_C_ReceiveHit_Params
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

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Hover
struct AGrippableStaticMeshActorBase_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>                            InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.Unhover
struct AGrippableStaticMeshActorBase_C_Unhover_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnSecondaryGrip
struct AGrippableStaticMeshActorBase_C_OnSecondaryGrip_Params
{
	class USceneComponent**                            SecondaryGripComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.OnSecondaryGripRelease
struct AGrippableStaticMeshActorBase_C_OnSecondaryGripRelease_Params
{
	class USceneComponent**                            ReleasingSecondaryGripComponent;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ReceiveBeginPlay
struct AGrippableStaticMeshActorBase_C_ReceiveBeginPlay_Params
{
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.ExecuteUbergraph_GrippableStaticMeshActorBase
struct AGrippableStaticMeshActorBase_C_ExecuteUbergraph_GrippableStaticMeshActorBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.PickedUp__DelegateSignature
struct AGrippableStaticMeshActorBase_C_PickedUp__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
