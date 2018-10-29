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

// Enum AdvancedSessions.EBPOnlinePresenceState
enum class EBPOnlinePresenceState : uint8_t
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	EBPOnlinePresenceState_MAX     = 6
};


// Enum AdvancedSessions.EBPUserPrivileges
enum class EBPUserPrivileges : uint8_t
{
	CanPlay                        = 0,
	CanPlayOnline                  = 1,
	CanCommunicateOnline           = 2,
	CanUseUserGeneratedContent     = 3,
	EBPUserPrivileges_MAX          = 4
};


// Enum AdvancedSessions.EOnlineComparisonOpRedux
enum class EOnlineComparisonOpRedux : uint8_t
{
	Equals                         = 0,
	NotEquals                      = 1,
	GreaterThan                    = 2,
	GreaterThanEquals              = 3,
	LessThan                       = 4,
	LessThanEquals                 = 5,
	EOnlineComparisonOpRedux_MAX   = 6
};


// Enum AdvancedSessions.EBPOnlineSessionState
enum class EBPOnlineSessionState : uint8_t
{
	NoSession                      = 0,
	Creating                       = 1,
	Pending                        = 2,
	Starting                       = 3,
	InProgress                     = 4,
	Ending                         = 5,
	Ended                          = 6,
	Destroying                     = 7,
	EBPOnlineSessionState_MAX      = 8
};


// Enum AdvancedSessions.EBPServerPresenceSearchType
enum class EBPServerPresenceSearchType : uint8_t
{
	AllServers                     = 0,
	ClientServersOnly              = 1,
	DedicatedServersOnly           = 2,
	EBPServerPresenceSearchType_MAX = 3
};


// Enum AdvancedSessions.EBlueprintAsyncResultSwitch
enum class EBlueprintAsyncResultSwitch : uint8_t
{
	OnSuccess                      = 0,
	AsyncLoading                   = 1,
	OnFailure                      = 2,
	EBlueprintAsyncResultSwitch_MAX = 3
};


// Enum AdvancedSessions.EBlueprintResultSwitch
enum class EBlueprintResultSwitch : uint8_t
{
	OnSuccess                      = 0,
	OnFailure                      = 1,
	EBlueprintResultSwitch_MAX     = 2
};


// Enum AdvancedSessions.ESessionSettingSearchResult
enum class ESessionSettingSearchResult : uint8_t
{
	Found                          = 0,
	NotFound                       = 1,
	WrongType                      = 2,
	ESessionSettingSearchResult_MAX = 3
};


// Enum AdvancedSessions.EBPLoginStatus
enum class EBPLoginStatus : uint8_t
{
	NotLoggedIn                    = 0,
	UsingLocalProfile              = 1,
	LoggedIn                       = 2,
	EBPLoginStatus_MAX             = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdvancedSessions.BPUniqueNetId
// 0x0020
struct FBPUniqueNetId
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AdvancedSessions.BPOnlineUser
// 0x0040
struct FBPOnlineUser
{
	struct FBPUniqueNetId                              UniqueNetId;                                              // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
// 0x0010 (0x0050 - 0x0040)
struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
	struct FString                                     LastSeen;                                                 // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
// 0x0018
struct FBPFriendPresenceInfo
{
	bool                                               bIsOnline;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayingThisGame;                                       // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsJoinable;                                              // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasVoiceSupport;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBPOnlinePresenceState                             PresenceState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     StatusString;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AdvancedSessions.BPFriendInfo
// 0x0068
struct FBPFriendInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EBPOnlinePresenceState                             OnlineState;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FBPUniqueNetId                              UniqueNetId;                                              // 0x0028(0x0020) (Edit, BlueprintVisible)
	bool                                               bIsPlayingSameGame;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FBPFriendPresenceInfo                       PresenceInfo;                                             // 0x0050(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct AdvancedSessions.BPUserOnlineAccount
// 0x0010
struct FBPUserOnlineAccount
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
// 0x0020
struct FSessionPropertyKeyPair
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AdvancedSessions.SessionsSearchSetting
// 0x0028
struct FSessionsSearchSetting
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
