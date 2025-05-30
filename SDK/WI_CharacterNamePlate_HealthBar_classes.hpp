#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_CharacterNamePlate_HealthBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_CharacterNamePlate_HealthBar.WI_CharacterNamePlate_HealthBar_C
// 0x0080 (0x0360 - 0x02E0)
class UWI_CharacterNamePlate_HealthBar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundFill;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ForegroundFill;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FrameWithShadow;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        FillFraction;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETeamType                                     Team;                                              // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            BlueBackgroundColor;                               // 0x030C(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            BlueForegroundColor;                               // 0x0320(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            RedBackgroundColor;                                // 0x0334(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            RedForegroundColor;                                // 0x0348(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void ExecuteUbergraph_WI_CharacterNamePlate_HealthBar(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetFillFraction(double Fill_Fraction);
	void SetMaxHealth(float Value);
	void SetTeam(ETeamType Team_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_CharacterNamePlate_HealthBar_C">();
	}
	static class UWI_CharacterNamePlate_HealthBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_CharacterNamePlate_HealthBar_C>();
	}
};
static_assert(alignof(UWI_CharacterNamePlate_HealthBar_C) == 0x000008, "Wrong alignment on UWI_CharacterNamePlate_HealthBar_C");
static_assert(sizeof(UWI_CharacterNamePlate_HealthBar_C) == 0x000360, "Wrong size on UWI_CharacterNamePlate_HealthBar_C");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_CharacterNamePlate_HealthBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, BackgroundFill) == 0x0002E8, "Member 'UWI_CharacterNamePlate_HealthBar_C::BackgroundFill' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, ForegroundFill) == 0x0002F0, "Member 'UWI_CharacterNamePlate_HealthBar_C::ForegroundFill' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, FrameWithShadow) == 0x0002F8, "Member 'UWI_CharacterNamePlate_HealthBar_C::FrameWithShadow' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, FillFraction) == 0x000300, "Member 'UWI_CharacterNamePlate_HealthBar_C::FillFraction' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, Team) == 0x000308, "Member 'UWI_CharacterNamePlate_HealthBar_C::Team' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, BlueBackgroundColor) == 0x00030C, "Member 'UWI_CharacterNamePlate_HealthBar_C::BlueBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, BlueForegroundColor) == 0x000320, "Member 'UWI_CharacterNamePlate_HealthBar_C::BlueForegroundColor' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, RedBackgroundColor) == 0x000334, "Member 'UWI_CharacterNamePlate_HealthBar_C::RedBackgroundColor' has a wrong offset!");
static_assert(offsetof(UWI_CharacterNamePlate_HealthBar_C, RedForegroundColor) == 0x000348, "Member 'UWI_CharacterNamePlate_HealthBar_C::RedForegroundColor' has a wrong offset!");

}

