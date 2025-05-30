#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PurchasableRarityButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "JP_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_PurchasableRarityButton.WI_PurchasableRarityButton_C
// 0x0060 (0x1600 - 0x15A0)
class UWI_PurchasableRarityButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               ComingSoonOverlay;                                 // 0x15A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ComingSoonText;                                    // 0x15B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLabel;                                         // 0x15B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OwnedLabel;                                        // 0x15C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_SinglePrice_C*                      PriceLabel;                                        // 0x15C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_RarityButton_C*                     RarityButton;                                      // 0x15D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          EditorPreviewIsOwned;                              // 0x15D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_15D9[0x3];                                     // 0x15D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOnlineStoreItemCost                   Cost;                                              // 0x15DC(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTag                           EditorPreviewCostCurrency;                         // 0x15E8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	int32                                         EditorPreviewCostAmount;                           // 0x15F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_PurchasableRarityButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBattlePassInfo(const struct FOnlineStoreItemBattlePassRequirement& OnlineStoreItemBattlePassRequirement);
	void SetCost(const struct FOnlineStoreItemCost& Cost_0);
	void SetLabelVisibilities(bool IsOwned, EOnlineItemUnlockRequirement UnlockRequirement);
	void SetStoreItemData(const struct FOnlineStoreItemData& StoreItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_PurchasableRarityButton_C">();
	}
	static class UWI_PurchasableRarityButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_PurchasableRarityButton_C>();
	}
};
static_assert(alignof(UWI_PurchasableRarityButton_C) == 0x000010, "Wrong alignment on UWI_PurchasableRarityButton_C");
static_assert(sizeof(UWI_PurchasableRarityButton_C) == 0x001600, "Wrong size on UWI_PurchasableRarityButton_C");
static_assert(offsetof(UWI_PurchasableRarityButton_C, UberGraphFrame) == 0x0015A0, "Member 'UWI_PurchasableRarityButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, ComingSoonOverlay) == 0x0015A8, "Member 'UWI_PurchasableRarityButton_C::ComingSoonOverlay' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, ComingSoonText) == 0x0015B0, "Member 'UWI_PurchasableRarityButton_C::ComingSoonText' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, IconLabel) == 0x0015B8, "Member 'UWI_PurchasableRarityButton_C::IconLabel' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, OwnedLabel) == 0x0015C0, "Member 'UWI_PurchasableRarityButton_C::OwnedLabel' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, PriceLabel) == 0x0015C8, "Member 'UWI_PurchasableRarityButton_C::PriceLabel' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, RarityButton) == 0x0015D0, "Member 'UWI_PurchasableRarityButton_C::RarityButton' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, EditorPreviewIsOwned) == 0x0015D8, "Member 'UWI_PurchasableRarityButton_C::EditorPreviewIsOwned' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, Cost) == 0x0015DC, "Member 'UWI_PurchasableRarityButton_C::Cost' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, EditorPreviewCostCurrency) == 0x0015E8, "Member 'UWI_PurchasableRarityButton_C::EditorPreviewCostCurrency' has a wrong offset!");
static_assert(offsetof(UWI_PurchasableRarityButton_C, EditorPreviewCostAmount) == 0x0015F0, "Member 'UWI_PurchasableRarityButton_C::EditorPreviewCostAmount' has a wrong offset!");

}

