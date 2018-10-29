// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttachmentBase.AttachmentBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachmentBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentBase.AttachmentBase_C.UserConstructionScript");

	AAttachmentBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachmentBase.AttachmentBase_C.OnGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAttachmentBase_C::OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentBase.AttachmentBase_C.OnGrip");

	AAttachmentBase_C_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachmentBase.AttachmentBase_C.Disappear
// (BlueprintCallable, BlueprintEvent)

void AAttachmentBase_C::Disappear()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentBase.AttachmentBase_C.Disappear");

	AAttachmentBase_C_Disappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachmentBase.AttachmentBase_C.OnGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentBase_C::OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentBase.AttachmentBase_C.OnGripRelease");

	AAttachmentBase_C_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachmentBase.AttachmentBase_C.ExecuteUbergraph_AttachmentBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachmentBase_C::ExecuteUbergraph_AttachmentBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentBase.AttachmentBase_C.ExecuteUbergraph_AttachmentBase");

	AAttachmentBase_C_ExecuteUbergraph_AttachmentBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
