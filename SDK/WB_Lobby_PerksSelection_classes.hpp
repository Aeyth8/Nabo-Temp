#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_PerksSelection

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C
// 0x0058 (0x0338 - 0x02E0)
class UWB_Lobby_PerksSelection_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_182;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name_1;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_Characters;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanel_Characters_1;                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Lobby_CharacterSelection_Entry_C*   WB_Lobby_CharacterSelection_Entry;                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Lobby_CharacterSelection_Entry_C*   WB_Lobby_CharacterSelection_Entry_1;               // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Lobby_CharacterSelection_Entry_C*   CurrentSelectedEntry;                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCharacterSelected;                               // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void ExecuteUbergraph_WB_Lobby_PerksSelection(int32 EntryPoint);
	void FillPerks();
	void OnCharacterSelected__DelegateSignature(class FName CharacterRole_Row_Name, class UWB_Lobby_CharacterSelection_Entry_C* SelectedEntry);
	void UpdateEntrysSelectionState(class UObject* SelectedEntryWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_Lobby_PerksSelection_C">();
	}
	static class UWB_Lobby_PerksSelection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_Lobby_PerksSelection_C>();
	}
};
static_assert(alignof(UWB_Lobby_PerksSelection_C) == 0x000008, "Wrong alignment on UWB_Lobby_PerksSelection_C");
static_assert(sizeof(UWB_Lobby_PerksSelection_C) == 0x000338, "Wrong size on UWB_Lobby_PerksSelection_C");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, UberGraphFrame) == 0x0002E0, "Member 'UWB_Lobby_PerksSelection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, Image_182) == 0x0002E8, "Member 'UWB_Lobby_PerksSelection_C::Image_182' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, Text_Name) == 0x0002F0, "Member 'UWB_Lobby_PerksSelection_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, Text_Name_1) == 0x0002F8, "Member 'UWB_Lobby_PerksSelection_C::Text_Name_1' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, UniformGridPanel_Characters) == 0x000300, "Member 'UWB_Lobby_PerksSelection_C::UniformGridPanel_Characters' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, UniformGridPanel_Characters_1) == 0x000308, "Member 'UWB_Lobby_PerksSelection_C::UniformGridPanel_Characters_1' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, WB_Lobby_CharacterSelection_Entry) == 0x000310, "Member 'UWB_Lobby_PerksSelection_C::WB_Lobby_CharacterSelection_Entry' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, WB_Lobby_CharacterSelection_Entry_1) == 0x000318, "Member 'UWB_Lobby_PerksSelection_C::WB_Lobby_CharacterSelection_Entry_1' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, CurrentSelectedEntry) == 0x000320, "Member 'UWB_Lobby_PerksSelection_C::CurrentSelectedEntry' has a wrong offset!");
static_assert(offsetof(UWB_Lobby_PerksSelection_C, OnCharacterSelected) == 0x000328, "Member 'UWB_Lobby_PerksSelection_C::OnCharacterSelected' has a wrong offset!");

}

