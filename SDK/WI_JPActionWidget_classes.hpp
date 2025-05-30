#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPActionWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "JP_classes.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPActionWidget.WI_JPActionWidget_C
// 0x01C0 (0x04A0 - 0x02E0)
class UWI_JPActionWidget_C final : public UJPActionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ActionIcon;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ActionText;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputAction*                           InputAction;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   PreviewActionText;                                 // 0x0310(0x0010)(Edit, BlueprintVisible)
	struct FSlateBrush                            PreviewActionIcon;                                 // 0x0320(0x00D0)(Edit, BlueprintVisible)
	bool                                          PreviewActionShowIcon;                             // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F1[0x3];                                      // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            TextColor;                                         // 0x03F4(0x0014)(Edit, BlueprintVisible)
	struct FLinearColor                           TextShadowColor;                                   // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TextShadowOffset;                                  // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextTransformPolicy                          TextTransformationPolicy;                          // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretch                                      ScaleBoxStretchMode;                               // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretchDirection                             ScaleBoxStretchDirection;                          // 0x042A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableSizeBoxWidthOverride;                        // 0x042B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SizeBoxWidthOverride;                              // 0x042C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableSizeBoxHeightOverride;                       // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x3];                                      // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SizeBoxHeightOverride;                             // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         Font;                                              // 0x0438(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WI_JPActionWidget(int32 EntryPoint);
	void HandleInputMethodChanged(ECommonInputType bNewInputType);
	void PreConstruct(bool IsDesignTime);
	void SetActionIconFromSlateBrush(const struct FSlateBrush& SlateBrush);
	void SetActionIconFromTexture2D(class UTexture2D* Texture2D);
	void SetInputAction(class UInputAction* InputAction_0);
	void SetShowActionIconState(const struct FSlateBrush& SlateBrush);
	void SetShowActionTextState(const class FText& InText);
	void SetWidgetVisibility(class UWidget* Widget, bool Visible);
	void UpdateActionIconAndText();
	void UpdateActionIconAndTextDesignerPreview();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPActionWidget_C">();
	}
	static class UWI_JPActionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPActionWidget_C>();
	}
};
static_assert(alignof(UWI_JPActionWidget_C) == 0x000010, "Wrong alignment on UWI_JPActionWidget_C");
static_assert(sizeof(UWI_JPActionWidget_C) == 0x0004A0, "Wrong size on UWI_JPActionWidget_C");
static_assert(offsetof(UWI_JPActionWidget_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_JPActionWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, ActionIcon) == 0x0002E8, "Member 'UWI_JPActionWidget_C::ActionIcon' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, ActionText) == 0x0002F0, "Member 'UWI_JPActionWidget_C::ActionText' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, ScaleBox) == 0x0002F8, "Member 'UWI_JPActionWidget_C::ScaleBox' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, SizeBox) == 0x000300, "Member 'UWI_JPActionWidget_C::SizeBox' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, InputAction) == 0x000308, "Member 'UWI_JPActionWidget_C::InputAction' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, PreviewActionText) == 0x000310, "Member 'UWI_JPActionWidget_C::PreviewActionText' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, PreviewActionIcon) == 0x000320, "Member 'UWI_JPActionWidget_C::PreviewActionIcon' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, PreviewActionShowIcon) == 0x0003F0, "Member 'UWI_JPActionWidget_C::PreviewActionShowIcon' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, TextColor) == 0x0003F4, "Member 'UWI_JPActionWidget_C::TextColor' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, TextShadowColor) == 0x000408, "Member 'UWI_JPActionWidget_C::TextShadowColor' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, TextShadowOffset) == 0x000418, "Member 'UWI_JPActionWidget_C::TextShadowOffset' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, TextTransformationPolicy) == 0x000428, "Member 'UWI_JPActionWidget_C::TextTransformationPolicy' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, ScaleBoxStretchMode) == 0x000429, "Member 'UWI_JPActionWidget_C::ScaleBoxStretchMode' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, ScaleBoxStretchDirection) == 0x00042A, "Member 'UWI_JPActionWidget_C::ScaleBoxStretchDirection' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, EnableSizeBoxWidthOverride) == 0x00042B, "Member 'UWI_JPActionWidget_C::EnableSizeBoxWidthOverride' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, SizeBoxWidthOverride) == 0x00042C, "Member 'UWI_JPActionWidget_C::SizeBoxWidthOverride' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, EnableSizeBoxHeightOverride) == 0x000430, "Member 'UWI_JPActionWidget_C::EnableSizeBoxHeightOverride' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, SizeBoxHeightOverride) == 0x000434, "Member 'UWI_JPActionWidget_C::SizeBoxHeightOverride' has a wrong offset!");
static_assert(offsetof(UWI_JPActionWidget_C, Font) == 0x000438, "Member 'UWI_JPActionWidget_C::Font' has a wrong offset!");

}

