#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPSettingsListEntry_SubCollection

#include "Basic.hpp"

#include "GameSettings_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPSettingsListEntry_SubCollection.WI_JPSettingsListEntry_SubCollection_C
// 0x0018 (0x0368 - 0x0350)
class UWI_JPSettingsListEntry_SubCollection_C final : public UGameSettingListEntrySetting_Navigation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWI_JPSettingsEntryOneLiner_C*          WI_JPSettingsEntryOneLiner;                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_JPSettingsListEntry_SubCollection(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnSettingAssigned(const class FText& ActionText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPSettingsListEntry_SubCollection_C">();
	}
	static class UWI_JPSettingsListEntry_SubCollection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPSettingsListEntry_SubCollection_C>();
	}
};
static_assert(alignof(UWI_JPSettingsListEntry_SubCollection_C) == 0x000008, "Wrong alignment on UWI_JPSettingsListEntry_SubCollection_C");
static_assert(sizeof(UWI_JPSettingsListEntry_SubCollection_C) == 0x000368, "Wrong size on UWI_JPSettingsListEntry_SubCollection_C");
static_assert(offsetof(UWI_JPSettingsListEntry_SubCollection_C, UberGraphFrame) == 0x000350, "Member 'UWI_JPSettingsListEntry_SubCollection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_SubCollection_C, OnHover) == 0x000358, "Member 'UWI_JPSettingsListEntry_SubCollection_C::OnHover' has a wrong offset!");
static_assert(offsetof(UWI_JPSettingsListEntry_SubCollection_C, WI_JPSettingsEntryOneLiner) == 0x000360, "Member 'UWI_JPSettingsListEntry_SubCollection_C::WI_JPSettingsEntryOneLiner' has a wrong offset!");

}

