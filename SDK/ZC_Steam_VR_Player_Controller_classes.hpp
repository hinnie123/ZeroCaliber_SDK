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

// BlueprintGeneratedClass Steam_VR_Player_Controller.Steam_VR_Player_Controller_C
// 0x0010 (0x0698 - 0x0688)
class ASteam_VR_Player_Controller_C : public AVRPlayerControllerCustom
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0688(0x0008) (Transient, DuplicateTransient)
	bool                                               HMDEnabled;                                               // 0x0690(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	float                                              DelayTimeForCheckingTracking;                             // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Steam_VR_Player_Controller.Steam_VR_Player_Controller_C");
		return ptr;
	}


	void OffsetSpawnByCapsuleHalfHeight(class APlayerStart* PlayerStart, const struct FVector& OffsetVector, struct FVector* OffsetVectorFinal);
	void InitiateHMD();
	void UserConstructionScript();
	void InitHMD(bool bHasHMD);
	void ReturnHMDStatus(bool bHMDEnabled, const struct FVector& HMDOffset, const struct FRotator& HMDRotation);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Steam_VR_Player_Controller(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
