#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ProfileScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WI_BaseScreen_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_ProfileScreen.WI_ProfileScreen_C
// 0x0038 (0x0468 - 0x0430)
class UWI_ProfileScreen_C final : public UWI_BaseScreen_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWI_JPHeroButton_C*                     LinkTwitchAccountButton;                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TwitchLinkedUsername;                              // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TwitchLinkStatusMessage;                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsAuthenticated;                                   // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TwitchUsername;                                    // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void BndEvt__WI_ProfileScreen_WI_JPHeroButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WI_ProfileScreen(int32 EntryPoint);
	void HandleTwitchAuthenticated();
	void PreConstruct(bool IsDesignTime);
	void SetIsAuthenticated(bool IsAuthenticated_0);
	void SetTwitchUsername(const class FString& Username);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_ProfileScreen_C">();
	}
	static class UWI_ProfileScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_ProfileScreen_C>();
	}
};
static_assert(alignof(UWI_ProfileScreen_C) == 0x000008, "Wrong alignment on UWI_ProfileScreen_C");
static_assert(sizeof(UWI_ProfileScreen_C) == 0x000468, "Wrong size on UWI_ProfileScreen_C");
static_assert(offsetof(UWI_ProfileScreen_C, UberGraphFrame) == 0x000430, "Member 'UWI_ProfileScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_ProfileScreen_C, LinkTwitchAccountButton) == 0x000438, "Member 'UWI_ProfileScreen_C::LinkTwitchAccountButton' has a wrong offset!");
static_assert(offsetof(UWI_ProfileScreen_C, TwitchLinkedUsername) == 0x000440, "Member 'UWI_ProfileScreen_C::TwitchLinkedUsername' has a wrong offset!");
static_assert(offsetof(UWI_ProfileScreen_C, TwitchLinkStatusMessage) == 0x000448, "Member 'UWI_ProfileScreen_C::TwitchLinkStatusMessage' has a wrong offset!");
static_assert(offsetof(UWI_ProfileScreen_C, IsAuthenticated) == 0x000450, "Member 'UWI_ProfileScreen_C::IsAuthenticated' has a wrong offset!");
static_assert(offsetof(UWI_ProfileScreen_C, TwitchUsername) == 0x000458, "Member 'UWI_ProfileScreen_C::TwitchUsername' has a wrong offset!");

}

