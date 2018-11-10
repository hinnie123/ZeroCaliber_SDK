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

// Function Attachment_Stock_SPAS12.Attachment_Stock_SPAS12_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_Stock_SPAS12_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Stock_SPAS12.Attachment_Stock_SPAS12_C.UserConstructionScript");

	AAttachment_Stock_SPAS12_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Stock_SPAS12.Attachment_Stock_SPAS12_C.LerpStockMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Stock_SPAS12_C::LerpStockMesh(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Stock_SPAS12.Attachment_Stock_SPAS12_C.LerpStockMesh");

	AAttachment_Stock_SPAS12_C_LerpStockMesh_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Attachment_Stock_SPAS12.Attachment_Stock_SPAS12_C.ExecuteUbergraph_Attachment_Stock_SPAS12
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAttachment_Stock_SPAS12_C::ExecuteUbergraph_Attachment_Stock_SPAS12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Stock_SPAS12.Attachment_Stock_SPAS12_C.ExecuteUbergraph_Attachment_Stock_SPAS12");

	AAttachment_Stock_SPAS12_C_ExecuteUbergraph_Attachment_Stock_SPAS12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
