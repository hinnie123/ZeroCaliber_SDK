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

// WidgetBlueprintGeneratedClass LevelWidget.LevelWidget_C
// 0x0029 (0x0231 - 0x0208)
class ULevelWidget_C : public UUserWidget
{
public:
	class UImage*                                      Background;                                               // 0x0208(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                                   WidgetSize;                                               // 0x0210(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LevelName;                                                // 0x0218(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsLevelLocked;                                            // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelWidget.LevelWidget_C");
		return ptr;
	}


	void GetLocked(bool* Locked);
	void SetLocked(bool Locked);
	void SetLevelName(const struct FText& LevelName);
	void GetWidgetSize(struct FVector2D* Size);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
