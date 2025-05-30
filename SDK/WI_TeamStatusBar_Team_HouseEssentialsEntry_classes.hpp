#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TeamStatusBar_Team_HouseEssentialsEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "JP_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C
// 0x00C0 (0x04F0 - 0x0430)
class UWI_TeamStatusBar_Team_HouseEssentialsEntry_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Active_HouseEssential;                             // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_Destroyed;                              // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Destroyed;                                    // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_LookAtMeEffect_C*                   LookAtMeEffect;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_UIFlashEffect_C*                    UIFlashEffect;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ETeamType                                     Team;                                              // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Destroyed;                                         // 0x0461(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_462[0x6];                                      // 0x0462(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Blue_Team_Active_House_Essential;                  // 0x0468(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Red_Team_Active_House_Essential;                   // 0x0490(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 House_Essential_Icons_Config;                      // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            Blue_Team_Icon_Color;                              // 0x04C0(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            Red_Team_Icon_Color;                               // 0x04D4(0x0014)(Edit, BlueprintVisible)
	struct FHouseEssentialId                      House_Essential_Id;                                // 0x04E8(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WI_TeamStatusBar_Team_HouseEssentialsEntry(int32 EntryPoint);
	void GetIcon(TSoftObjectPtr<class UTexture2D>* IconSoftObject);
	void PreConstruct(bool IsDesignTime);
	void Update();
	void UpdateHouseEssentialBackground();
	void UpdateHouseEssentialIcon();
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_TeamStatusBar_Team_HouseEssentialsEntry_C">();
	}
	static class UWI_TeamStatusBar_Team_HouseEssentialsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_TeamStatusBar_Team_HouseEssentialsEntry_C>();
	}
};
static_assert(alignof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C) == 0x000008, "Wrong alignment on UWI_TeamStatusBar_Team_HouseEssentialsEntry_C");
static_assert(sizeof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C) == 0x0004F0, "Wrong size on UWI_TeamStatusBar_Team_HouseEssentialsEntry_C");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, UberGraphFrame) == 0x000430, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Active_HouseEssential) == 0x000438, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Active_HouseEssential' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Background_Destroyed) == 0x000440, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Background_Destroyed' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Icon_Destroyed) == 0x000448, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Icon_Destroyed' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, LookAtMeEffect) == 0x000450, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::LookAtMeEffect' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, UIFlashEffect) == 0x000458, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::UIFlashEffect' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Team) == 0x000460, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Team' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Destroyed) == 0x000461, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Destroyed' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Blue_Team_Active_House_Essential) == 0x000468, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Blue_Team_Active_House_Essential' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Red_Team_Active_House_Essential) == 0x000490, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Red_Team_Active_House_Essential' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, House_Essential_Icons_Config) == 0x0004B8, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::House_Essential_Icons_Config' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Blue_Team_Icon_Color) == 0x0004C0, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Blue_Team_Icon_Color' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, Red_Team_Icon_Color) == 0x0004D4, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Red_Team_Icon_Color' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_HouseEssentialsEntry_C, House_Essential_Id) == 0x0004E8, "Member 'UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::House_Essential_Id' has a wrong offset!");

}

