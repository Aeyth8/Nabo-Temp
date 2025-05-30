#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_RewardPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_RewardPanel.WI_RewardPanel_C
// 0x00A0 (0x0380 - 0x02E0)
class UWI_RewardPanel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       DescriptionBodyLabel;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DescriptionBorder;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DescriptionHeaderLabel;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PanelTitleLabel;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_RarityButton_C*                     RarityButton;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RewardNameLabel;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RewardTypeLabel;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PanelTitle;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   RewardType;                                        // 0x0330(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   RewardName;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   DescriptionHeader;                                 // 0x0350(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   DescriptionBody;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTag                           RewardTag;                                         // 0x0370(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowDescription;                                   // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_RewardPanel(int32 EntryPoint);
	void OnLoaded_0924CF2148AD91913EDDF99B86D059F3(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void ReadFromLoadedRewardAsset(const struct FGameplayTag& RewardTag_0, const class UPlayerRewardDataAsset* RewardAsset);
	void ReadFromRewardTagAsync(const struct FGameplayTag& RewardTag_0);
	void SetDescriptionBody(const class FText& DescriptionBody_0);
	void SetDescriptionHeader(const class FText& DescriptionHeader_0);
	void SetPanelTitle(const class FText& PanelTitle_0);
	void SetRewardName(const class FText& RewardName_0);
	void SetRewardTag(const struct FGameplayTag& RewardTag_0);
	void SetRewardType(const class FText& RewardType_0);
	void SetShowDescription(bool ShowDescription_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_RewardPanel_C">();
	}
	static class UWI_RewardPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_RewardPanel_C>();
	}
};
static_assert(alignof(UWI_RewardPanel_C) == 0x000008, "Wrong alignment on UWI_RewardPanel_C");
static_assert(sizeof(UWI_RewardPanel_C) == 0x000380, "Wrong size on UWI_RewardPanel_C");
static_assert(offsetof(UWI_RewardPanel_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_RewardPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, DescriptionBodyLabel) == 0x0002E8, "Member 'UWI_RewardPanel_C::DescriptionBodyLabel' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, DescriptionBorder) == 0x0002F0, "Member 'UWI_RewardPanel_C::DescriptionBorder' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, DescriptionHeaderLabel) == 0x0002F8, "Member 'UWI_RewardPanel_C::DescriptionHeaderLabel' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, PanelTitleLabel) == 0x000300, "Member 'UWI_RewardPanel_C::PanelTitleLabel' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, RarityButton) == 0x000308, "Member 'UWI_RewardPanel_C::RarityButton' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, RewardNameLabel) == 0x000310, "Member 'UWI_RewardPanel_C::RewardNameLabel' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, RewardTypeLabel) == 0x000318, "Member 'UWI_RewardPanel_C::RewardTypeLabel' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, PanelTitle) == 0x000320, "Member 'UWI_RewardPanel_C::PanelTitle' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, RewardType) == 0x000330, "Member 'UWI_RewardPanel_C::RewardType' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, RewardName) == 0x000340, "Member 'UWI_RewardPanel_C::RewardName' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, DescriptionHeader) == 0x000350, "Member 'UWI_RewardPanel_C::DescriptionHeader' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, DescriptionBody) == 0x000360, "Member 'UWI_RewardPanel_C::DescriptionBody' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, RewardTag) == 0x000370, "Member 'UWI_RewardPanel_C::RewardTag' has a wrong offset!");
static_assert(offsetof(UWI_RewardPanel_C, ShowDescription) == 0x000378, "Member 'UWI_RewardPanel_C::ShowDescription' has a wrong offset!");

}

