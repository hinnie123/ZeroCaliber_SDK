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

// Function Attachment_StockBase.Attachment_StockBase_C.ClosestGripSlotInRange
struct AAttachment_StockBase_C_ClosestGripSlotInRange_Params
{
	struct FVector*                                    WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              bSecondarySlot;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHadSlotInRange;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SlotWorldTransform;                                       // (Parm, OutParm, IsPlainOldData)
	class UGripMotionControllerComponent**             CallingController;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      OverridePrefix;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.ResetRecoilValues
struct AAttachment_StockBase_C_ResetRecoilValues_Params
{
	bool                                               ToInitial;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.LerpStockMesh
struct AAttachment_StockBase_C_LerpStockMesh_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.HandleStocking
struct AAttachment_StockBase_C_HandleStocking_Params
{
};

// Function Attachment_StockBase.Attachment_StockBase_C.UserConstructionScript
struct AAttachment_StockBase_C_UserConstructionScript_Params
{
};

// Function Attachment_StockBase.Attachment_StockBase_C.ReceiveBeginPlay
struct AAttachment_StockBase_C_ReceiveBeginPlay_Params
{
};

// Function Attachment_StockBase.Attachment_StockBase_C.ReceiveTick
struct AAttachment_StockBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.OnChildGrip
struct AAttachment_StockBase_C_OnChildGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Attachment_StockBase.Attachment_StockBase_C.OnChildGripRelease
struct AAttachment_StockBase_C_OnChildGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.Attached
struct AAttachment_StockBase_C_Attached_Params
{
	bool*                                              WeaponInHand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.Released
struct AAttachment_StockBase_C_Released_Params
{
};

// Function Attachment_StockBase.Attachment_StockBase_C.Hover
struct AAttachment_StockBase_C_Hover_Params
{
	TEnumAsByte<EHoverEnum>*                           InteractType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.Unhover
struct AAttachment_StockBase_C_Unhover_Params
{
	class UPrimitiveComponent**                        Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.ModifyCollisionWhenBlocked
struct AAttachment_StockBase_C_ModifyCollisionWhenBlocked_Params
{
	bool*                                              ShouldCollide;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.ExecuteUbergraph_Attachment_StockBase
struct AAttachment_StockBase_C_ExecuteUbergraph_Attachment_StockBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Attachment_StockBase.Attachment_StockBase_C.UnStocked__DelegateSignature
struct AAttachment_StockBase_C_UnStocked__DelegateSignature_Params
{
};

// Function Attachment_StockBase.Attachment_StockBase_C.Stocked__DelegateSignature
struct AAttachment_StockBase_C_Stocked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
