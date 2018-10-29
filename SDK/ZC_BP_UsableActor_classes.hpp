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

// BlueprintGeneratedClass BP_UsableActor.BP_UsableActor_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UsableActor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_UsableActor.BP_UsableActor_C");
		return ptr;
	}


	void GetStaticMeshComponent(class UStaticMeshComponent** StaticMesh);
	void StopFocus();
	void StartFocus();
	void Use(bool IsPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
