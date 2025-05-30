#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_PerksSelection

#include "Basic.hpp"

#include "WB_Lobby_PerksSelection_classes.hpp"
#include "WB_Lobby_PerksSelection_parameters.hpp"


namespace SDK
{

// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Lobby_PerksSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PerksSelection_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.ExecuteUbergraph_WB_Lobby_PerksSelection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_PerksSelection_C::ExecuteUbergraph_WB_Lobby_PerksSelection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PerksSelection_C", "ExecuteUbergraph_WB_Lobby_PerksSelection");

	Params::WB_Lobby_PerksSelection_C_ExecuteUbergraph_WB_Lobby_PerksSelection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.FillPerks
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Lobby_PerksSelection_C::FillPerks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PerksSelection_C", "FillPerks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.OnCharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterRole_Row_Name                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Lobby_CharacterSelection_Entry_C*SelectedEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_PerksSelection_C::OnCharacterSelected__DelegateSignature(class FName CharacterRole_Row_Name, class UWB_Lobby_CharacterSelection_Entry_C* SelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PerksSelection_C", "OnCharacterSelected__DelegateSignature");

	Params::WB_Lobby_PerksSelection_C_OnCharacterSelected__DelegateSignature Parms{};

	Parms.CharacterRole_Row_Name = CharacterRole_Row_Name;
	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_PerksSelection.WB_Lobby_PerksSelection_C.UpdateEntrysSelectionState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          SelectedEntryWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_PerksSelection_C::UpdateEntrysSelectionState(class UObject* SelectedEntryWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PerksSelection_C", "UpdateEntrysSelectionState");

	Params::WB_Lobby_PerksSelection_C_UpdateEntrysSelectionState Parms{};

	Parms.SelectedEntryWidget = SelectedEntryWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

