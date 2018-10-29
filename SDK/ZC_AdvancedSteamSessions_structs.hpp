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

// Enum AdvancedSteamSessions.FBPWorkshopFileType
enum class EFBPWorkshopFileType : uint8_t
{
	k_EWorkshopFileTypeCommunity   = 0,
	k_EWorkshopFileTypeMicrotransaction = 1,
	k_EWorkshopFileTypeCollection  = 2,
	k_EWorkshopFileTypeArt         = 3,
	k_EWorkshopFileTypeVideo       = 4,
	k_EWorkshopFileTypeScreenshot  = 5,
	k_EWorkshopFileTypeGame        = 6,
	k_EWorkshopFileTypeSoftware    = 7,
	k_EWorkshopFileTypeConcept     = 8,
	k_EWorkshopFileTypeWebGuide    = 9,
	k_EWorkshopFileTypeIntegratedGuide = 10,
	k_EWorkshopFileTypeMerch       = 11,
	k_EWorkshopFileTypeControllerBinding = 12,
	k_EWorkshopFileTypeSteamworksAccessInvite = 13,
	k_EWorkshopFileTypeSteamVideo  = 14,
	k_EWorkshopFileTypeMax         = 15,
	k_MAX                          = 16
};


// Enum AdvancedSteamSessions.FBPSteamResult
enum class EFBPSteamResult : uint8_t
{
	k_EResultOK                    = 0,
	k_EResultFail                  = 1,
	k_EResultNoConnection          = 2,
	k_EResultInvalidPassword       = 3,
	k_EResultLoggedInElsewhere     = 4,
	k_EResultInvalidProtocolVer    = 5,
	k_EResultInvalidParam          = 6,
	k_EResultFileNotFound          = 7,
	k_EResultBusy                  = 8,
	k_EResultInvalidState          = 9,
	k_EResultInvalidName           = 10,
	k_EResultInvalidEmail          = 11,
	k_EResultDuplicateName         = 12,
	k_EResultAccessDenied          = 13,
	k_EResultTimeout               = 14,
	k_EResultBanned                = 15,
	k_EResultAccountNotFound       = 16,
	k_EResultInvalidSteamID        = 17,
	k_EResultServiceUnavailable    = 18,
	k_EResultNotLoggedOn           = 19,
	k_EResultPending               = 20,
	k_EResultEncryptionFailure     = 21,
	k_EResultInsufficientPrivilege = 22,
	k_EResultLimitExceeded         = 23,
	k_EResultRevoked               = 24,
	k_EResultExpired               = 25,
	k_EResultAlreadyRedeemed       = 26,
	k_EResultDuplicateRequest      = 27,
	k_EResultAlreadyOwned          = 28,
	k_EResultIPNotFound            = 29,
	k_EResultPersistFailed         = 30,
	k_EResultLockingFailed         = 31,
	k_EResultLogonSessionReplaced  = 32,
	k_EResultConnectFailed         = 33,
	k_EResultHandshakeFailed       = 34,
	k_EResultIOFailure             = 35,
	k_EResultRemoteDisconnect      = 36,
	k_EResultShoppingCartNotFound  = 37,
	k_EResultBlocked               = 38,
	k_EResultIgnored               = 39,
	k_EResultNoMatch               = 40,
	k_EResultAccountDisabled       = 41,
	k_EResultServiceReadOnly       = 42,
	k_EResultAccountNotFeatured    = 43,
	k_EResultAdministratorOK       = 44,
	k_EResultContentVersion        = 45,
	k_EResultTryAnotherCM          = 46,
	k_EResultPasswordRequiredToKickSession = 47,
	k_EResultAlreadyLoggedInElsewhere = 48,
	k_EResultSuspended             = 49,
	k_EResultCancelled             = 50,
	k_EResultDataCorruption        = 51,
	k_EResultDiskFull              = 52,
	k_EResultRemoteCallFailed      = 53,
	k_EResultPasswordUnset         = 54,
	k_EResultExternalAccountUnlinked = 55,
	k_EResultPSNTicketInvalid      = 56,
	k_EResultExternalAccountAlreadyLinked = 57,
	k_EResultRemoteFileConflict    = 58,
	k_EResultIllegalPassword       = 59,
	k_EResultSameAsPreviousValue   = 60,
	k_EResultAccountLogonDenied    = 61,
	k_EResultCannotUseOldPassword  = 62,
	k_EResultInvalidLoginAuthCode  = 63,
	k_EResultAccountLogonDeniedNoMail = 64,
	k_EResultHardwareNotCapableOfIPT = 65,
	k_EResultIPTInitError          = 66,
	k_EResultParentalControlRestricted = 67,
	k_EResultFacebookQueryError    = 68,
	k_EResultExpiredLoginAuthCode  = 69,
	k_EResultIPLoginRestrictionFailed = 70,
	k_EResultAccountLockedDown     = 71,
	k_EResultAccountLogonDeniedVerifiedEmailRequired = 72,
	k_EResultNoMatchingURL         = 73,
	k_EResultBadResponse           = 74,
	k_EResultRequirePasswordReEntry = 75,
	k_EResultValueOutOfRange       = 76,
	k_EResultUnexpectedError       = 77,
	k_EResultDisabled              = 78,
	k_EResultInvalidCEGSubmission  = 79,
	k_EResultRestrictedDevice      = 80,
	k_EResultRegionLocked          = 81,
	k_EResultRateLimitExceeded     = 82,
	k_EResultAccountLoginDeniedNeedTwoFactor = 83,
	k_EResultItemDeleted           = 84,
	k_EResultAccountLoginDeniedThrottle = 85,
	k_EResultTwoFactorCodeMismatch = 86,
	k_EResultTwoFactorActivationCodeMismatch = 87,
	k_EResultAccountAssociatedToMultiplePartners = 88,
	k_EResultNotModified           = 89,
	k_MAX                          = 90
};


// Enum AdvancedSteamSessions.SteamAvatarSize
enum class ESteamAvatarSize : uint8_t
{
	SteamAvatar_Small              = 0,
	SteamAvatar_Medium             = 1,
	SteamAvatar_Large              = 2,
	SteamAvatar_MAX                = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
// 0x0050
struct FBPSteamGroupInfo
{
	struct FBPUniqueNetId                              GroupID;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     GroupName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     GroupTag;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                numOnline;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                numInGame;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                numChatting;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
// 0x0008
struct FBPSteamWorkshopID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
// 0x0028
struct FBPSteamGroupOfficer
{
	struct FBPUniqueNetId                              OfficerUniqueNetID;                                       // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsOwner;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
// 0x0060
struct FBPSteamWorkshopItemDetails
{
	EFBPSteamResult                                    ResultOfRequest;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFBPWorkshopFileType                               FileType;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                CreatorAppID;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ConsumerAppID;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     Title;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemUrl;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                VotesUp;                                                  // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VotesDown;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CalculatedScore;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBanned;                                                  // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAcceptedForUse;                                          // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTagsTruncated;                                           // 0x004E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x004F(0x0001) MISSED OFFSET
	struct FString                                     CreatorSteamID;                                           // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
