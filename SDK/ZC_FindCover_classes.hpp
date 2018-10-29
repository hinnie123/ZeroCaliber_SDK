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

// BlueprintGeneratedClass FindCover.FindCover_C
// 0x0068 (0x0108 - 0x00A0)
class UFindCover_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	float                                              NearestDistance;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class ACover_C*                                    NearestCover;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      BlackboardKeyMoveLocation;                                // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      BlackboardKeyCurrentTarget;                               // 0x00E0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FindCover.FindCover_C");
		return ptr;
	}


	void GetFurthestCaverFromSensedPawn(class ACover_C* Cover1, class ACover_C* Cover2, class ACover_C** FurthestCover);
	void GetOtherCoverOrSelf(class ACover_C* Cover, class ACover_C** OtherCover);
	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_FindCover(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
