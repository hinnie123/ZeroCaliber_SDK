#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
struct UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, Parm)
	bool                                               bRequireNameOnly;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
struct UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
struct UAdvancedSteamFriendsLibrary_GetSteamGroups_Params
{
	TArray<struct FBPSteamGroupInfo>                   SteamGroups;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
struct UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, Parm)
	EBlueprintResultSwitch                             Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     GameName;                                                 // (Parm, OutParm, ZeroConstructor)
	int                                                AppId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
struct UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, Parm)
	EBlueprintAsyncResultSwitch                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ESteamAvatarSize                                   AvatarSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
struct UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
struct UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params
{
	struct FString                                     SteamID64;                                                // (ConstParm, Parm, ZeroConstructor)
	struct FBPUniqueNetId                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
struct UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params
{
	int                                                NumberOfItems;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FBPSteamWorkshopID>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
struct UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params
{
	int                                                NumberOfItems;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
struct USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPUniqueNetId                              GroupUniqueNetID;                                         // (Parm)
	class USteamRequestGroupOfficersCallbackProxy*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
struct USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPSteamWorkshopID                          WorkShopID;                                               // (Parm)
	class USteamWSRequestUGCDetailsCallbackProxy*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
