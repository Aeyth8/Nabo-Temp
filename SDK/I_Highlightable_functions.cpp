#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Highlightable

#include "Basic.hpp"

#include "I_Highlightable_classes.hpp"


namespace SDK
{

// Function I_Highlightable.I_Highlightable_C.ItemHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void II_Highlightable_C::ItemHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_Highlightable_C", "ItemHighlight");

	UObject::ProcessEvent(Func, nullptr);
}

}

