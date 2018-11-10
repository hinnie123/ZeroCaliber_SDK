#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy");
		return ptr;
	}


	class UOculusCreateSessionCallbackProxy* STATIC_CreateSession(int PublicConnections, const struct FString& OculusMatchmakingPool);
};


// Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy");
		return ptr;
	}


	class UOculusEntitlementCallbackProxy* STATIC_VerifyEntitlement();
};


// Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy");
		return ptr;
	}


	class UOculusFindSessionsCallbackProxy* STATIC_FindModeratedSessions(int MaxResults);
	class UOculusFindSessionsCallbackProxy* STATIC_FindMatchmakingSessions(int MaxResults, const struct FString& OculusMatchmakingPool);
};


// Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
// 0x0030 (0x0058 - 0x0028)
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusIdentityCallbackProxy");
		return ptr;
	}


	class UOculusIdentityCallbackProxy* STATIC_GetOculusIdentity(int LocalUserNum);
};


// Class OnlineSubsystemOculus.OculusNetConnection
// 0x0010 (0x1920 - 0x1910)
class UOculusNetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x1910(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemOculus.OculusNetDriver
// 0x00B8 (0x0620 - 0x0568)
class UOculusNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0568(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy");
		return ptr;
	}


	class UOculusUpdateSessionCallbackProxy* STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
