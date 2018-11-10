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

// BlueprintGeneratedClass Checkpoint.Checkpoint_C
// 0x001F (0x03F8 - 0x03D9)
class ACheckpoint_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    PlayerEnteredCheckpoint;                                  // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Checkpoint.Checkpoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activated();
	void ExecuteUbergraph_Checkpoint(int EntryPoint);
	void PlayerEnteredCheckpoint__DelegateSignature(class ACheckpoint_C* Checkpoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
