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

// BlueprintGeneratedClass BattleChatterProbably.BattleChatterProbably_C
// 0x0030 (0x00D0 - 0x00A0)
class UBattleChatterProbably_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	TArray<class USoundBase*>                          BattleChatterSound;                                       // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Probability;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EnemyBattleChatter>>            BattleChatters;                                           // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BattleChatterProbably.BattleChatterProbably_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BattleChatterProbably(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
