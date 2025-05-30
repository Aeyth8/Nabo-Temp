#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_HorizontalComboBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_HorizontalComboBox.WB_HorizontalComboBox_C
// 0x00C0 (0x03A0 - 0x02E0)
class UWB_HorizontalComboBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Left;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Right;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Base;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Base;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, class FText>                Options;                                           // 0x0308(0x0050)(Edit, BlueprintVisible)
	class FName                                   SelectedOption;                                    // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoopOptions;                                      // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_361[0x3];                                      // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedIndex;                                     // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        Height;                                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Width;                                             // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           OptionsKeys;                                       // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          MarkSettingsAsChanged;                             // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cooldown;                                          // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddOption(class FName NewOptionKey, const class FText& NewOption);
	void BndEvt__WB_HorizontalComboBox_Button_Left_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WB_HorizontalComboBox_Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void ClearOptions();
	void Construct();
	void ExecuteUbergraph_WB_HorizontalComboBox(int32 EntryPoint);
	void OnSelectionChanged__DelegateSignature(class FName NewSelection);
	void PreConstruct(bool IsDesignTime);
	void Reset_Do_Once();
	void SetSelectedOption(class FName NewSelection, bool bTriggerDelegate);
	void Update();

	void GetSelectedIndex(int32* Index_0) const;
	void GetSelectedOption(class FName* Option) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_HorizontalComboBox_C">();
	}
	static class UWB_HorizontalComboBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_HorizontalComboBox_C>();
	}
};
static_assert(alignof(UWB_HorizontalComboBox_C) == 0x000008, "Wrong alignment on UWB_HorizontalComboBox_C");
static_assert(sizeof(UWB_HorizontalComboBox_C) == 0x0003A0, "Wrong size on UWB_HorizontalComboBox_C");
static_assert(offsetof(UWB_HorizontalComboBox_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_HorizontalComboBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, Button_Left) == 0x0002E8, "Member 'UWB_HorizontalComboBox_C::Button_Left' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, Button_Right) == 0x0002F0, "Member 'UWB_HorizontalComboBox_C::Button_Right' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, SizeBox_Base) == 0x0002F8, "Member 'UWB_HorizontalComboBox_C::SizeBox_Base' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, TextBlock_Base) == 0x000300, "Member 'UWB_HorizontalComboBox_C::TextBlock_Base' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, Options) == 0x000308, "Member 'UWB_HorizontalComboBox_C::Options' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, SelectedOption) == 0x000358, "Member 'UWB_HorizontalComboBox_C::SelectedOption' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, bLoopOptions) == 0x000360, "Member 'UWB_HorizontalComboBox_C::bLoopOptions' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, SelectedIndex) == 0x000364, "Member 'UWB_HorizontalComboBox_C::SelectedIndex' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, OnSelectionChanged) == 0x000368, "Member 'UWB_HorizontalComboBox_C::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, Height) == 0x000378, "Member 'UWB_HorizontalComboBox_C::Height' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, Width) == 0x000380, "Member 'UWB_HorizontalComboBox_C::Width' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, OptionsKeys) == 0x000388, "Member 'UWB_HorizontalComboBox_C::OptionsKeys' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, MarkSettingsAsChanged) == 0x000398, "Member 'UWB_HorizontalComboBox_C::MarkSettingsAsChanged' has a wrong offset!");
static_assert(offsetof(UWB_HorizontalComboBox_C, Cooldown) == 0x000399, "Member 'UWB_HorizontalComboBox_C::Cooldown' has a wrong offset!");

}

