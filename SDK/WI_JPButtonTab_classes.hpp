#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPButtonTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPButtonTab.WI_JPButtonTab_C
// 0x0040 (0x1610 - 0x15D0)
class UWI_JPButtonTab_C final : public ULyraTabButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x15D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x15E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ButtonPlaceholder;                                 // 0x15E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ButtonTextBlock;                                   // 0x15F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_NewIcon_C*                          WI_NewIcon;                                        // 0x15F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowNewIcon;                                       // 0x1600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_WI_JPButtonTab(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Show_New_Icon(bool Show_New_Icon);
	void UpdateButtonText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPButtonTab_C">();
	}
	static class UWI_JPButtonTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPButtonTab_C>();
	}
};
static_assert(alignof(UWI_JPButtonTab_C) == 0x000010, "Wrong alignment on UWI_JPButtonTab_C");
static_assert(sizeof(UWI_JPButtonTab_C) == 0x001610, "Wrong size on UWI_JPButtonTab_C");
static_assert(offsetof(UWI_JPButtonTab_C, UberGraphFrame) == 0x0015D0, "Member 'UWI_JPButtonTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_JPButtonTab_C, Hovered) == 0x0015D8, "Member 'UWI_JPButtonTab_C::Hovered' has a wrong offset!");
static_assert(offsetof(UWI_JPButtonTab_C, Selected) == 0x0015E0, "Member 'UWI_JPButtonTab_C::Selected' has a wrong offset!");
static_assert(offsetof(UWI_JPButtonTab_C, ButtonPlaceholder) == 0x0015E8, "Member 'UWI_JPButtonTab_C::ButtonPlaceholder' has a wrong offset!");
static_assert(offsetof(UWI_JPButtonTab_C, ButtonTextBlock) == 0x0015F0, "Member 'UWI_JPButtonTab_C::ButtonTextBlock' has a wrong offset!");
static_assert(offsetof(UWI_JPButtonTab_C, WI_NewIcon) == 0x0015F8, "Member 'UWI_JPButtonTab_C::WI_NewIcon' has a wrong offset!");
static_assert(offsetof(UWI_JPButtonTab_C, ShowNewIcon) == 0x001600, "Member 'UWI_JPButtonTab_C::ShowNewIcon' has a wrong offset!");

}

