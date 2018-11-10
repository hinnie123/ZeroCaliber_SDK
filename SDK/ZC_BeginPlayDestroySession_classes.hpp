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

// BlueprintGeneratedClass BeginPlayDestroySession.BeginPlayDestroySession_C
// 0x0010 (0x0338 - 0x0328)
class ABeginPlayDestroySession_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeginPlayDestroySession.BeginPlayDestroySession_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnFailure_143742C14A54D0A71DBAC49776CF083C();
	void OnSuccess_143742C14A54D0A71DBAC49776CF083C();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BeginPlayDestroySession(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
