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

// Function Attachment_StockBase.Attachment_StockBase_C.ClosestGripSlotInRange
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          bSecondarySlot                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent** CallingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  OverridePrefix                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::ClosestGripSlotInRange(struct FVector* WorldLocation, bool* bSecondarySlot, class UGripMotionControllerComponent** CallingController, struct FName* OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.ClosestGripSlotInRange");

	AAttachment_StockBase_C_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function Attachment_StockBase.Attachment_StockBase_C.ResetRecoilValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ToInitial                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::ResetRecoilValues(bool ToInitial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.ResetRecoilValues");

	AAttachment_StockBase_C_ResetRecoilValues_Params params;
	params.ToInitial = ToInitial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.LerpStockMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::LerpStockMesh(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.LerpStockMesh");

	AAttachment_StockBase_C_LerpStockMesh_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.HandleStocking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAttachment_StockBase_C::HandleStocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.HandleStocking");

	AAttachment_StockBase_C_HandleStocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_StockBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.UserConstructionScript");

	AAttachment_StockBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttachment_StockBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.ReceiveBeginPlay");

	AAttachment_StockBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.ReceiveTick");

	AAttachment_StockBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.OnChildGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAttachment_StockBase_C::OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.OnChildGrip");

	AAttachment_StockBase_C_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.OnChildGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::OnChildGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.OnChildGripRelease");

	AAttachment_StockBase_C_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.Attached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          WeaponInHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::Attached(bool* WeaponInHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.Attached");

	AAttachment_StockBase_C_Attached_Params params;
	params.WeaponInHand = WeaponInHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.Released
// (BlueprintCallable, BlueprintEvent)

void AAttachment_StockBase_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.Released");

	AAttachment_StockBase_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>*       InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAttachment_StockBase_C::Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.Hover");

	AAttachment_StockBase_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AAttachment_StockBase_C::Unhover(class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.Unhover");

	AAttachment_StockBase_C_Unhover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.ModifyCollisionWhenBlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldCollide                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::ModifyCollisionWhenBlocked(bool* ShouldCollide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.ModifyCollisionWhenBlocked");

	AAttachment_StockBase_C_ModifyCollisionWhenBlocked_Params params;
	params.ShouldCollide = ShouldCollide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.ExecuteUbergraph_Attachment_StockBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_StockBase_C::ExecuteUbergraph_Attachment_StockBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.ExecuteUbergraph_Attachment_StockBase");

	AAttachment_StockBase_C_ExecuteUbergraph_Attachment_StockBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.UnStocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAttachment_StockBase_C::UnStocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.UnStocked__DelegateSignature");

	AAttachment_StockBase_C_UnStocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_StockBase.Attachment_StockBase_C.Stocked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AAttachment_StockBase_C::Stocked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_StockBase.Attachment_StockBase_C.Stocked__DelegateSignature");

	AAttachment_StockBase_C_Stocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
