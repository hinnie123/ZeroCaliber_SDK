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

// WidgetBlueprintGeneratedClass MenuBaseWidget.MenuBaseWidget_C
// 0x0030 (0x0238 - 0x0208)
class UMenuBaseWidget_C : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    MenuChangeRequest;                                        // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UObject*                                     NormalBG;                                                 // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     ActiveBG;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    CloseButtonPressed;                                       // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MenuBaseWidget.MenuBaseWidget_C");
		return ptr;
	}


	void SelectButton(class UButton* SelectedButton, TArray<class UButton*>* OtherButtons);
	void ResetButtonBackground(class UButton* Button, class UObject* Image);
	void CloseButtonPressed__DelegateSignature();
	void MenuChangeRequest__DelegateSignature(class UClass* NewMenu);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
