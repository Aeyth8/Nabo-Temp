#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPConfirmationDefault

#include "Basic.hpp"

#include "WI_JPConfirmationDialogBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_JPConfirmationDefault.WI_JPConfirmationDefault_C
// 0x0000 (0x0488 - 0x0488)
class UWI_JPConfirmationDefault_C final : public UWI_JPConfirmationDialogBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_JPConfirmationDefault_C">();
	}
	static class UWI_JPConfirmationDefault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_JPConfirmationDefault_C>();
	}
};
static_assert(alignof(UWI_JPConfirmationDefault_C) == 0x000008, "Wrong alignment on UWI_JPConfirmationDefault_C");
static_assert(sizeof(UWI_JPConfirmationDefault_C) == 0x000488, "Wrong size on UWI_JPConfirmationDefault_C");

}

