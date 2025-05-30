#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TeamScore

#include "Basic.hpp"

#include "WI_TeamScore_classes.hpp"
#include "WI_TeamScore_parameters.hpp"


namespace SDK
{

// Function WI_TeamScore.WI_TeamScore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_TeamScore_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_TeamScore.WI_TeamScore_C.ExecuteUbergraph_WI_TeamScore
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TeamScore_C::ExecuteUbergraph_WI_TeamScore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "ExecuteUbergraph_WI_TeamScore");

	Params::WI_TeamScore_C_ExecuteUbergraph_WI_TeamScore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TeamScore.WI_TeamScore_C.OnStarted_A49F1CF64ED0F3793547CF9967F4446F
// (BlueprintCallable, BlueprintEvent)

void UWI_TeamScore_C::OnStarted_A49F1CF64ED0F3793547CF9967F4446F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "OnStarted_A49F1CF64ED0F3793547CF9967F4446F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_TeamScore.WI_TeamScore_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TeamScore_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "PreConstruct");

	Params::WI_TeamScore_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TeamScore.WI_TeamScore_C.SetScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HouseLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TeamScore_C::SetScore(int32 HouseLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "SetScore");

	Params::WI_TeamScore_C_SetScore Parms{};

	Parms.HouseLevel = HouseLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TeamScore.WI_TeamScore_C.SetTeamType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETeamType                               TeamType_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TeamScore_C::SetTeamType(ETeamType TeamType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "SetTeamType");

	Params::WI_TeamScore_C_SetTeamType Parms{};

	Parms.TeamType_0 = TeamType_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TeamScore.WI_TeamScore_C.TeamKillsUpdated
// (BlueprintCallable, BlueprintEvent)

void UWI_TeamScore_C::TeamKillsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamScore_C", "TeamKillsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

}

