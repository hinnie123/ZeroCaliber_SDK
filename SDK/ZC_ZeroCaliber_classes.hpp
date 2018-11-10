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

// Class ZeroCaliber.VRCharacterCustomPerception
// 0x0010 (0x0820 - 0x0810)
class AVRCharacterCustomPerception : public AVRCharacter
{
public:
	class USkeletalMeshComponent*                      BodySkeletalMesh;                                         // 0x0810(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0818(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ZeroCaliber.VRCharacterCustomPerception");
		return ptr;
	}

};


// Class ZeroCaliber.VRPlayerControllerCustom
// 0x0000 (0x0688 - 0x0688)
class AVRPlayerControllerCustom : public AVRPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ZeroCaliber.VRPlayerControllerCustom");
		return ptr;
	}


	void StopVoiceChat();
	void StartVoiceChat();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
