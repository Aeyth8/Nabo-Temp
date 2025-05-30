#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PlayerRewardButton

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "JP_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_PlayerRewardButton.WI_PlayerRewardButton_C
// 0x0190 (0x1730 - 0x15A0)
class UWI_PlayerRewardButton_C final : public UCommonButtonBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x15A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EquipAnimation;                                    // 0x15A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverAnimation;                                    // 0x15B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               ButtonSizeBox;                                     // 0x15B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_PurchasableRarityButton_C*          PurchasableRarityButton;                           // 0x15C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        ButtonDiameter;                                    // 0x15C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IconDiameter;                                      // 0x15D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              NoIcon;                                            // 0x15D8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)
	class URarity*                                DefaultRarity;                                     // 0x1600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowName;                                          // 0x1608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPurchasable;                                     // 0x1609(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_160A[0x6];                                     // 0x160A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name_0;                                            // 0x1610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Costs;                                             // 0x1620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, int32>                    CurrencyIDToAmountsMap;                            // 0x1630(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsEquipped;                                        // 0x1680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x1681(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1682[0x6];                                     // 0x1682(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnNewPlayerRewardActivated;                        // 0x1688(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNewPlayerRewardEquipped;                         // 0x1698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UPlayerRewardDataAsset*                 PlayerRewardDataAsset;                             // 0x16A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   RichPriceText;                                     // 0x16B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Activatable;                                       // 0x16C0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16C1[0x7];                                     // 0x16C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlayerRewardDataAssetSet;                        // 0x16C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTag                           PlayerRewardDataAssetID;                           // 0x16D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FOnlineStoreItemData                   OnlineStoreItemData;                               // 0x16E0(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Hoverable;                                         // 0x1728(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_WI_PlayerRewardButton(int32 EntryPoint);
	void HandleRarityButtonClicked(class UCommonButtonBase* Button);
	void OnActivated();
	void OnDeactivated();
	void OnEquipped();
	void OnLoaded_FE9FBE634062D5C1F92C538EE8251E56(class UObject* Loaded);
	void OnNewPlayerRewardActivated__DelegateSignature(class UWI_PlayerRewardButton_C* PlayerRewardButton);
	void OnNewPlayerRewardEquipped__DelegateSignature(class UWI_PlayerRewardButton_C* PlayerRewardButton);
	void OnPlayerRewardDataAssetSet__DelegateSignature(class UPlayerRewardDataAsset* PlayerRewardDataAsset_0, class UWI_PlayerRewardButton_C* PlayerRewardButton);
	void OnUnequipped();
	void PreConstruct(bool IsDesignTime);
	void SetButtonDiameter(double Diameter);
	void SetIcon(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void SetIsActive(bool IsActive_0);
	void SetIsEquipped(bool IsEquipped_0);
	void SetIsPurchasable(bool IsPurchasable_0);
	void SetName(const class FText& Name_0);
	void SetPlayerRewardDataAsset(class UPlayerRewardDataAsset* PlayerRewardDataAsset_0);
	void SetPlayerRewardDataAssetID(const struct FGameplayTag& PlayerRewardDataAssetID_0);
	void SetRarity(class URarity* Rarity);
	void SetStoreData(const struct FOnlineStoreItemData& OnlineStoreItemData_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_PlayerRewardButton_C">();
	}
	static class UWI_PlayerRewardButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_PlayerRewardButton_C>();
	}
};
static_assert(alignof(UWI_PlayerRewardButton_C) == 0x000010, "Wrong alignment on UWI_PlayerRewardButton_C");
static_assert(sizeof(UWI_PlayerRewardButton_C) == 0x001730, "Wrong size on UWI_PlayerRewardButton_C");
static_assert(offsetof(UWI_PlayerRewardButton_C, UberGraphFrame) == 0x0015A0, "Member 'UWI_PlayerRewardButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, EquipAnimation) == 0x0015A8, "Member 'UWI_PlayerRewardButton_C::EquipAnimation' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, HoverAnimation) == 0x0015B0, "Member 'UWI_PlayerRewardButton_C::HoverAnimation' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, ButtonSizeBox) == 0x0015B8, "Member 'UWI_PlayerRewardButton_C::ButtonSizeBox' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, PurchasableRarityButton) == 0x0015C0, "Member 'UWI_PlayerRewardButton_C::PurchasableRarityButton' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, ButtonDiameter) == 0x0015C8, "Member 'UWI_PlayerRewardButton_C::ButtonDiameter' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, IconDiameter) == 0x0015D0, "Member 'UWI_PlayerRewardButton_C::IconDiameter' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, NoIcon) == 0x0015D8, "Member 'UWI_PlayerRewardButton_C::NoIcon' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, DefaultRarity) == 0x001600, "Member 'UWI_PlayerRewardButton_C::DefaultRarity' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, ShowName) == 0x001608, "Member 'UWI_PlayerRewardButton_C::ShowName' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, IsPurchasable) == 0x001609, "Member 'UWI_PlayerRewardButton_C::IsPurchasable' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, Name_0) == 0x001610, "Member 'UWI_PlayerRewardButton_C::Name_0' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, Costs) == 0x001620, "Member 'UWI_PlayerRewardButton_C::Costs' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, CurrencyIDToAmountsMap) == 0x001630, "Member 'UWI_PlayerRewardButton_C::CurrencyIDToAmountsMap' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, IsEquipped) == 0x001680, "Member 'UWI_PlayerRewardButton_C::IsEquipped' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, IsActive) == 0x001681, "Member 'UWI_PlayerRewardButton_C::IsActive' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, OnNewPlayerRewardActivated) == 0x001688, "Member 'UWI_PlayerRewardButton_C::OnNewPlayerRewardActivated' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, OnNewPlayerRewardEquipped) == 0x001698, "Member 'UWI_PlayerRewardButton_C::OnNewPlayerRewardEquipped' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, PlayerRewardDataAsset) == 0x0016A8, "Member 'UWI_PlayerRewardButton_C::PlayerRewardDataAsset' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, RichPriceText) == 0x0016B0, "Member 'UWI_PlayerRewardButton_C::RichPriceText' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, Activatable) == 0x0016C0, "Member 'UWI_PlayerRewardButton_C::Activatable' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, OnPlayerRewardDataAssetSet) == 0x0016C8, "Member 'UWI_PlayerRewardButton_C::OnPlayerRewardDataAssetSet' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, PlayerRewardDataAssetID) == 0x0016D8, "Member 'UWI_PlayerRewardButton_C::PlayerRewardDataAssetID' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, OnlineStoreItemData) == 0x0016E0, "Member 'UWI_PlayerRewardButton_C::OnlineStoreItemData' has a wrong offset!");
static_assert(offsetof(UWI_PlayerRewardButton_C, Hoverable) == 0x001728, "Member 'UWI_PlayerRewardButton_C::Hoverable' has a wrong offset!");

}

