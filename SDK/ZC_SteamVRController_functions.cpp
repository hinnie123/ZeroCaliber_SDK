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

// Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ESteamVRTouchDPadMapping       NewMapping                     (Parm, ZeroConstructor, IsPlainOldData)

void USteamVRControllerLibrary::STATIC_SetTouchDPadMapping(ESteamVRTouchDPadMapping NewMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping");

	USteamVRControllerLibrary_SetTouchDPadMapping_Params params;
	params.NewMapping = NewMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
