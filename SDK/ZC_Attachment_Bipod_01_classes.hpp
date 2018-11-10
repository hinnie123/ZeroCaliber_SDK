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

// BlueprintGeneratedClass Attachment_Bipod_01.Attachment_Bipod_01_C
// 0x0027 (0x09E8 - 0x09C1)
class AAttachment_Bipod_01_C : public AAttachmentBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        Bipod_01_Bipod_01_Leg_Bottom_Right;                       // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bipod_01_Bipod_01_Leg_Bottom_Left;                        // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bipod_01_Bipod_01_Leg_TopRight;                           // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bipod_01_Bipod_01_Leg_TopLeft;                            // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attachment_Bipod_01.Attachment_Bipod_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
