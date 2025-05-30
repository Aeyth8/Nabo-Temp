#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainMenuAudioManager

#include "Basic.hpp"

#include "BP_MainMenuAudioManager_classes.hpp"
#include "BP_MainMenuAudioManager_parameters.hpp"


namespace SDK
{

// Function BP_MainMenuAudioManager.BP_MainMenuAudioManager_C.PlayAreaEnterSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       AmbienceSound                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenuAudioManager_C::PlayAreaEnterSound(class USoundBase* AmbienceSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainMenuAudioManager_C", "PlayAreaEnterSound");

	Params::BP_MainMenuAudioManager_C_PlayAreaEnterSound Parms{};

	Parms.AmbienceSound = AmbienceSound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MainMenuAudioManager.BP_MainMenuAudioManager_C.PlayAreaAmbienceSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       AmbienceSound                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MainMenuAudioManager_C::PlayAreaAmbienceSound(class USoundBase* AmbienceSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainMenuAudioManager_C", "PlayAreaAmbienceSound");

	Params::BP_MainMenuAudioManager_C_PlayAreaAmbienceSound Parms{};

	Parms.AmbienceSound = AmbienceSound;

	UObject::ProcessEvent(Func, &Parms);
}

}

