#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_ActorWithChangeableTeam

#include "Basic.hpp"

#include "I_ActorWithChangeableTeam_classes.hpp"
#include "I_ActorWithChangeableTeam_parameters.hpp"


namespace SDK
{

// Function I_ActorWithChangeableTeam.I_ActorWithChangeableTeam_C.AddOnTeamChangedListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class II_ActorWithChangeableTeam_TeamChangedReceiver_C>Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_ActorWithChangeableTeam_C::AddOnTeamChangedListener(TScriptInterface<class II_ActorWithChangeableTeam_TeamChangedReceiver_C> Listener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_ActorWithChangeableTeam_C", "AddOnTeamChangedListener");

	Params::I_ActorWithChangeableTeam_C_AddOnTeamChangedListener Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_ActorWithChangeableTeam.I_ActorWithChangeableTeam_C.RemoveOnTeamChangedListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class II_ActorWithChangeableTeam_TeamChangedReceiver_C>Listener                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_ActorWithChangeableTeam_C::RemoveOnTeamChangedListener(TScriptInterface<class II_ActorWithChangeableTeam_TeamChangedReceiver_C> Listener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_ActorWithChangeableTeam_C", "RemoveOnTeamChangedListener");

	Params::I_ActorWithChangeableTeam_C_RemoveOnTeamChangedListener Parms{};

	Parms.Listener = Listener;

	UObject::ProcessEvent(Func, &Parms);
}

}

