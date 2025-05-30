#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingWI

#include "Basic.hpp"

#include "LoadingWI_classes.hpp"
#include "LoadingWI_parameters.hpp"


namespace SDK
{

// Function LoadingWI.LoadingWI_C.ExecuteUbergraph_LoadingWI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingWI_C::ExecuteUbergraph_LoadingWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "ExecuteUbergraph_LoadingWI");

	Params::LoadingWI_C_ExecuteUbergraph_LoadingWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingWI.LoadingWI_C.GetRandomTip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Return                                                 (Parm, OutParm)

void ULoadingWI_C::GetRandomTip(class FText* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "GetRandomTip");

	Params::LoadingWI_C_GetRandomTip Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}


// Function LoadingWI.LoadingWI_C.Hide
// (BlueprintCallable, BlueprintEvent)

void ULoadingWI_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingWI.LoadingWI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingWI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "PreConstruct");

	Params::LoadingWI_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingWI.LoadingWI_C.UpdateBackground
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULoadingWI_C::UpdateBackground(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "UpdateBackground");

	Params::LoadingWI_C_UpdateBackground Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingWI.LoadingWI_C.UpdateBackgroundRemoved
// (Event, Public, BlueprintEvent)

void ULoadingWI_C::UpdateBackgroundRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "UpdateBackgroundRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingWI.LoadingWI_C.UpdateMessage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoadingWI_C::UpdateMessage(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "UpdateMessage");

	Params::LoadingWI_C_UpdateMessage Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingWI.LoadingWI_C.UpdateSound
// (Event, Public, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    StopMenuMusic                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingWI_C::UpdateSound(class USoundBase* Sound, bool StopMenuMusic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "UpdateSound");

	Params::LoadingWI_C_UpdateSound Parms{};

	Parms.Sound = Sound;
	Parms.StopMenuMusic = StopMenuMusic;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingWI.LoadingWI_C.UpdateSoundLoadingScreenHidden
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    StartMenuMusic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingWI_C::UpdateSoundLoadingScreenHidden(bool StartMenuMusic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingWI_C", "UpdateSoundLoadingScreenHidden");

	Params::LoadingWI_C_UpdateSoundLoadingScreenHidden Parms{};

	Parms.StartMenuMusic = StartMenuMusic;

	UObject::ProcessEvent(Func, &Parms);
}

}

