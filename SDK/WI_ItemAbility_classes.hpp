#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ItemAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "WI_AbilityBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ItemAbility.WI_ItemAbility_C
// 0x0090 (0x03A8 - 0x0318)
class UWI_ItemAbility_C final : public UWI_AbilityBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WI_ItemAbility_C;                   // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWI_JPActionWidget_C*                   ActionWidget;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BoundActionSizeBox;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CooldownTimerLabel;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Overlay;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         ProgressBarFillFraction;                           // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CooldownText;                                      // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ShowOverlay;                                       // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              IconSoftTexture;                                   // 0x0370(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	bool                                          ShowBoundAction;                                   // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_399[0x7];                                      // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           InputAction;                                       // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WI_ItemAbility(int32 EntryPoint);
	class FString GetCooldownText(double TimeRemaining);
	void OnAbilityActivatable();
	void OnAbilityCooldownEnded();
	void OnAbilityCooldownStarted(double TimeRemaining, double CooldownDuration, double PercentageDone);
	void OnAbilityInactivatable();
	void OnAbilityInitialized();
	void OnCooldownTick(double TimeRemaining, double CooldownDuration, double PercentageDone);
	void PreConstruct(bool IsDesignTime);
	void SetCooldownText(const class FString& Cooldown_Text);
	void SetIconTexture(TSoftObjectPtr<class UTexture2D> SoftTexture);
	void SetInputAction(class UInputAction* InputAction_0);
	void SetProgressBarFillFraction(float InPercent);
	void SetShowBoundAction(bool Index_0);
	void SetShowCooldownText(bool Show);
	void SetShowOverlay(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ItemAbility_C">();
	}
	static class UWI_ItemAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ItemAbility_C>();
	}
};
static_assert(alignof(UWI_ItemAbility_C) == 0x000008, "Wrong alignment on UWI_ItemAbility_C");
static_assert(sizeof(UWI_ItemAbility_C) == 0x0003A8, "Wrong size on UWI_ItemAbility_C");
static_assert(offsetof(UWI_ItemAbility_C, UberGraphFrame_WI_ItemAbility_C) == 0x000318, "Member 'UWI_ItemAbility_C::UberGraphFrame_WI_ItemAbility_C' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, ActionWidget) == 0x000320, "Member 'UWI_ItemAbility_C::ActionWidget' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, BoundActionSizeBox) == 0x000328, "Member 'UWI_ItemAbility_C::BoundActionSizeBox' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, CooldownTimerLabel) == 0x000330, "Member 'UWI_ItemAbility_C::CooldownTimerLabel' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, Icon) == 0x000338, "Member 'UWI_ItemAbility_C::Icon' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, Overlay) == 0x000340, "Member 'UWI_ItemAbility_C::Overlay' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, ProgressBar) == 0x000348, "Member 'UWI_ItemAbility_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, ProgressBarFillFraction) == 0x000350, "Member 'UWI_ItemAbility_C::ProgressBarFillFraction' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, CooldownText) == 0x000358, "Member 'UWI_ItemAbility_C::CooldownText' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, ShowOverlay) == 0x000368, "Member 'UWI_ItemAbility_C::ShowOverlay' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, IconSoftTexture) == 0x000370, "Member 'UWI_ItemAbility_C::IconSoftTexture' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, ShowBoundAction) == 0x000398, "Member 'UWI_ItemAbility_C::ShowBoundAction' has a wrong offset!");
static_assert(offsetof(UWI_ItemAbility_C, InputAction) == 0x0003A0, "Member 'UWI_ItemAbility_C::InputAction' has a wrong offset!");

}

