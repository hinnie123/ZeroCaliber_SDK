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

// Function ZeroCaliber.VRPlayerControllerCustom.StopVoiceChat
// (Final, Native, Public, BlueprintCallable)

void AVRPlayerControllerCustom::StopVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroCaliber.VRPlayerControllerCustom.StopVoiceChat");

	AVRPlayerControllerCustom_StopVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZeroCaliber.VRPlayerControllerCustom.StartVoiceChat
// (Final, Native, Public, BlueprintCallable)

void AVRPlayerControllerCustom::StartVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZeroCaliber.VRPlayerControllerCustom.StartVoiceChat");

	AVRPlayerControllerCustom_StartVoiceChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
