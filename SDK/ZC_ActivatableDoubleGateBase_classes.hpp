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

// BlueprintGeneratedClass ActivatableDoubleGateBase.ActivatableDoubleGateBase_C
// 0x011F (0x04F8 - 0x03D9)
class AActivatableDoubleGateBase_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        GateRightMesh;                                            // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GateLeftMesh;                                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_47EAD8F141603891D9797AB4FE5F3077;   // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_47EAD8F141603891D9797AB4FE5F3077;   // 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SoundOpen;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransformLeftOpen;                                // 0x0410(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RelativeTransformLeftClose;                               // 0x0440(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RelativeTransformRightOpen;                               // 0x0470(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RelativeTransformRightClose;                              // 0x04A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x04D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ActivatableDoubleGateBase.ActivatableDoubleGateBase_C.SoundOpenFMOD

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableDoubleGateBase.ActivatableDoubleGateBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void AnimateGates(const struct FTransform& StartTransformLeft, const struct FTransform& EndTransformLeft, const struct FTransform& StartTransformRight, const struct FTransform& EndTransformRight, class USoundBase* Sound, bool Reverse);
	void Deactivated();
	void Activated();
	void LoadState();
	void ExecuteUbergraph_ActivatableDoubleGateBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
