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

// BlueprintGeneratedClass SaveGamePlayerEquipment.SaveGamePlayerEquipment_C
// 0x0198 (0x01C0 - 0x0028)
class USaveGamePlayerEquipment_C : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FPlayerEquipmentStruct                      PlayerEquipmentStruct;                                    // 0x0030(0x0190) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGamePlayerEquipment.SaveGamePlayerEquipment_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
