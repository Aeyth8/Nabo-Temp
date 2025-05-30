#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_CharacterSelection

#include "Basic.hpp"

#include "WB_Lobby_CharacterSelection_classes.hpp"
#include "WB_Lobby_CharacterSelection_parameters.hpp"


namespace SDK
{

// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.Can Select Character
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ItemToFind                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWB_Lobby_CharacterSelection_C::Can_Select_Character(const class FName& ItemToFind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "Can Select Character");

	Params::WB_Lobby_CharacterSelection_C_Can_Select_Character Parms{};

	Parms.ItemToFind = ItemToFind;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Lobby_CharacterSelection_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.ExecuteUbergraph_WB_Lobby_CharacterSelection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_CharacterSelection_C::ExecuteUbergraph_WB_Lobby_CharacterSelection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "ExecuteUbergraph_WB_Lobby_CharacterSelection");

	Params::WB_Lobby_CharacterSelection_C_ExecuteUbergraph_WB_Lobby_CharacterSelection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.FillPawns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_Lobby_CharacterSelection_C::FillPawns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "FillPawns");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.GetRandomCharacterRole
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_CharacterSelection_C::GetRandomCharacterRole(class FName* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "GetRandomCharacterRole");

	Params::WB_Lobby_CharacterSelection_C_GetRandomCharacterRole Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.Handle Character Role Selected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterRole_Row_Name_In                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Lobby_CharacterSelection_Entry_C*SelectedEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_CharacterSelection_C::Handle_Character_Role_Selected(class FName CharacterRole_Row_Name_In, class UWB_Lobby_CharacterSelection_Entry_C* SelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "Handle Character Role Selected");

	Params::WB_Lobby_CharacterSelection_C_Handle_Character_Role_Selected Parms{};

	Parms.CharacterRole_Row_Name_In = CharacterRole_Row_Name_In;
	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.OnCharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterRole_Row_Name                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Lobby_CharacterSelection_Entry_C*SelectedEntry                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_CharacterSelection_C::OnCharacterSelected__DelegateSignature(class FName CharacterRole_Row_Name, class UWB_Lobby_CharacterSelection_Entry_C* SelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "OnCharacterSelected__DelegateSignature");

	Params::WB_Lobby_CharacterSelection_C_OnCharacterSelected__DelegateSignature Parms{};

	Parms.CharacterRole_Row_Name = CharacterRole_Row_Name;
	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Lobby_CharacterSelection_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.Set Character Selected Name
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterRoleData               CharacterRoleData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Lobby_CharacterSelection_C::Set_Character_Selected_Name(const struct FCharacterRoleData& CharacterRoleData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "Set Character Selected Name");

	Params::WB_Lobby_CharacterSelection_C_Set_Character_Selected_Name Parms{};

	Parms.CharacterRoleData = std::move(CharacterRoleData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.SetTraitDetails
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterRoleData               CharacterRoleData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWB_Lobby_CharacterSelection_C::SetTraitDetails(const struct FCharacterRoleData& CharacterRoleData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "SetTraitDetails");

	Params::WB_Lobby_CharacterSelection_C_SetTraitDetails Parms{};

	Parms.CharacterRoleData = std::move(CharacterRoleData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.UpdateCharacterRole
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWB_Lobby_CharacterSelection_C::UpdateCharacterRole()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "UpdateCharacterRole");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.UpdateEntrysSelectionState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          SelectedEntryWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_CharacterSelection_C::UpdateEntrysSelectionState(class UObject* SelectedEntryWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "UpdateEntrysSelectionState");

	Params::WB_Lobby_CharacterSelection_C_UpdateEntrysSelectionState Parms{};

	Parms.SelectedEntryWidget = SelectedEntryWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_CharacterSelection.WB_Lobby_CharacterSelection_C.GetSavedCharacterPreferenceObject
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USavedCharacterPreferences_C*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USavedCharacterPreferences_C* UWB_Lobby_CharacterSelection_C::GetSavedCharacterPreferenceObject(bool* Success) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_CharacterSelection_C", "GetSavedCharacterPreferenceObject");

	Params::WB_Lobby_CharacterSelection_C_GetSavedCharacterPreferenceObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;
}

}

