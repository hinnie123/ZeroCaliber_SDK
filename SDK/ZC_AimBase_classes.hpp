#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AimBase.AimBase_C
// 0x010A (0x01AA - 0x00A0)
class UAimBase_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      BlackboardKeyCurrentTarget;                               // 0x00A8(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      SensedActor;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AEnemyCharacterBase_C*                       EnemyCharacterBase;                                       // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      BlackboardKeyEnemySenseState;                             // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlackboardKeySensedActors;                                // 0x0108(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlackboardKeyAiming;                                      // 0x0130(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlackboardKeyMoveLocation;                                // 0x0158(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlackboardKeyTargetReached;                               // 0x0180(0x0028) (Edit, BlueprintVisible)
	bool                                               IsEnemyCharacter;                                         // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSensedActor;                                            // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AimBase.AimBase_C");
		return ptr;
	}


	void GetNearestActor(class AActor* ControlledPawn, TArray<class AActor*>* Actors, class AActor** NearestActor);
	void GetTargetLocation(struct FVector* TargetLocation);
	void CurrentTargetIsInvalid();
	void PerceiveEnemyEvent(class APawn* ControlledPawn);
	void ExecuteUbergraph_AimBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
