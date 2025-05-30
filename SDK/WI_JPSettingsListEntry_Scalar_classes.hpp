#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPSettingsListEntry_Scalar

#include "Basic.hpp"

#include "GameSettings_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPSettingsListEntry_Scalar.WI_JPSettingsListEntry_Scalar_C
// 0x0030 (0x0390 - 0x0360)
class UWI_JPSettingsListEntry_Scalar_C final : public UGameSettingListEntrySetting_Scalar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWI_CommonSettingsArrowButton_C*        Button_Decrease;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_CommonSettingsArrowButton_C*        Button_Increase;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressBar;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_JPSettingsEntryOneLiner_C*          WI_JPSettingsEntryOneLiner;                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Add_Normalized_Value_Clamped(double NormalizedValue);
	void BndEvt__WI_JPSettingsListEntry_Scalar_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WI_JPSettingsListEntry_Scalar_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WI_JPSettingsListEntry_Scalar(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnDefaultValueChanged(float DefaultValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnValueChanged(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPSettingsListEntry_Scalar_C">();
	}
	static class UWI_JPSettingsListEntry_Scalar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPSettingsListEntry_Scalar_C>();
	}
};
static_assert(alignof(UWI_JPSettingsListEntry_Scalar_C) == 0x000008, "Wrong alignment on UWI_JPSettingsListEntry_Scalar_C");
static_assert(sizeof(UWI_JPSettingsListEntry_Scalar_C) == 0x000390, "Wrong size on UWI_JPSettingsListEntry_Scalar_C");
static_assert(offsetof(UWI_JPSettingsListEntry_Scalar_C, UberGraphFrame) == 0x000360, "Member 'UWI_JPSettingsListEntry_Scalar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_Scalar_C, OnHover) == 0x000368, "Member 'UWI_JPSettingsListEntry_Scalar_C::OnHover' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_Scalar_C, Button_Decrease) == 0x000370, "Member 'UWI_JPSettingsListEntry_Scalar_C::Button_Decrease' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_Scalar_C, Button_Increase) == 0x000378, "Member 'UWI_JPSettingsListEntry_Scalar_C::Button_Increase' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_Scalar_C, ProgressBar) == 0x000380, "Member 'UWI_JPSettingsListEntry_Scalar_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_Scalar_C, WI_JPSettingsEntryOneLiner) == 0x000388, "Member 'UWI_JPSettingsListEntry_Scalar_C::WI_JPSettingsEntryOneLiner' has a wrong offset!");

}

