#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_LyraMenuButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "JP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_LyraMenuButton.W_LyraMenuButton_C
// 0x02B0 (0x1870 - 0x15C0)
class UW_LyraMenuButton_C : public ULyraButtonBase
{
public:
	uint8                                         Pad_15B8[0x8];                                     // 0x15B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnPressed;                                         // 0x15C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHovered;                                         // 0x15D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USpacer*                                AnimBoundSpacer_Left;                              // 0x15D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                AnimBoundSpacer_Right;                             // 0x15E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ButtonBorder;                                      // 0x15E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ButtonTextBlock;                                   // 0x15F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x15F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x1600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               IconOvr;                                           // 0x1608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ring;                                              // 0x1610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TextIconSwitch;                                    // 0x1618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextOvr;                                           // 0x1620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextShadow;                                        // 0x1628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        TextLeftRightPadding;                              // 0x1630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitTestPadding_X;                                  // 0x1638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        HitTestPadding_Y;                                  // 0x1640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PressProgress;                                     // 0x1648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         Font;                                              // 0x1650(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateBrush                            ButtonBorderBrush;                                 // 0x16B0(0x00D0)(Edit, BlueprintVisible)
	struct FSlateBrush                            IconBrush;                                         // 0x1780(0x00D0)(Edit, BlueprintVisible)
	ETextTransformPolicy                          TextCase;                                          // 0x1850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlipIconXDimension;                                // 0x1851(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDisabled;                                        // 0x1852(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseImageOverlays;                                  // 0x1853(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseScaleChangeSpacers;                             // 0x1854(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseIconOverride;                                   // 0x1855(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          InputHorzAlignment;                                // 0x1856(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            InputVertAlignment;                                // 0x1857(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                InputPadding;                                      // 0x1858(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void BP_OnClicked();
	void BP_OnDeselected();
	void BP_OnDisabled();
	void BP_OnEnabled();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_W_LyraMenuButton(int32 EntryPoint);
	void Finished_D61E6B2E4C7C79D1B4BCF29E8E3B3418();
	void GetPressProgress(double* Progress);
	void PreConstruct(bool IsDesignTime);
	void ResetMaterials();
	void UpdateButtonStyles();
	void UpdateButtonText(const class FText& InText);
	void UpdateTextStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_LyraMenuButton_C">();
	}
	static class UW_LyraMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_LyraMenuButton_C>();
	}
};
static_assert(alignof(UW_LyraMenuButton_C) == 0x000010, "Wrong alignment on UW_LyraMenuButton_C");
static_assert(sizeof(UW_LyraMenuButton_C) == 0x001870, "Wrong size on UW_LyraMenuButton_C");
static_assert(offsetof(UW_LyraMenuButton_C, UberGraphFrame) == 0x0015C0, "Member 'UW_LyraMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, OnPressed) == 0x0015C8, "Member 'UW_LyraMenuButton_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, OnHovered) == 0x0015D0, "Member 'UW_LyraMenuButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, AnimBoundSpacer_Left) == 0x0015D8, "Member 'UW_LyraMenuButton_C::AnimBoundSpacer_Left' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, AnimBoundSpacer_Right) == 0x0015E0, "Member 'UW_LyraMenuButton_C::AnimBoundSpacer_Right' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, ButtonBorder) == 0x0015E8, "Member 'UW_LyraMenuButton_C::ButtonBorder' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, ButtonTextBlock) == 0x0015F0, "Member 'UW_LyraMenuButton_C::ButtonTextBlock' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, Glow) == 0x0015F8, "Member 'UW_LyraMenuButton_C::Glow' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, Icon) == 0x001600, "Member 'UW_LyraMenuButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, IconOvr) == 0x001608, "Member 'UW_LyraMenuButton_C::IconOvr' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, Ring) == 0x001610, "Member 'UW_LyraMenuButton_C::Ring' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, TextIconSwitch) == 0x001618, "Member 'UW_LyraMenuButton_C::TextIconSwitch' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, TextOvr) == 0x001620, "Member 'UW_LyraMenuButton_C::TextOvr' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, TextShadow) == 0x001628, "Member 'UW_LyraMenuButton_C::TextShadow' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, TextLeftRightPadding) == 0x001630, "Member 'UW_LyraMenuButton_C::TextLeftRightPadding' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, HitTestPadding_X) == 0x001638, "Member 'UW_LyraMenuButton_C::HitTestPadding_X' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, HitTestPadding_Y) == 0x001640, "Member 'UW_LyraMenuButton_C::HitTestPadding_Y' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, PressProgress) == 0x001648, "Member 'UW_LyraMenuButton_C::PressProgress' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, Font) == 0x001650, "Member 'UW_LyraMenuButton_C::Font' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, ButtonBorderBrush) == 0x0016B0, "Member 'UW_LyraMenuButton_C::ButtonBorderBrush' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, IconBrush) == 0x001780, "Member 'UW_LyraMenuButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, TextCase) == 0x001850, "Member 'UW_LyraMenuButton_C::TextCase' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, FlipIconXDimension) == 0x001851, "Member 'UW_LyraMenuButton_C::FlipIconXDimension' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, IsDisabled) == 0x001852, "Member 'UW_LyraMenuButton_C::IsDisabled' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, UseImageOverlays) == 0x001853, "Member 'UW_LyraMenuButton_C::UseImageOverlays' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, UseScaleChangeSpacers) == 0x001854, "Member 'UW_LyraMenuButton_C::UseScaleChangeSpacers' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, UseIconOverride) == 0x001855, "Member 'UW_LyraMenuButton_C::UseIconOverride' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, InputHorzAlignment) == 0x001856, "Member 'UW_LyraMenuButton_C::InputHorzAlignment' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, InputVertAlignment) == 0x001857, "Member 'UW_LyraMenuButton_C::InputVertAlignment' has a wrong offset!");
static_assert(offsetof(UW_LyraMenuButton_C, InputPadding) == 0x001858, "Member 'UW_LyraMenuButton_C::InputPadding' has a wrong offset!");

}

