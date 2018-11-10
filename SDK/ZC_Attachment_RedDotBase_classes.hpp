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

// BlueprintGeneratedClass Attachment_RedDotBase.Attachment_RedDotBase_C
// 0x002F (0x09F0 - 0x09C1)
class AAttachment_RedDotBase_C : public AAttachmentBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    DMI_RedDot;                                               // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        Colors;                                                   // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ColorIndex;                                               // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SightMaterialIndex;                                       // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attachment_RedDotBase.Attachment_RedDotBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activate();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Attachment_RedDotBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
