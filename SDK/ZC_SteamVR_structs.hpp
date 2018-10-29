#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SteamVR.ESteamVRTrackedDeviceType
enum class ESteamVRTrackedDeviceType : uint8_t
{
	Controller                     = 0,
	TrackingReference              = 1,
	Other                          = 2,
	Invalid                        = 3,
	ESteamVRTrackedDeviceType_MAX  = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
