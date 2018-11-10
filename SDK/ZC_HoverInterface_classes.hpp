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

// BlueprintGeneratedClass HoverInterface.HoverInterface_C
// 0x0000 (0x0028 - 0x0028)
class UHoverInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HoverInterface.HoverInterface_C");
		return ptr;
	}


	void Unhover(class UPrimitiveComponent* Component);
	void Hover(TEnumAsByte<EHoverEnum> InteractType, class USceneComponent* Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
