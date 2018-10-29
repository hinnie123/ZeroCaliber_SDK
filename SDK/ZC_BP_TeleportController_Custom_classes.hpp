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

// BlueprintGeneratedClass BP_TeleportController_Custom.BP_TeleportController_Custom_C
// 0x0017 (0x04F0 - 0x04D9)
class ABP_TeleportController_Custom_C : public ABP_Teleport_Controller_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             LaserBeamParent;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TeleportController_Custom.BP_TeleportController_Custom_C");
		return ptr;
	}


	void AttachLaserBeam(class USceneComponent* Parent);
	void UpdateLaserBeamCustom(float DeltaTime);
	void UserConstructionScript();
	void UpdateLaserBeam(float* DeltaTime);
	void ExecuteUbergraph_BP_TeleportController_Custom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
