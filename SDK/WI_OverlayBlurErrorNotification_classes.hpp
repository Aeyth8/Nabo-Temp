#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_OverlayBlurErrorNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WI_OverlayBlurErrorNotification.WI_OverlayBlurErrorNotification_C
// 0x0040 (0x0470 - 0x0430)
class UWI_OverlayBlurErrorNotification_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       BodyText;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       HeaderText;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWI_JPButton_C*                         WI_JPButton;                                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Header;                                            // 0x0450(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Body;                                              // 0x0460(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void BndEvt__WI_OverlayBlurErrorNotification_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WI_OverlayBlurErrorNotification(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetBodyText(const class FText& Body_0);
	void SetHeaderText(const class FText& Header_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WI_OverlayBlurErrorNotification_C">();
	}
	static class UWI_OverlayBlurErrorNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWI_OverlayBlurErrorNotification_C>();
	}
};
static_assert(alignof(UWI_OverlayBlurErrorNotification_C) == 0x000008, "Wrong alignment on UWI_OverlayBlurErrorNotification_C");
static_assert(sizeof(UWI_OverlayBlurErrorNotification_C) == 0x000470, "Wrong size on UWI_OverlayBlurErrorNotification_C");
static_assert(offsetof(UWI_OverlayBlurErrorNotification_C, UberGraphFrame) == 0x000430, "Member 'UWI_OverlayBlurErrorNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWI_OverlayBlurErrorNotification_C, BodyText) == 0x000438, "Member 'UWI_OverlayBlurErrorNotification_C::BodyText' has a wrong offset!");
static_assert(offsetof(UWI_OverlayBlurErrorNotification_C, HeaderText) == 0x000440, "Member 'UWI_OverlayBlurErrorNotification_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UWI_OverlayBlurErrorNotification_C, WI_JPButton) == 0x000448, "Member 'UWI_OverlayBlurErrorNotification_C::WI_JPButton' has a wrong offset!");
static_assert(offsetof(UWI_OverlayBlurErrorNotification_C, Header) == 0x000450, "Member 'UWI_OverlayBlurErrorNotification_C::Header' has a wrong offset!");
static_assert(offsetof(UWI_OverlayBlurErrorNotification_C, Body) == 0x000460, "Member 'UWI_OverlayBlurErrorNotification_C::Body' has a wrong offset!");

}

