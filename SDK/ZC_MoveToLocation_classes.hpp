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

// BlueprintGeneratedClass MoveToLocation.MoveToLocation_C
// 0x006D (0x010D - 0x00A0)
class UMoveToLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BlackboardKeyMoveLocation;                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlackboardKeyTargetReached;                               // 0x00D0(0x0028) (Edit, BlueprintVisible)
	TArray<struct FVector>                             PathPoints;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PathPointsIndex;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitForLocationReached;                                   // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MoveToLocation.MoveToLocation_C");
		return ptr;
	}


	void OnFail_9409B361407A9FA8D5C28C812DED37A6(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_9409B361407A9FA8D5C28C812DED37A6(TEnumAsByte<EPathFollowingResult> MovementResult);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_MoveToLocation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
