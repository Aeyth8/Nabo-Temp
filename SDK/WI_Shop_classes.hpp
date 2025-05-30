#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_Shop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_ShopType_structs.hpp"
#include "S_ShopItem_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_Shop.WI_Shop_C
// 0x0148 (0x0428 - 0x02E0)
class UWI_Shop_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CloseButton;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           GameplayEffectDescriptions;                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Items;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxDelivery;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_40;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_218;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_299;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemDescription;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemInformationWindow;                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Blocker;                                   // 0x0340(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_GridShop;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Radial;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ShopItemCategories;                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DeliveryTime;                                 // 0x0360(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_86;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_RadialMenu_C*                      UMG_RadialMenu;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_HouseUpgradeInfobox_C*              WI_HouseUpgradeInfobox;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_UpgradeRoomButton_C*                WI_UpgradeRoomButton;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ShopType;                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_TeamShopManager_C*                  TeamShopManager;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentItemCount;                                  // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39C[0x4];                                      // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ResidentCharacter_C*                OwningALSCharacter;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class Abp_groundskeeper_C*                    GroundsKeeper;                                     // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_ShopType                                    ShopType;                                          // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3B1[0x7];                                      // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DeliveryService_C*                  DeliveryService;                                   // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_RoomManager_C*                      AssociatedRoomManager;                             // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FS_ShopItem                            LastPurchasedItem;                                 // 0x03C8(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          FocusFound;                                        // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              LookStickValue;                                    // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoRotateForUp;                                   // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewIndex;                                          // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_0;                                           // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_SelectionChanged;                               // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ListView;                                          // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Radial;                                            // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          AllowClosing;                                      // 0x0422(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddBuffIcon(class UClass* Class_0);
	void AddShopItemEntryToGridPanel(const struct FS_ShopItem& ShopItem, class UWI_ShopItemEntry_C** ShopItemEntry, class UWI_ShopItemEntry_Radial_C** ShopItemEntryRadial);
	void BndEvt__WI_Shop_Button_185_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WI_Shop_WI_UpgradeRoomButton_K2Node_ComponentBoundEvent_1_On_ButtonReleased__DelegateSignature();
	void BndEvt__WI_Shop_WI_UpgradeRoomButton_K2Node_ComponentBoundEvent_2_On_HoldButtonComplete__DelegateSignature();
	int32 Calculate_Distance_To_Current_Grid_Slot(class UGridSlot* GridSlot, class UGridSlot* CurrentGridSlot);
	int32 CalculateDistanceToGridSlot(class UGridSlot* GridSlot, int32 CurrentGridSlotRow, int32 CurrentGridSlotColumn);
	bool CanPurchase(const struct FS_ShopItem& ItemToFind);
	int32 CheckDistanceToCurrentGridSlot(class UGridSlot* GridSlot, int32 ShortestDistance, class UGridSlot* CurrentGridSlot);
	void ClearGrid();
	void Close_Shop();
	void CloseCooldownElapsed();
	void Construct();
	void CreateGridsForItemCategories();
	bool Does_Array_Contain_Room(class UItemTiersDefinition* Item_Tiers_Definition, const TArray<struct FRoomData>& TargetArray, struct FRoomData* ItemCategory);
	void ExecuteUbergraph_WI_Shop(int32 EntryPoint);
	void FindShopItemInShop(const struct FS_ShopItem& ItemToFind, struct FS_ShopItem* FoundItem);
	ESlateVisibility Get_Overlay_Blocker_Visibility();
	class FText Get_Text_DeliveryTime();
	ESlateVisibility Get_WidgetSwitcher_ShopType_Visibility();
	void GetCurrentItemTierIndex(const struct FRoomData& ShopRoomData, const TArray<struct FItemTier>& ItemTiers, int32* ItemTierIndex);
	void GetFittingShopItemGrid(const struct FS_ShopItem& S_ShopItem, class UGridPanel** GridPanel);
	void GetGridRowPlacement(class UGridPanel* GridPanel, int32* Row, int32* Column);
	int32 GetPieSelection();
	void GetSelectedWidget(class UUserWidget** Output);
	void GetShopTypeItems(TArray<struct FS_ShopItem>* ShopItems);
	void Has_Item(TSoftObjectPtr<class UItemDefinition> ItemDefinition, bool* Return);
	void InpActEvt_IA_CloseShop_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void IsRoomRequirementMet(class AGroundsKeeper* GroundsKeeper_0, const struct FS_ShopItem& ShopItem, bool* Return);
	void ModifyShopItemCostFromPerk(double ItemCost, double* ModifiedItemCost);
	void ModifyShopItemFromPerks(const struct FS_ShopItem& S_ShopItem, struct FS_ShopItem* ModifiedShopItem);
	void On_Moved_Away_From_Shop();
	void On_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelction);
	void OnLoaded_774C86804E0EF56D933368BAC292CE5B(class UObject* Loaded);
	void OrderByPhone(const struct FS_ShopItem& ShopItem);
	void PrintNoPurchaseReason(const class FText& InText);
	void PurchaseButtonClicked(const struct FS_ShopItem& ShopItem, bool CheatUnlocked);
	void PurchaseButtonHovered(const struct FS_ShopItem& ShopItem);
	void Refresh_Shop();
	void RoomDataUpdated();
	void Set_Focus_After_Shop_UIRefresh();
	void SetEnableCharacterMovement(bool Enable);
	void SetIndex(int32 Index_0);
	void SetShownHouseLevel();
	void Setup_Controller_Navigation();
	void SetupNavigationDownTowardsGrids(class UWidget* From_Widget, TArray<class UWidget*>& Viable_Grids, bool* Found_Target_Widget);
	void SetupNavigationFromShopEntry(class UGridPanel* GridPanel, class UWidget* CurrentWidget, class UGridSlot* CurrentGridSlot, int32 GridPanelIndex);
	void SetupNavigationInDirection(EUINavigation Direction, class UWidget* CurrentWidget, class UGridSlot* CurrentGridSlot, class UWidget* DefaultWidgetToNavigateTo, class UGridPanel* GridPanel, int32 GridPanelIndex);
	void SetupNavigationUpTowardsGrids(class UWidget* From_Widget, TArray<class UWidget*>& Viable_Grids, bool* Found_Target_Widget);
	void SetupStore();
	void ShowItemDetails(class UObject* ItemDefinition);
	void Temp_GetGroundsKeeper(class Abp_groundskeeper_C** Output_Get);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TryPurchaseItem(const struct FS_ShopItem& ShopItem, E_ShopType ShopType_0, bool CheatUnlocked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_Shop_C">();
	}
	static class UWI_Shop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_Shop_C>();
	}
};
static_assert(alignof(UWI_Shop_C) == 0x000008, "Wrong alignment on UWI_Shop_C");
static_assert(sizeof(UWI_Shop_C) == 0x000428, "Wrong size on UWI_Shop_C");
static_assert(offsetof(UWI_Shop_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_Shop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, CloseButton) == 0x0002E8, "Member 'UWI_Shop_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, GameplayEffectDescriptions) == 0x0002F0, "Member 'UWI_Shop_C::GameplayEffectDescriptions' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, GridPanel_Items) == 0x0002F8, "Member 'UWI_Shop_C::GridPanel_Items' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, HorizontalBoxDelivery) == 0x000300, "Member 'UWI_Shop_C::HorizontalBoxDelivery' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Image) == 0x000308, "Member 'UWI_Shop_C::Image' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Image_40) == 0x000310, "Member 'UWI_Shop_C::Image_40' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Image_218) == 0x000318, "Member 'UWI_Shop_C::Image_218' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Image_299) == 0x000320, "Member 'UWI_Shop_C::Image_299' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, ItemDescription) == 0x000328, "Member 'UWI_Shop_C::ItemDescription' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, ItemInformationWindow) == 0x000330, "Member 'UWI_Shop_C::ItemInformationWindow' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, ItemName) == 0x000338, "Member 'UWI_Shop_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Overlay_Blocker) == 0x000340, "Member 'UWI_Shop_C::Overlay_Blocker' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Overlay_GridShop) == 0x000348, "Member 'UWI_Shop_C::Overlay_GridShop' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Overlay_Radial) == 0x000350, "Member 'UWI_Shop_C::Overlay_Radial' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, ScrollBox_ShopItemCategories) == 0x000358, "Member 'UWI_Shop_C::ScrollBox_ShopItemCategories' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Text_DeliveryTime) == 0x000360, "Member 'UWI_Shop_C::Text_DeliveryTime' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, TextBlock_86) == 0x000368, "Member 'UWI_Shop_C::TextBlock_86' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, UMG_RadialMenu) == 0x000370, "Member 'UWI_Shop_C::UMG_RadialMenu' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, WI_HouseUpgradeInfobox) == 0x000378, "Member 'UWI_Shop_C::WI_HouseUpgradeInfobox' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, WI_UpgradeRoomButton) == 0x000380, "Member 'UWI_Shop_C::WI_UpgradeRoomButton' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, WidgetSwitcher_ShopType) == 0x000388, "Member 'UWI_Shop_C::WidgetSwitcher_ShopType' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, TeamShopManager) == 0x000390, "Member 'UWI_Shop_C::TeamShopManager' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, CurrentItemCount) == 0x000398, "Member 'UWI_Shop_C::CurrentItemCount' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, OwningALSCharacter) == 0x0003A0, "Member 'UWI_Shop_C::OwningALSCharacter' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, GroundsKeeper) == 0x0003A8, "Member 'UWI_Shop_C::GroundsKeeper' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, ShopType) == 0x0003B0, "Member 'UWI_Shop_C::ShopType' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, DeliveryService) == 0x0003B8, "Member 'UWI_Shop_C::DeliveryService' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, AssociatedRoomManager) == 0x0003C0, "Member 'UWI_Shop_C::AssociatedRoomManager' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, LastPurchasedItem) == 0x0003C8, "Member 'UWI_Shop_C::LastPurchasedItem' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, FocusFound) == 0x0003E8, "Member 'UWI_Shop_C::FocusFound' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, LookStickValue) == 0x0003F0, "Member 'UWI_Shop_C::LookStickValue' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, AutoRotateForUp) == 0x000400, "Member 'UWI_Shop_C::AutoRotateForUp' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, NewIndex) == 0x000404, "Member 'UWI_Shop_C::NewIndex' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Index_0) == 0x000408, "Member 'UWI_Shop_C::Index_0' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, On_SelectionChanged) == 0x000410, "Member 'UWI_Shop_C::On_SelectionChanged' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, ListView) == 0x000420, "Member 'UWI_Shop_C::ListView' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, Radial) == 0x000421, "Member 'UWI_Shop_C::Radial' has a wrong offset!");
static_assert(offsetof(UWI_Shop_C, AllowClosing) == 0x000422, "Member 'UWI_Shop_C::AllowClosing' has a wrong offset!");

}

