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

// Function Attachment_Bipod_01.Attachment_Bipod_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAttachment_Bipod_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Attachment_Bipod_01.Attachment_Bipod_01_C.UserConstructionScript");

	AAttachment_Bipod_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
