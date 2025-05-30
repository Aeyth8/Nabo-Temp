#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyPlayerListSectionWI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyPlayerListSectionWI.LobbyPlayerListSectionWI_C
// 0x0050 (0x0330 - 0x02E0)
class ULobbyPlayerListSectionWI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_4;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Color;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PlayerList_VerticalBox;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Title;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TeamTitle;                                         // 0x0310(0x0010)(Edit, BlueprintVisible)
	struct FLinearColor                           TeamColor;                                         // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Add_Child_Entry(class UWidget* Content);
	void Clear_Children();
	void ExecuteUbergraph_LobbyPlayerListSectionWI(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyPlayerListSectionWI_C">();
	}
	static class ULobbyPlayerListSectionWI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyPlayerListSectionWI_C>();
	}
};
static_assert(alignof(ULobbyPlayerListSectionWI_C) == 0x000008, "Wrong alignment on ULobbyPlayerListSectionWI_C");
static_assert(sizeof(ULobbyPlayerListSectionWI_C) == 0x000330, "Wrong size on ULobbyPlayerListSectionWI_C");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, UberGraphFrame) == 0x0002E0, "Member 'ULobbyPlayerListSectionWI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, Border_4) == 0x0002E8, "Member 'ULobbyPlayerListSectionWI_C::Border_4' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, Border_Color) == 0x0002F0, "Member 'ULobbyPlayerListSectionWI_C::Border_Color' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, PlayerList_VerticalBox) == 0x0002F8, "Member 'ULobbyPlayerListSectionWI_C::PlayerList_VerticalBox' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, TextBlock_Title) == 0x000300, "Member 'ULobbyPlayerListSectionWI_C::TextBlock_Title' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, VerticalBox_Content) == 0x000308, "Member 'ULobbyPlayerListSectionWI_C::VerticalBox_Content' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, TeamTitle) == 0x000310, "Member 'ULobbyPlayerListSectionWI_C::TeamTitle' has a wrong offset!");
static_assert(offsetof(ULobbyPlayerListSectionWI_C, TeamColor) == 0x000320, "Member 'ULobbyPlayerListSectionWI_C::TeamColor' has a wrong offset!");

}

