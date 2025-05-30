#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TeamStatusBar_Team_HouseEssentialsEntry

#include "Basic.hpp"

#include "WI_TeamStatusBar_Team_HouseEssentialsEntry_classes.hpp"
#include "WI_TeamStatusBar_Team_HouseEssentialsEntry_parameters.hpp"


namespace SDK
{

// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.ExecuteUbergraph_WI_TeamStatusBar_Team_HouseEssentialsEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::ExecuteUbergraph_WI_TeamStatusBar_Team_HouseEssentialsEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "ExecuteUbergraph_WI_TeamStatusBar_Team_HouseEssentialsEntry");

	Params::WI_TeamStatusBar_Team_HouseEssentialsEntry_C_ExecuteUbergraph_WI_TeamStatusBar_Team_HouseEssentialsEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.GetIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        IconSoftObject                                         (Parm, OutParm, UObjectWrapper, HasGetValueTypeHash)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::GetIcon(TSoftObjectPtr<class UTexture2D>* IconSoftObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "GetIcon");

	Params::WI_TeamStatusBar_Team_HouseEssentialsEntry_C_GetIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IconSoftObject != nullptr)
		*IconSoftObject = Parms.IconSoftObject;
}


// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "PreConstruct");

	Params::WI_TeamStatusBar_Team_HouseEssentialsEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.Update
// (BlueprintCallable, BlueprintEvent)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.UpdateHouseEssentialBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::UpdateHouseEssentialBackground()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "UpdateHouseEssentialBackground");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.UpdateHouseEssentialIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::UpdateHouseEssentialIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "UpdateHouseEssentialIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_TeamStatusBar_Team_HouseEssentialsEntry.WI_TeamStatusBar_Team_HouseEssentialsEntry_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWI_TeamStatusBar_Team_HouseEssentialsEntry_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_TeamStatusBar_Team_HouseEssentialsEntry_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

