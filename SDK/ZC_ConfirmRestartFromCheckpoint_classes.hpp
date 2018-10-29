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

// WidgetBlueprintGeneratedClass ConfirmRestartFromCheckpoint.ConfirmRestartFromCheckpoint_C
// 0x0010 (0x0248 - 0x0238)
class UConfirmRestartFromCheckpoint_C : public UMenuBaseWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class UConfirmQuestionWidget_C*                    ConfirmQuestionWidget;                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmRestartFromCheckpoint.ConfirmRestartFromCheckpoint_C");
		return ptr;
	}


	void BndEvt__ConfirmQuestionWidget_K2Node_ComponentBoundEvent_0_OkButtonReleased__DelegateSignature();
	void BndEvt__ConfirmQuestionWidget_K2Node_ComponentBoundEvent_4_CancelButtonReleased__DelegateSignature();
	void ExecuteUbergraph_ConfirmRestartFromCheckpoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
