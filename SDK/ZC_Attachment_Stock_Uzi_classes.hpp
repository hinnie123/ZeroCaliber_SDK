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

// BlueprintGeneratedClass Attachment_Stock_Uzi.Attachment_Stock_Uzi_C
// 0x0010 (0x0A90 - 0x0A80)
class AAttachment_Stock_Uzi_C : public AAttachment_StockBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StockMeshEnd;                                             // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attachment_Stock_Uzi.Attachment_Stock_Uzi_C");
		return ptr;
	}


	void UserConstructionScript();
	void LerpStockMesh(float* Alpha);
	void ExecuteUbergraph_Attachment_Stock_Uzi(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
