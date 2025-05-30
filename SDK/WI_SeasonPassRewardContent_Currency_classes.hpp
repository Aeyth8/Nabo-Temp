#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_SeasonPassRewardContent_Currency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_SeasonPassRewardContent_Currency.WI_SeasonPassRewardContent_Currency_C
// 0x0058 (0x0338 - 0x02E0)
class UWI_SeasonPassRewardContent_Currency_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Amount;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSeasonPassReward                      Reward;                                            // 0x02F8(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ApplyCurrencyViewModel(const struct FSeasonPassRewardContent_CurrencyViewModel& ViewModel);
	void ExecuteUbergraph_WI_SeasonPassRewardContent_Currency(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_SeasonPassRewardContent_Currency_C">();
	}
	static class UWI_SeasonPassRewardContent_Currency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_SeasonPassRewardContent_Currency_C>();
	}
};
static_assert(alignof(UWI_SeasonPassRewardContent_Currency_C) == 0x000008, "Wrong alignment on UWI_SeasonPassRewardContent_Currency_C");
static_assert(sizeof(UWI_SeasonPassRewardContent_Currency_C) == 0x000338, "Wrong size on UWI_SeasonPassRewardContent_Currency_C");
static_assert(offsetof(UWI_SeasonPassRewardContent_Currency_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_SeasonPassRewardContent_Currency_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_SeasonPassRewardContent_Currency_C, Amount) == 0x0002E8, "Member 'UWI_SeasonPassRewardContent_Currency_C::Amount' has a wrong offset!");
static_assert(offsetof(UWI_SeasonPassRewardContent_Currency_C, Icon) == 0x0002F0, "Member 'UWI_SeasonPassRewardContent_Currency_C::Icon' has a wrong offset!");
static_assert(offsetof(UWI_SeasonPassRewardContent_Currency_C, Reward) == 0x0002F8, "Member 'UWI_SeasonPassRewardContent_Currency_C::Reward' has a wrong offset!");

}

