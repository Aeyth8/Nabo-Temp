#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_OnScreenIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_IndicatorAnimation_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_OnScreenIndicator.WI_OnScreenIndicator_C
// 0x0030 (0x0310 - 0x02E0)
class UWI_OnScreenIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UpDown;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_64;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_172;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_105;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_DeathGrayoutWrapper_C*              WI_DeathGrayoutWrapper;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_OnScreenIndicator(int32 EntryPoint);
	void SetCustomScale(double NewScale);
	void SetImageAndText(class UTexture2D* Image, const struct FLinearColor& ImageColor, const class FText& Text, const struct FLinearColor& TextColor, bool Animate, E_IndicatorAnimation Animation);
	void SetTextShadow(const struct FLinearColor& Color, const struct FVector2D& ShadowOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_OnScreenIndicator_C">();
	}
	static class UWI_OnScreenIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_OnScreenIndicator_C>();
	}
};
static_assert(alignof(UWI_OnScreenIndicator_C) == 0x000008, "Wrong alignment on UWI_OnScreenIndicator_C");
static_assert(sizeof(UWI_OnScreenIndicator_C) == 0x000310, "Wrong size on UWI_OnScreenIndicator_C");
static_assert(offsetof(UWI_OnScreenIndicator_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_OnScreenIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_OnScreenIndicator_C, UpDown) == 0x0002E8, "Member 'UWI_OnScreenIndicator_C::UpDown' has a wrong offset!");
static_assert(offsetof(UWI_OnScreenIndicator_C, Image_64) == 0x0002F0, "Member 'UWI_OnScreenIndicator_C::Image_64' has a wrong offset!");
static_assert(offsetof(UWI_OnScreenIndicator_C, ScaleBox_172) == 0x0002F8, "Member 'UWI_OnScreenIndicator_C::ScaleBox_172' has a wrong offset!");
static_assert(offsetof(UWI_OnScreenIndicator_C, TextBlock_105) == 0x000300, "Member 'UWI_OnScreenIndicator_C::TextBlock_105' has a wrong offset!");
static_assert(offsetof(UWI_OnScreenIndicator_C, WI_DeathGrayoutWrapper) == 0x000308, "Member 'UWI_OnScreenIndicator_C::WI_DeathGrayoutWrapper' has a wrong offset!");

}

