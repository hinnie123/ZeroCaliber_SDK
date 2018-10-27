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

// Function SteamVRController.SteamVRControllerLibrary.SetTouchDPadMapping
struct USteamVRControllerLibrary_SetTouchDPadMapping_Params
{
	ESteamVRTouchDPadMapping                           NewMapping;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
