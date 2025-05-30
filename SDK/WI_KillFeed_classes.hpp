#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_KillFeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "JP_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_KillFeed.WI_KillFeed_C
// 0x00E8 (0x03C8 - 0x02E0)
class UWI_KillFeed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               EntryContainerOverlay;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWI_BaseKillFeedEntry_C*>        SpawnedWidgets;                                    // 0x02F0(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          DesignerPreviewPlayerKnockedOutPlayer;             // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DesignerPreviewNonPlayerKnockedOutPlayer;          // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DesignerPreviewPlayerDestroyedHouseEssential;      // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_303[0x5];                                      // 0x0303(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PlayerKnockedOutPlayerEntryWidgetClass;            // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 NonPlayerKnockedOutPlayerEntryWidgetClass;         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 PlayerDestroyedHouseEssentialEntryWidgetClass;     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         KillFeedEntryLifetime;                             // 0x0320(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Your_Team_Background_Color;                        // 0x0324(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Enemy_Team_Background_Color;                       // 0x0334(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Neutral_Team_Background_Color;                     // 0x0344(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Your_Team_Portrait_Background_Color;               // 0x0354(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Enemy_Team_Portrait_Background_Color;              // 0x0364(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Neutral_Team_Portrait_Background_Color;            // 0x0374(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_384[0x4];                                      // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 HouseEssentialIconsConfig;                         // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   TheirHouseEssentialDestroyedText;                  // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   YourHouseEssentialDestroyedText;                   // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWI_KillFeedEntry_PlayerKnockedOutPlayer_C* PlayerVersusPlayerEntry;                           // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWI_KillFeedEntry_NonPlayerKnockedOutPlayer_C* NonPlayerVersusPlayerEntry;                        // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWI_KillFeedEntry_PlayerDestroyedHouseEssential_C* PlayerVersusHouseEntry;                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void AddBaseKillFeedEntry(const class UWI_BaseKillFeedEntry_C*& BaseKillFeedEntryWidget, bool AnimateIn);
	void AddKillFeedEntryForHouseEssentialDestroyed(class APlayerState* AttackerPlayerState, class ABP_HouseEssential_Cube_C* HouseEssential, class UWI_BaseKillFeedEntry_C** KillFeedEntryWidget);
	void AddKillFeedEntryForKillInfo(const struct FKillInfo& KillInfo, class UWI_BaseKillFeedEntry_C** KillFeedEntryWidget);
	void AddNonPlayerKnockedOutPlayerEntry(bool AnimateIn, TSoftObjectPtr<class UTexture2D> ReceiverPortaitTexture, const struct FLinearColor& ReceiverPortraitBackgroundColor, TSoftObjectPtr<class UTexture2D> AttackerNonCharacterTexture, const struct FGameplayTag& AttackerType, ETeamType AttackerTeam, const class FText& AttackerName, const struct FGameplayTag& ReceiverType, ETeamType ReceiverTeam, const class FText& ReceiverName, class UWI_KillFeedEntry_NonPlayerKnockedOutPlayer_C** PlayerKnockedOutNonPlayerEntryWidget);
	void AddPlayerDestroyedHouseEssentialEntry(bool AnimateIn, TSoftObjectPtr<class UTexture2D> AttackerPortaitTexture, TSoftObjectPtr<class UTexture2D> ReceiverDestroyedHouseEssential_IconTexture, const struct FLinearColor& AttackerPortraitBackgroundColor, const struct FLinearColor& ReceiverDestroyedHouseEssential_IconColor, const struct FGameplayTag& AttackerType, ETeamType AttackerTeam, const class FText& AttackerName, const struct FGameplayTag& ReceiverType, ETeamType ReceiverTeam, const class FText& ReceiverName, class UWI_KillFeedEntry_PlayerDestroyedHouseEssential_C** PlayerDestroyedHouseEssentialEntryWidget);
	void AddPlayerKnockedOutPlayerEntry(bool AnimateIn, TSoftObjectPtr<class UTexture2D> AttackerPortaitTexture, TSoftObjectPtr<class UTexture2D> ReceiverPortaitTexture, const struct FLinearColor& AttackerPortraitBackgroundColor, const struct FLinearColor& ReceiverPortraitBackgroundColor, const struct FGameplayTag& AttackerType, ETeamType AttackerTeam, const class FText& AttackerName, const struct FGameplayTag& ReceiverType, ETeamType ReceiverTeam, const class FText& ReceiverName, class UWI_KillFeedEntry_PlayerKnockedOutPlayer_C** PlayerKnockedOutPlayerEntryWidget);
	void CreateEntries();
	void ExecuteUbergraph_WI_KillFeed(int32 EntryPoint);
	void Finished_5BA7EE4747FF7D5C957337A358DC6B45();
	void GetNeighborPortraitFromPlayerState(class APlayerState* PlayerState, class UTexture2D** NeighborPortraitTexture2D);
	void OnInitialized();
	void OnMessageReceived_B98BC42A415FB15C913AAB92D01BFE2B(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel);
	void PreConstruct(bool IsDesignTime);
	void RemoveKillFeedEntry(class UWI_BaseKillFeedEntry_C* KillFeedEntryWidget, bool AnimateOut);
	void RemoveOldestKillFeedEntries(bool AnimateOut, class UWI_BaseKillFeedEntry_C* ActiveWidget);
	void Split_Combat_Participant(const struct FCombatParticipant& CombatParticipant, struct FGameplayTag* Type, ETeamType* TeamType, TSoftObjectPtr<class UTexture2D>* PortraitTexture, struct FLinearColor* PortraitBackgroundColor, class FText* Name_0, struct FLinearColor* TeamBackgroundColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_KillFeed_C">();
	}
	static class UWI_KillFeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_KillFeed_C>();
	}
};
static_assert(alignof(UWI_KillFeed_C) == 0x000008, "Wrong alignment on UWI_KillFeed_C");
static_assert(sizeof(UWI_KillFeed_C) == 0x0003C8, "Wrong size on UWI_KillFeed_C");
static_assert(offsetof(UWI_KillFeed_C, UberGraphFrame) == 0x0002E0, "Member 'UWI_KillFeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, EntryContainerOverlay) == 0x0002E8, "Member 'UWI_KillFeed_C::EntryContainerOverlay' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, SpawnedWidgets) == 0x0002F0, "Member 'UWI_KillFeed_C::SpawnedWidgets' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, DesignerPreviewPlayerKnockedOutPlayer) == 0x000300, "Member 'UWI_KillFeed_C::DesignerPreviewPlayerKnockedOutPlayer' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, DesignerPreviewNonPlayerKnockedOutPlayer) == 0x000301, "Member 'UWI_KillFeed_C::DesignerPreviewNonPlayerKnockedOutPlayer' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, DesignerPreviewPlayerDestroyedHouseEssential) == 0x000302, "Member 'UWI_KillFeed_C::DesignerPreviewPlayerDestroyedHouseEssential' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, PlayerKnockedOutPlayerEntryWidgetClass) == 0x000308, "Member 'UWI_KillFeed_C::PlayerKnockedOutPlayerEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, NonPlayerKnockedOutPlayerEntryWidgetClass) == 0x000310, "Member 'UWI_KillFeed_C::NonPlayerKnockedOutPlayerEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, PlayerDestroyedHouseEssentialEntryWidgetClass) == 0x000318, "Member 'UWI_KillFeed_C::PlayerDestroyedHouseEssentialEntryWidgetClass' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, KillFeedEntryLifetime) == 0x000320, "Member 'UWI_KillFeed_C::KillFeedEntryLifetime' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, Your_Team_Background_Color) == 0x000324, "Member 'UWI_KillFeed_C::Your_Team_Background_Color' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, Enemy_Team_Background_Color) == 0x000334, "Member 'UWI_KillFeed_C::Enemy_Team_Background_Color' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, Neutral_Team_Background_Color) == 0x000344, "Member 'UWI_KillFeed_C::Neutral_Team_Background_Color' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, Your_Team_Portrait_Background_Color) == 0x000354, "Member 'UWI_KillFeed_C::Your_Team_Portrait_Background_Color' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, Enemy_Team_Portrait_Background_Color) == 0x000364, "Member 'UWI_KillFeed_C::Enemy_Team_Portrait_Background_Color' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, Neutral_Team_Portrait_Background_Color) == 0x000374, "Member 'UWI_KillFeed_C::Neutral_Team_Portrait_Background_Color' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, HouseEssentialIconsConfig) == 0x000388, "Member 'UWI_KillFeed_C::HouseEssentialIconsConfig' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, TheirHouseEssentialDestroyedText) == 0x000390, "Member 'UWI_KillFeed_C::TheirHouseEssentialDestroyedText' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, YourHouseEssentialDestroyedText) == 0x0003A0, "Member 'UWI_KillFeed_C::YourHouseEssentialDestroyedText' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, PlayerVersusPlayerEntry) == 0x0003B0, "Member 'UWI_KillFeed_C::PlayerVersusPlayerEntry' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, NonPlayerVersusPlayerEntry) == 0x0003B8, "Member 'UWI_KillFeed_C::NonPlayerVersusPlayerEntry' has a wrong offset!");
static_assert(offsetof(UWI_KillFeed_C, PlayerVersusHouseEntry) == 0x0003C0, "Member 'UWI_KillFeed_C::PlayerVersusHouseEntry' has a wrong offset!");

}

