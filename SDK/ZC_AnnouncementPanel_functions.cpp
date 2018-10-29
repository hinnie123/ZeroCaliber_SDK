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

// Function AnnouncementPanel.AnnouncementPanel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnouncementPanel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnnouncementPanel.AnnouncementPanel_C.UserConstructionScript");

	AAnnouncementPanel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
