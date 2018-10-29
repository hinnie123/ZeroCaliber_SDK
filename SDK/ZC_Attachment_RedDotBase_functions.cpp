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

// Function Attachment_RedDotBase.Attachment_RedDotBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_RedDotBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_RedDotBase.Attachment_RedDotBase_C.UserConstructionScript");

	AAttachment_RedDotBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_RedDotBase.Attachment_RedDotBase_C.Activate
// (BlueprintCallable, BlueprintEvent)

void AAttachment_RedDotBase_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_RedDotBase.Attachment_RedDotBase_C.Activate");

	AAttachment_RedDotBase_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_RedDotBase.Attachment_RedDotBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAttachment_RedDotBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_RedDotBase.Attachment_RedDotBase_C.ReceiveBeginPlay");

	AAttachment_RedDotBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_RedDotBase.Attachment_RedDotBase_C.ExecuteUbergraph_Attachment_RedDotBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_RedDotBase_C::ExecuteUbergraph_Attachment_RedDotBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_RedDotBase.Attachment_RedDotBase_C.ExecuteUbergraph_Attachment_RedDotBase");

	AAttachment_RedDotBase_C_ExecuteUbergraph_Attachment_RedDotBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
