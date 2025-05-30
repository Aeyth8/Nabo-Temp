#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PreLobby_Loading

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_PreLobby_Loading.WI_PreLobby_Loading_C
// 0x0008 (0x0438 - 0x0430)
class UWI_PreLobby_Loading_C final : public UCommonActivatableWidget
{
public:
	class UWI_OverlayBlurSpinner_C*               WI_OverlayBlurSpinner;                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_PreLobby_Loading_C">();
	}
	static class UWI_PreLobby_Loading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_PreLobby_Loading_C>();
	}
};
static_assert(alignof(UWI_PreLobby_Loading_C) == 0x000008, "Wrong alignment on UWI_PreLobby_Loading_C");
static_assert(sizeof(UWI_PreLobby_Loading_C) == 0x000438, "Wrong size on UWI_PreLobby_Loading_C");
static_assert(offsetof(UWI_PreLobby_Loading_C, WI_OverlayBlurSpinner) == 0x000430, "Member 'UWI_PreLobby_Loading_C::WI_OverlayBlurSpinner' has a wrong offset!");

}

