#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCompatibleInfoWI

#include "Basic.hpp"

#include "ItemCompatibleInfoWI_classes.hpp"
#include "ItemCompatibleInfoWI_parameters.hpp"


namespace SDK
{

// Function ItemCompatibleInfoWI.ItemCompatibleInfoWI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCompatibleInfoWI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCompatibleInfoWI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCompatibleInfoWI.ItemCompatibleInfoWI_C.ExecuteUbergraph_ItemCompatibleInfoWI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCompatibleInfoWI_C::ExecuteUbergraph_ItemCompatibleInfoWI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCompatibleInfoWI_C", "ExecuteUbergraph_ItemCompatibleInfoWI");

	Params::ItemCompatibleInfoWI_C_ExecuteUbergraph_ItemCompatibleInfoWI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCompatibleInfoWI.ItemCompatibleInfoWI_C.SetFullyWrecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Wrecked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCompatibleInfoWI_C::SetFullyWrecked(bool Wrecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCompatibleInfoWI_C", "SetFullyWrecked");

	Params::ItemCompatibleInfoWI_C_SetFullyWrecked Parms{};

	Parms.Wrecked = Wrecked;

	UObject::ProcessEvent(Func, &Parms);
}

}

