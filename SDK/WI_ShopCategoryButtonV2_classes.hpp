#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ShopCategoryButtonV2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ShopCategoryButtonV2.WI_ShopCategoryButtonV2_C
// 0x0090 (0x0370 - 0x02E0)
class UWI_ShopCategoryButtonV2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Pressed;                                           // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BorderBackgroundFrame;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ButtonMain;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_39;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxMain;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextCategory;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDescription;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Category;                                          // 0x0330(0x0010)(Edit, BlueprintVisible)
	class FText                                   Description;                                       // 0x0340(0x0010)(Edit, BlueprintVisible)
	EShopItemCategory                             ShopCategory;                                      // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_Pressed;                                        // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CurrentlyActive;                                   // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentlyHovered;                                  // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Anim_Selected();
	void BndEvt__WI_ShopCategoryButtonV2_ButtonMain_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WI_ShopCategoryButtonV2_ButtonMain_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WI_ShopCategoryButtonV2_ButtonMain_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WI_ShopCategoryButtonV2(int32 EntryPoint);
	void On_Pressed__DelegateSignature(class UWI_ShopCategoryButtonV2_C* Button);
	void PreConstruct(bool IsDesignTime);
	void SetButtonColorFromCategory();
	void SetHoveredCosmetics(bool Hovered_0);
	void SetSelectedCosmetics(bool Selected_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ShopCategoryButtonV2_C">();
	}
	static class UWI_ShopCategoryButtonV2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ShopCategoryButtonV2_C>();
	}
};
static_assert(alignof(UWI_ShopCategoryButtonV2_C) == 0x000008, "Wrong alignment on UWI_ShopCategoryButtonV2_C");
static_assert(sizeof(UWI_ShopCategoryButtonV2_C) == 0x000370, "Wrong size on UWI_ShopCategoryButtonV2_C");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_ShopCategoryButtonV2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, Selected) == 0x0002E8, "Member 'UWI_ShopCategoryButtonV2_C::Selected' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, Hovered) == 0x0002F0, "Member 'UWI_ShopCategoryButtonV2_C::Hovered' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, Pressed) == 0x0002F8, "Member 'UWI_ShopCategoryButtonV2_C::Pressed' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, BorderBackgroundFrame) == 0x000300, "Member 'UWI_ShopCategoryButtonV2_C::BorderBackgroundFrame' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, ButtonMain) == 0x000308, "Member 'UWI_ShopCategoryButtonV2_C::ButtonMain' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, Image_39) == 0x000310, "Member 'UWI_ShopCategoryButtonV2_C::Image_39' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, SizeBoxMain) == 0x000318, "Member 'UWI_ShopCategoryButtonV2_C::SizeBoxMain' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, TextCategory) == 0x000320, "Member 'UWI_ShopCategoryButtonV2_C::TextCategory' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, TextDescription) == 0x000328, "Member 'UWI_ShopCategoryButtonV2_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, Category) == 0x000330, "Member 'UWI_ShopCategoryButtonV2_C::Category' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, Description) == 0x000340, "Member 'UWI_ShopCategoryButtonV2_C::Description' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, ShopCategory) == 0x000350, "Member 'UWI_ShopCategoryButtonV2_C::ShopCategory' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, On_Pressed) == 0x000358, "Member 'UWI_ShopCategoryButtonV2_C::On_Pressed' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, CurrentlyActive) == 0x000368, "Member 'UWI_ShopCategoryButtonV2_C::CurrentlyActive' has a wrong offset!");
static_assert(offsetof(UWI_ShopCategoryButtonV2_C, CurrentlyHovered) == 0x000369, "Member 'UWI_ShopCategoryButtonV2_C::CurrentlyHovered' has a wrong offset!");

}

