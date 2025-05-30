#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ItemInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ItemInfo.WI_ItemInfo_C
// 0x0090 (0x0370 - 0x02E0)
class UWI_ItemInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox1;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox2;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mouse1Text;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Mouse2Text;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_DestructionMultiplier_C*            WI_DestructionMultiplier;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_ItemAbility_C*                      WI_ItemAbility_Mouse1;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_ItemAbility_C*                      WI_ItemAbility_Mouse2;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Mouse1DefaultColorAndOpacity;                      // 0x0320(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            Mouse2DefaultColorAndOpacity;                      // 0x0334(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           CooldownUpdateTimer;                               // 0x0348(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BottomBoxPosition;                                 // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TopBoxPosition;                                    // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Bind_Delegates(class APawn* OldPawn, class APawn* NewPawn);
	void Change_Text(class UEquipmentInstance* Instance);
	void Construct();
	void ExecuteUbergraph_WI_ItemInfo(int32 EntryPoint);
	void GetDamageToStructuresMultiplier(class UEquipmentInstance* EquipmentInstance, float* Damage_Multiplier, bool* MultiplierFound);
	void OnEnded_A71E47DD4FCC9C576945F59274D2FC98();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SwitchWidgetLocationIfGamepad();
	void ToggleM1GreyOut(bool GreyedOut);
	void ToggleM2GreyOut(bool GreyedOut);
	void TryChangeDescriptionWithPerk(class UEquipmentInstance* Instance);
	void TryChangeIconWithPerk(class UEquipmentInstance* Instance, const struct FGameplayTag& InputTag, class UWI_ItemAbility_C* Image);
	void UpdateAbilityIcon(class UEquipmentInstance* EquipmentInstance, const struct FGameplayTag& InputTag, const struct FGameplayTag& AlternativeInputTag, class UWI_ItemAbility_C* Image);
	void UpdateCooldown(class UAbilitySystemComponentIW* ASCIW, class UWI_ItemAbility_C* AbilityWidget, const struct FGameplayTag& GameplayTag);
	void UpdateCooldownVisuals();
	void UpdateDamageMultiplier(class UEquipmentInstance* EquipmentInstance);
	void UpdateText(class UEquipmentInstance* Instance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ItemInfo_C">();
	}
	static class UWI_ItemInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ItemInfo_C>();
	}
};
static_assert(alignof(UWI_ItemInfo_C) == 0x000008, "Wrong alignment on UWI_ItemInfo_C");
static_assert(sizeof(UWI_ItemInfo_C) == 0x000370, "Wrong size on UWI_ItemInfo_C");
static_assert(offsetof(UWI_ItemInfo_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_ItemInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, HorizontalBox1) == 0x0002E8, "Member 'UWI_ItemInfo_C::HorizontalBox1' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, HorizontalBox2) == 0x0002F0, "Member 'UWI_ItemInfo_C::HorizontalBox2' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, Mouse1Text) == 0x0002F8, "Member 'UWI_ItemInfo_C::Mouse1Text' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, Mouse2Text) == 0x000300, "Member 'UWI_ItemInfo_C::Mouse2Text' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, WI_DestructionMultiplier) == 0x000308, "Member 'UWI_ItemInfo_C::WI_DestructionMultiplier' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, WI_ItemAbility_Mouse1) == 0x000310, "Member 'UWI_ItemInfo_C::WI_ItemAbility_Mouse1' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, WI_ItemAbility_Mouse2) == 0x000318, "Member 'UWI_ItemInfo_C::WI_ItemAbility_Mouse2' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, Mouse1DefaultColorAndOpacity) == 0x000320, "Member 'UWI_ItemInfo_C::Mouse1DefaultColorAndOpacity' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, Mouse2DefaultColorAndOpacity) == 0x000334, "Member 'UWI_ItemInfo_C::Mouse2DefaultColorAndOpacity' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, CooldownUpdateTimer) == 0x000348, "Member 'UWI_ItemInfo_C::CooldownUpdateTimer' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, BottomBoxPosition) == 0x000350, "Member 'UWI_ItemInfo_C::BottomBoxPosition' has a wrong offset!");
static_assert(offsetof(UWI_ItemInfo_C, TopBoxPosition) == 0x000360, "Member 'UWI_ItemInfo_C::TopBoxPosition' has a wrong offset!");

}

