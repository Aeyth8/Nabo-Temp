#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_GooseLeash

#include "Basic.hpp"

#include "GCN_GooseLeash_classes.hpp"
#include "GCN_GooseLeash_parameters.hpp"


namespace SDK
{

// Function GCN_GooseLeash.GCN_GooseLeash_C.Add Cue
// (BlueprintCallable, BlueprintEvent)

void AGCN_GooseLeash_C::Add_Cue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "Add Cue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.ExecuteUbergraph_GCN_GooseLeash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_GooseLeash_C::ExecuteUbergraph_GCN_GooseLeash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "ExecuteUbergraph_GCN_GooseLeash");

	Params::GCN_GooseLeash_C_ExecuteUbergraph_GCN_GooseLeash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCN_GooseLeash_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "OnActive");

	Params::GCN_GooseLeash_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters_0 = std::move(Parameters_0);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCN_GooseLeash_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "OnRemove");

	Params::GCN_GooseLeash_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters_0 = std::move(Parameters_0);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.PlaySoundAttached
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*                  AudioComponent                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AGCN_GooseLeash_C::PlaySoundAttached(class USoundBase* Sound, class UAudioComponent** AudioComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "PlaySoundAttached");

	Params::GCN_GooseLeash_C_PlaySoundAttached Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioComponent != nullptr)
		*AudioComponent = Parms.AudioComponent;
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_GooseLeash_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "ReceiveTick");

	Params::GCN_GooseLeash_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.Remove Cue
// (BlueprintCallable, BlueprintEvent)

void AGCN_GooseLeash_C::Remove_Cue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "Remove Cue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_GooseLeash.GCN_GooseLeash_C.SetCableEndLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGCN_GooseLeash_C::SetCableEndLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_GooseLeash_C", "SetCableEndLocation");

	UObject::ProcessEvent(Func, nullptr);
}

}

