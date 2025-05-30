#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPCommonSetting_SingleChoice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPCommonSetting_SingleChoice.WI_JPCommonSetting_SingleChoice_C
// 0x0040 (0x0388 - 0x0348)
class UWI_JPCommonSetting_SingleChoice_C final : public UJPSettingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       TextTitle;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_JPSelector_C*                       WI_JPSelector;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_JPSettingsEntryOneLiner_C*          WI_JPSettingsEntryOneLiner;                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           Options;                                           // 0x0368(0x0010)(Edit, BlueprintVisible)
	int32                                         Value;                                             // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Even;                                           // 0x037C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37D[0x3];                                      // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 TextStyleOverwrite;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WI_JPCommonSetting_SingleChoice_WI_JPSelector_K2Node_ComponentBoundEvent_0_OnSelectedIndexChanged__DelegateSignature(int32 SelectedIndex);
	void Construct();
	void ExecuteUbergraph_WI_JPCommonSetting_SingleChoice(int32 EntryPoint);
	void GetValue(int32* SelectedIndex);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void SetTextStyle();
	void SetValue(int32 InIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPCommonSetting_SingleChoice_C">();
	}
	static class UWI_JPCommonSetting_SingleChoice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPCommonSetting_SingleChoice_C>();
	}
};
static_assert(alignof(UWI_JPCommonSetting_SingleChoice_C) == 0x000008, "Wrong alignment on UWI_JPCommonSetting_SingleChoice_C");
static_assert(sizeof(UWI_JPCommonSetting_SingleChoice_C) == 0x000388, "Wrong size on UWI_JPCommonSetting_SingleChoice_C");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, UberGraphFrame) == 0x000348, "Member 'UWI_JPCommonSetting_SingleChoice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, TextTitle) == 0x000350, "Member 'UWI_JPCommonSetting_SingleChoice_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, WI_JPSelector) == 0x000358, "Member 'UWI_JPCommonSetting_SingleChoice_C::WI_JPSelector' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, WI_JPSettingsEntryOneLiner) == 0x000360, "Member 'UWI_JPCommonSetting_SingleChoice_C::WI_JPSettingsEntryOneLiner' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, Options) == 0x000368, "Member 'UWI_JPCommonSetting_SingleChoice_C::Options' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, Value) == 0x000378, "Member 'UWI_JPCommonSetting_SingleChoice_C::Value' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, Is_Even) == 0x00037C, "Member 'UWI_JPCommonSetting_SingleChoice_C::Is_Even' has a wrong offset!");
static_assert(offsetof(UWI_JPCommonSetting_SingleChoice_C, TextStyleOverwrite) == 0x000380, "Member 'UWI_JPCommonSetting_SingleChoice_C::TextStyleOverwrite' has a wrong offset!");

}

