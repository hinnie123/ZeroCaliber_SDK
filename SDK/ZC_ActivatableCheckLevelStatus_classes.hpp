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

// BlueprintGeneratedClass ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C
// 0x0027 (0x0400 - 0x03D9)
class AActivatableCheckLevelStatus_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       LevelName;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ECampaignStatusEnum>>           LevelStatus;                                              // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activated();
	void ExecuteUbergraph_ActivatableCheckLevelStatus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
