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

// BlueprintGeneratedClass ActivatableSound.ActivatableSound_C
// 0x0027 (0x0400 - 0x03D9)
class AActivatableSound_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UFMODAudioComponent*                         FMODAudio;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFMODAudioComponent*                         VoiceOverFMOD;                                            // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableSound.ActivatableSound_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activated();
	void Deactivated();
	void BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature();
	void ExecuteUbergraph_ActivatableSound(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
