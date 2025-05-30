#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWCommonUI

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK
{

// ScriptStruct IWCommonUI.IWHUDElementEntry
// 0x0030 (0x0030 - 0x0000)
struct FIWHUDElementEntry final
{
public:
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           SlotID;                                            // 0x0028(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FIWHUDElementEntry) == 0x000008, "Wrong alignment on FIWHUDElementEntry");
static_assert(sizeof(FIWHUDElementEntry) == 0x000030, "Wrong size on FIWHUDElementEntry");
static_assert(offsetof(FIWHUDElementEntry, WidgetClass) == 0x000000, "Member 'FIWHUDElementEntry::WidgetClass' has a wrong offset!");
static_assert(offsetof(FIWHUDElementEntry, SlotID) == 0x000028, "Member 'FIWHUDElementEntry::SlotID' has a wrong offset!");

// ScriptStruct IWCommonUI.IWHUDLayoutRequest
// 0x0030 (0x0030 - 0x0000)
struct FIWHUDLayoutRequest final
{
public:
	TSoftClassPtr<class UClass>                   LayoutClass;                                       // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerID;                                           // 0x0028(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FIWHUDLayoutRequest) == 0x000008, "Wrong alignment on FIWHUDLayoutRequest");
static_assert(sizeof(FIWHUDLayoutRequest) == 0x000030, "Wrong size on FIWHUDLayoutRequest");
static_assert(offsetof(FIWHUDLayoutRequest, LayoutClass) == 0x000000, "Member 'FIWHUDLayoutRequest::LayoutClass' has a wrong offset!");
static_assert(offsetof(FIWHUDLayoutRequest, LayerID) == 0x000028, "Member 'FIWHUDLayoutRequest::LayerID' has a wrong offset!");

}

