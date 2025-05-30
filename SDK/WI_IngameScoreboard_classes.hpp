#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_IngameScoreboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_IngameScoreboard.WI_IngameScoreboard_C
// 0x0050 (0x0330 - 0x02E0)
class UWI_IngameScoreboard_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CaptureMouseInputAskSimonas;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EnemyTeamBox;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           FriendlyTeamBox;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_90;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_132;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWI_IngameScoreboard_Entry_C*>   Entries;                                           // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_WI_IngameScoreboard(int32 EntryPoint);
	void PopulateWithPlayersForTeam(uint8 Team);
	void PreConstruct(bool IsDesignTime);
	void SetupControllerNavigation();
	void SetupControllerNavigationWithinList(class UPanelWidget* TeamBox);
	void ShowScoreBoard(bool Visible);
	void UpdateValues();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_IngameScoreboard_C">();
	}
	static class UWI_IngameScoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_IngameScoreboard_C>();
	}
};
static_assert(alignof(UWI_IngameScoreboard_C) == 0x000008, "Wrong alignment on UWI_IngameScoreboard_C");
static_assert(sizeof(UWI_IngameScoreboard_C) == 0x000330, "Wrong size on UWI_IngameScoreboard_C");
static_assert(offsetof(UWI_IngameScoreboard_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_IngameScoreboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, CaptureMouseInputAskSimonas) == 0x0002E8, "Member 'UWI_IngameScoreboard_C::CaptureMouseInputAskSimonas' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, EnemyTeamBox) == 0x0002F0, "Member 'UWI_IngameScoreboard_C::EnemyTeamBox' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, FriendlyTeamBox) == 0x0002F8, "Member 'UWI_IngameScoreboard_C::FriendlyTeamBox' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, Image) == 0x000300, "Member 'UWI_IngameScoreboard_C::Image' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, Image_90) == 0x000308, "Member 'UWI_IngameScoreboard_C::Image_90' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, Image_93) == 0x000310, "Member 'UWI_IngameScoreboard_C::Image_93' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, Image_132) == 0x000318, "Member 'UWI_IngameScoreboard_C::Image_132' has a wrong offset!");
static_assert(offsetof(UWI_IngameScoreboard_C, Entries) == 0x000320, "Member 'UWI_IngameScoreboard_C::Entries' has a wrong offset!");

}

