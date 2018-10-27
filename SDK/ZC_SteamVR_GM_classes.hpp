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

// BlueprintGeneratedClass SteamVR_GM.SteamVR_GM_C
// 0x0011 (0x0421 - 0x0410)
class ASteamVR_GM_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bJoined;                                                  // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SteamVR_GM.SteamVR_GM_C");
		return ptr;
	}


	void UserConstructionScript();
	void K2_PostLogin(class APlayerController** NewPlayer);
	void HandleStartingNewPlayer(class APlayerController** NewPlayer);
	void ExecuteUbergraph_SteamVR_GM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
