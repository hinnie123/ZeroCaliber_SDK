#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary");
		return ptr;
	}


	bool STATIC_RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);
	struct FString STATIC_GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
	void STATIC_GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
	void STATIC_GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, struct FString* GameName, int* AppId);
	class UTexture2D* STATIC_GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, ESteamAvatarSize AvatarSize, EBlueprintAsyncResultSwitch* Result);
	int STATIC_GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
	struct FBPUniqueNetId STATIC_CreateSteamIDFromString(const struct FString& SteamID64);
};


// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// 0x0000 (0x0028 - 0x0028)
class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary");
		return ptr;
	}


	TArray<struct FBPSteamWorkshopID> STATIC_GetSubscribedWorkshopItems(int* NumberOfItems);
	void STATIC_GetNumSubscribedWorkshopItems(int* NumberOfItems);
};


// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy");
		return ptr;
	}


	class USteamRequestGroupOfficersCallbackProxy* STATIC_GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);
};


// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy");
		return ptr;
	}


	class USteamWSRequestUGCDetailsCallbackProxy* STATIC_GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
