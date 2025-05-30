#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingsBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_SettingsData_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SettingsBar.W_SettingsBar_C
// 0x0058 (0x0338 - 0x02E0)
class UW_SettingsBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           ProgressBar_Settings;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Setting;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Setting;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FS_SettingsData                        SettingsData;                                      // 0x0308(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	double                                        ActualValue;                                       // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Slider_Setting_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_W_SettingsBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetSliderValue(double Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SettingsBar_C">();
	}
	static class UW_SettingsBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SettingsBar_C>();
	}
};
static_assert(alignof(UW_SettingsBar_C) == 0x000008, "Wrong alignment on UW_SettingsBar_C");
static_assert(sizeof(UW_SettingsBar_C) == 0x000338, "Wrong size on UW_SettingsBar_C");
static_assert(offsetof(UW_SettingsBar_C, UberGraphFrame) == 0x0002E0, "Member 'UW_SettingsBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SettingsBar_C, ProgressBar_Settings) == 0x0002E8, "Member 'UW_SettingsBar_C::ProgressBar_Settings' has a wrong offset!");
static_assert(offsetof(UW_SettingsBar_C, Slider_Setting) == 0x0002F0, "Member 'UW_SettingsBar_C::Slider_Setting' has a wrong offset!");
static_assert(offsetof(UW_SettingsBar_C, TextBlock_Name) == 0x0002F8, "Member 'UW_SettingsBar_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UW_SettingsBar_C, TextBlock_Setting) == 0x000300, "Member 'UW_SettingsBar_C::TextBlock_Setting' has a wrong offset!");
static_assert(offsetof(UW_SettingsBar_C, SettingsData) == 0x000308, "Member 'UW_SettingsBar_C::SettingsData' has a wrong offset!");
static_assert(offsetof(UW_SettingsBar_C, ActualValue) == 0x000330, "Member 'UW_SettingsBar_C::ActualValue' has a wrong offset!");

}

