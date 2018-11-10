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

// BlueprintGeneratedClass ActivatableBase.ActivatableBase_C
// 0x00B1 (0x03D9 - 0x0328)
class AActivatableBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EActivatableState>                     State;                                                    // 0x0340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSameStateChangeEnabled;                                 // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	TArray<class AActivatableBase_C*>                  Deactivators;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               AllDeactivatorsNeeded;                                    // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<bool>                                       DeactivationsGot;                                         // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxDeactivationCount;                                     // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentDeactivationCount;                                 // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActivatableBase_C*>                  Activators;                                               // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               AllActivatorsNeeded;                                      // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TArray<bool>                                       ActivationsGot;                                           // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ActivatedEventDispatcher;                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DeactivatedEventDispatcher;                               // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MaxActivationCount;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentActivationCount;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EActivatableState>                     StartState;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              Delay;                                                    // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActivatableSend>                      SendOnActivation;                                         // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActivatableSend>                      SendOnDeactivation;                                       // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	float                                              InitTime;                                                 // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitTimePassed;                                           // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableBase.ActivatableBase_C");
		return ptr;
	}


	void LoadState();
	void OnRep_State();
	void DrawArrowFromToActor(class AActor* FromActor, class AActor* ToActor, const struct FVector& ScaleMultiplier, const struct FLinearColor& ArrowColor);
	void AllDeactivationsGot(bool* AllActivatorsActivated);
	void AllActivationsGot(bool* AllActivatorsActivated);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HandleActivatedEventDispatcher(class AActivatableBase_C* Activator);
	void Activate();
	void Deactivate();
	void HandleDeactivatedEventDispatcher(class AActivatableBase_C* Activator);
	void Activated();
	void Deactivated();
	void CallActivatedEvent();
	void CallDeactivatedEvent();
	void ExecuteUbergraph_ActivatableBase(int EntryPoint);
	void DeactivatedEventDispatcher__DelegateSignature(class AActivatableBase_C* Activator);
	void ActivatedEventDispatcher__DelegateSignature(class AActivatableBase_C* Activator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
