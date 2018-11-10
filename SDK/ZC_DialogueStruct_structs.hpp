#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DialogueStruct.DialogueStruct
// 0x0044
struct FDialogueStruct
{
	class USoundBase*                                  Sound_4_135B8CB04A287F1D20AFBDA7246D0F1C;                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SoundKey_15_83DCD8804B8062CA0158C28CCF9A1F2C;             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Subtitle_6_196967BA4302D938DE070986954B816F;              // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                Color_8_F604B6BF4EA960ED77B8249C5D2E3F60;                 // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DelayBeforePlay_12_D437FC0C4650DE77827C6EAE7988C164;      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
