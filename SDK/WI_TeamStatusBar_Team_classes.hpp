#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TeamStatusBar_Team

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "JP_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_TeamStatusBar_Team.WI_TeamStatusBar_Team_C
// 0x0128 (0x0558 - 0x0430)
class UWI_TeamStatusBar_Team_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HouseEssentialDamaged;                             // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Background;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_TeamStatusBar_Team_HouseEssentialsList_C* HouseEssentialsList;                               // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_TeamStatusBar_Team_House_C*         HouseWidget;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_LookAtMeEffect_C*                   LookAtMeEffect;                                    // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_TeamStatusBar_Team_PortraitsList_C* PortraitsList;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_TeamStatusBar_Team_Score_C*         ScoreCounter;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer1_HouseAndHouseEssentialsList;               // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer2_HouseEssentialsListAndPortraitsList;       // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ETeamType                                     Team;                                              // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_489[0x3];                                      // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count_House_Essentials;                            // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Blue_Team_Background;                              // 0x0490(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Red_Team_Background;                               // 0x04B8(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FHouseEssentialId>              Destroyed_House_Essentials;                        // 0x04E0(0x0010)(Edit, BlueprintVisible)
	struct FMargin                                PortraitsList_Padding;                             // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHorizontalAlignment                          PortraitsList_Horizontal_Alignment;                // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            PortraitsList_Vertical_Alignment;                  // 0x0501(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_502[0x6];                                      // 0x0502(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture>                Blue_Team_Glow_Mask;                               // 0x0508(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture>                Red_Team_Glow_Mask;                                // 0x0530(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)

public:
	void AddPlayerState(const class APlayerStateJP*& PlayerState, bool UpdatePlayersCount, bool* Was_Added);
	void ExecuteUbergraph_WI_TeamStatusBar_Team(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void RemovePlayerState(const class APlayerStateJP*& PlayerState, bool Update_Players_Count, bool* Success);
	void SetPlayerStates(TArray<class APlayerStateJP*>& PlayerStates);
	void Update();
	void Update_HouseEssentialsList_Widget();
	void Update_HouseLevel_Widget();
	void UpdateBackground();
	void UpdateGlowMask();
	void UpdateHouseWidget();
	void UpdatePortraitsList();
	void UpdateScoreWidget();
	void UpdateTeamResourceCount(int32 Count);
	void UpdateWidgetDisplayOrder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_TeamStatusBar_Team_C">();
	}
	static class UWI_TeamStatusBar_Team_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_TeamStatusBar_Team_C>();
	}
};
static_assert(alignof(UWI_TeamStatusBar_Team_C) == 0x000008, "Wrong alignment on UWI_TeamStatusBar_Team_C");
static_assert(sizeof(UWI_TeamStatusBar_Team_C) == 0x000558, "Wrong size on UWI_TeamStatusBar_Team_C");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, UberGraphFrame) == 0x000430, "Member 'UWI_TeamStatusBar_Team_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, HouseEssentialDamaged) == 0x000438, "Member 'UWI_TeamStatusBar_Team_C::HouseEssentialDamaged' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Background) == 0x000440, "Member 'UWI_TeamStatusBar_Team_C::Background' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, HorizontalBox) == 0x000448, "Member 'UWI_TeamStatusBar_Team_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, HouseEssentialsList) == 0x000450, "Member 'UWI_TeamStatusBar_Team_C::HouseEssentialsList' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, HouseWidget) == 0x000458, "Member 'UWI_TeamStatusBar_Team_C::HouseWidget' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, LookAtMeEffect) == 0x000460, "Member 'UWI_TeamStatusBar_Team_C::LookAtMeEffect' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, PortraitsList) == 0x000468, "Member 'UWI_TeamStatusBar_Team_C::PortraitsList' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, ScoreCounter) == 0x000470, "Member 'UWI_TeamStatusBar_Team_C::ScoreCounter' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Spacer1_HouseAndHouseEssentialsList) == 0x000478, "Member 'UWI_TeamStatusBar_Team_C::Spacer1_HouseAndHouseEssentialsList' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Spacer2_HouseEssentialsListAndPortraitsList) == 0x000480, "Member 'UWI_TeamStatusBar_Team_C::Spacer2_HouseEssentialsListAndPortraitsList' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Team) == 0x000488, "Member 'UWI_TeamStatusBar_Team_C::Team' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Count_House_Essentials) == 0x00048C, "Member 'UWI_TeamStatusBar_Team_C::Count_House_Essentials' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Blue_Team_Background) == 0x000490, "Member 'UWI_TeamStatusBar_Team_C::Blue_Team_Background' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Red_Team_Background) == 0x0004B8, "Member 'UWI_TeamStatusBar_Team_C::Red_Team_Background' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Destroyed_House_Essentials) == 0x0004E0, "Member 'UWI_TeamStatusBar_Team_C::Destroyed_House_Essentials' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, PortraitsList_Padding) == 0x0004F0, "Member 'UWI_TeamStatusBar_Team_C::PortraitsList_Padding' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, PortraitsList_Horizontal_Alignment) == 0x000500, "Member 'UWI_TeamStatusBar_Team_C::PortraitsList_Horizontal_Alignment' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, PortraitsList_Vertical_Alignment) == 0x000501, "Member 'UWI_TeamStatusBar_Team_C::PortraitsList_Vertical_Alignment' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Blue_Team_Glow_Mask) == 0x000508, "Member 'UWI_TeamStatusBar_Team_C::Blue_Team_Glow_Mask' has a wrong offset!");
static_assert(offsetof(UWI_TeamStatusBar_Team_C, Red_Team_Glow_Mask) == 0x000530, "Member 'UWI_TeamStatusBar_Team_C::Red_Team_Glow_Mask' has a wrong offset!");

}

