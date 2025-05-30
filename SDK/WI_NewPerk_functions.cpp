#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_NewPerk

#include "Basic.hpp"

#include "WI_NewPerk_classes.hpp"
#include "WI_NewPerk_parameters.hpp"


namespace SDK
{

// Function WI_NewPerk.WI_NewPerk_C.ExecuteUbergraph_WI_NewPerk
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_NewPerk_C::ExecuteUbergraph_WI_NewPerk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewPerk_C", "ExecuteUbergraph_WI_NewPerk");

	Params::WI_NewPerk_C_ExecuteUbergraph_WI_NewPerk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewPerk.WI_NewPerk_C.SetCost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_NewPerk_C::SetCost(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewPerk_C", "SetCost");

	Params::WI_NewPerk_C_SetCost Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewPerk.WI_NewPerk_C.SetDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_NewPerk_C::SetDescription(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewPerk_C", "SetDescription");

	Params::WI_NewPerk_C_SetDescription Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewPerk.WI_NewPerk_C.SetDescriptionHeader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_NewPerk_C::SetDescriptionHeader(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewPerk_C", "SetDescriptionHeader");

	Params::WI_NewPerk_C_SetDescriptionHeader Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewPerk.WI_NewPerk_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Image_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWI_NewPerk_C::SetImage(TSoftObjectPtr<class UTexture2D> Image_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewPerk_C", "SetImage");

	Params::WI_NewPerk_C_SetImage Parms{};

	Parms.Image_0 = Image_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_NewPerk.WI_NewPerk_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWI_NewPerk_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_NewPerk_C", "SetName");

	Params::WI_NewPerk_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

