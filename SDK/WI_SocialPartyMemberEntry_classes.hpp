#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_SocialPartyMemberEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "JP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_SocialPartyMemberEntry.WI_SocialPartyMemberEntry_C
// 0x0008 (0x0358 - 0x0350)
class UWI_SocialPartyMemberEntry_C final : public USocialPartyMemberEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_WI_SocialPartyMemberEntry(int32 EntryPoint);
	void GetLocalizedStatusInfo(class FText* StatusText, struct FLinearColor* Color);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_SocialPartyMemberEntry_C">();
	}
	static class UWI_SocialPartyMemberEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_SocialPartyMemberEntry_C>();
	}
};
static_assert(alignof(UWI_SocialPartyMemberEntry_C) == 0x000008, "Wrong alignment on UWI_SocialPartyMemberEntry_C");
static_assert(sizeof(UWI_SocialPartyMemberEntry_C) == 0x000358, "Wrong size on UWI_SocialPartyMemberEntry_C");
static_assert(offsetof(UWI_SocialPartyMemberEntry_C, UberGraphFrame) == 0x000350, "Member 'UWI_SocialPartyMemberEntry_C::UberGraphFrame' has a wrong offset!");

}

