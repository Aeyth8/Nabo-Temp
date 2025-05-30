#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ExperiencePanel_RewardEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ExperiencePanel_RewardEntry.WI_ExperiencePanel_RewardEntry_C
// 0x0078 (0x0358 - 0x02E0)
class UWI_ExperiencePanel_RewardEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_Shadow;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CurrencyIcon;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CurrencyIconSizeBox;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ReasonLabel;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                ValueNumericLabel;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       XPLabel;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                           CurrencyTag;                                       // 0x0320(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Reason;                                            // 0x0328(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   XPText;                                            // 0x0338(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowXPLabel;                                       // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowCurrencyLabel;                                 // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_34A[0x2];                                      // 0x034A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InitialValue;                                      // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         DesignerPreviewValue;                              // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WI_ExperiencePanel_RewardEntry(int32 EntryPoint);
	void OnLoaded_0CE021DB4F943BBC5D2FAB9A5AF142CE(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void SetCurrencyIconSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void SetCurrencySoftAsset(TSoftObjectPtr<class UOnlineCurrency> CurrencySoftAsset, bool LoadAsync);
	void SetCurrencyTag(const struct FGameplayTag& CurrencyIdentifier, bool LoadAsync);
	void SetReason(const class FText& InText);
	void SetShowCurrencyLabel(bool ShowCurrencyLabel_0);
	void SetShowXPLabel(bool ShowXPLabel_0);
	void SetXPText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ExperiencePanel_RewardEntry_C">();
	}
	static class UWI_ExperiencePanel_RewardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ExperiencePanel_RewardEntry_C>();
	}
};
static_assert(alignof(UWI_ExperiencePanel_RewardEntry_C) == 0x000008, "Wrong alignment on UWI_ExperiencePanel_RewardEntry_C");
static_assert(sizeof(UWI_ExperiencePanel_RewardEntry_C) == 0x000358, "Wrong size on UWI_ExperiencePanel_RewardEntry_C");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_ExperiencePanel_RewardEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, BG) == 0x0002E8, "Member 'UWI_ExperiencePanel_RewardEntry_C::BG' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, BG_Shadow) == 0x0002F0, "Member 'UWI_ExperiencePanel_RewardEntry_C::BG_Shadow' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, CurrencyIcon) == 0x0002F8, "Member 'UWI_ExperiencePanel_RewardEntry_C::CurrencyIcon' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, CurrencyIconSizeBox) == 0x000300, "Member 'UWI_ExperiencePanel_RewardEntry_C::CurrencyIconSizeBox' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, ReasonLabel) == 0x000308, "Member 'UWI_ExperiencePanel_RewardEntry_C::ReasonLabel' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, ValueNumericLabel) == 0x000310, "Member 'UWI_ExperiencePanel_RewardEntry_C::ValueNumericLabel' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, XPLabel) == 0x000318, "Member 'UWI_ExperiencePanel_RewardEntry_C::XPLabel' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, CurrencyTag) == 0x000320, "Member 'UWI_ExperiencePanel_RewardEntry_C::CurrencyTag' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, Reason) == 0x000328, "Member 'UWI_ExperiencePanel_RewardEntry_C::Reason' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, XPText) == 0x000338, "Member 'UWI_ExperiencePanel_RewardEntry_C::XPText' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, ShowXPLabel) == 0x000348, "Member 'UWI_ExperiencePanel_RewardEntry_C::ShowXPLabel' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, ShowCurrencyLabel) == 0x000349, "Member 'UWI_ExperiencePanel_RewardEntry_C::ShowCurrencyLabel' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, InitialValue) == 0x00034C, "Member 'UWI_ExperiencePanel_RewardEntry_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UWI_ExperiencePanel_RewardEntry_C, DesignerPreviewValue) == 0x000350, "Member 'UWI_ExperiencePanel_RewardEntry_C::DesignerPreviewValue' has a wrong offset!");

}

