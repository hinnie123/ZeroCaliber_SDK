#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ProjectileStruct.ProjectileStruct
// 0x0028
struct FProjectileStruct
{
	struct FLinearColor                                Color_8_67F8DDF443A286CCC8B9AF884923FD7C;                 // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Alpha_11_3F3FB3004A3EB464C2F9D29E0A07BF62;                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime_2_916348EB41462C6F2EC12A931D838DBF;              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size_5_78D08F08432CF5C4881634BCA0E7C52A;                  // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ZigZag_15_8FD71B9B477947591AB4E5BFD562465E;               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
