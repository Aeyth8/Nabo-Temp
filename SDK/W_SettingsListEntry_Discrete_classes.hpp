#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingsListEntry_Discrete

#include "Basic.hpp"

#include "GameSettings_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C
// 0x0030 (0x0398 - 0x0368)
class UW_SettingsListEntry_Discrete_C final : public UGameSettingListEntrySetting_Discrete
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UW_LyraMenuButton_C*                    Button_FirstOption;                                // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_LyraMenuButton_C*                    Button_SecondOption;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               EntryHeightSB;                                     // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        OptionsSets;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_W_SettingsListEntry_Discrete(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SettingsListEntry_Discrete_C">();
	}
	static class UW_SettingsListEntry_Discrete_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SettingsListEntry_Discrete_C>();
	}
};
static_assert(alignof(UW_SettingsListEntry_Discrete_C) == 0x000008, "Wrong alignment on UW_SettingsListEntry_Discrete_C");
static_assert(sizeof(UW_SettingsListEntry_Discrete_C) == 0x000398, "Wrong size on UW_SettingsListEntry_Discrete_C");
static_assert(offsetof(UW_SettingsListEntry_Discrete_C, UberGraphFrame) == 0x000368, "Member 'UW_SettingsListEntry_Discrete_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SettingsListEntry_Discrete_C, OnHover) == 0x000370, "Member 'UW_SettingsListEntry_Discrete_C::OnHover' has a wrong offset!");
static_assert(offsetof(UW_SettingsListEntry_Discrete_C, Button_FirstOption) == 0x000378, "Member 'UW_SettingsListEntry_Discrete_C::Button_FirstOption' has a wrong offset!");
static_assert(offsetof(UW_SettingsListEntry_Discrete_C, Button_SecondOption) == 0x000380, "Member 'UW_SettingsListEntry_Discrete_C::Button_SecondOption' has a wrong offset!");
static_assert(offsetof(UW_SettingsListEntry_Discrete_C, EntryHeightSB) == 0x000388, "Member 'UW_SettingsListEntry_Discrete_C::EntryHeightSB' has a wrong offset!");
static_assert(offsetof(UW_SettingsListEntry_Discrete_C, OptionsSets) == 0x000390, "Member 'UW_SettingsListEntry_Discrete_C::OptionsSets' has a wrong offset!");

}

