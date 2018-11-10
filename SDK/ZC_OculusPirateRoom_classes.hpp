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

// BlueprintGeneratedClass OculusPirateRoom.OculusPirateRoom_C
// 0x0019 (0x0341 - 0x0328)
class AOculusPirateRoom_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsOculusBuild;                                            // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OculusPirateRoom.OculusPirateRoom_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnFailure_2DC541EF4027990F810BE0BE71A8AC5A();
	void OnSuccess_2DC541EF4027990F810BE0BE71A8AC5A();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_OculusPirateRoom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
