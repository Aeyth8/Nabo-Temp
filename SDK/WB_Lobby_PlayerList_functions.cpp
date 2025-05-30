#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_Lobby_PlayerList

#include "Basic.hpp"

#include "WB_Lobby_PlayerList_classes.hpp"
#include "WB_Lobby_PlayerList_parameters.hpp"


namespace SDK
{

// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Lobby_PlayerList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PlayerList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.ExecuteUbergraph_WB_Lobby_PlayerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Lobby_PlayerList_C::ExecuteUbergraph_WB_Lobby_PlayerList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PlayerList_C", "ExecuteUbergraph_WB_Lobby_PlayerList");

	Params::WB_Lobby_PlayerList_C_ExecuteUbergraph_WB_Lobby_PlayerList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_Lobby_PlayerList_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PlayerList_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.OnTeamsChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTeam                            AffectedTeam                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWB_Lobby_PlayerList_C::OnTeamsChanged(const struct FTeam& AffectedTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PlayerList_C", "OnTeamsChanged");

	Params::WB_Lobby_PlayerList_C_OnTeamsChanged Parms{};

	Parms.AffectedTeam = std::move(AffectedTeam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.RefreshLists
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Lobby_PlayerList_C::RefreshLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PlayerList_C", "RefreshLists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_Lobby_PlayerList.WB_Lobby_PlayerList_C.RequireRefreshLists
// (Public, BlueprintCallable, BlueprintEvent)

void UWB_Lobby_PlayerList_C::RequireRefreshLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_Lobby_PlayerList_C", "RequireRefreshLists");

	UObject::ProcessEvent(Func, nullptr);
}

}

