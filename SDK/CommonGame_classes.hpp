#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonGame

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ModularGameplayActors_classes.hpp"
#include "CommonUser_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "InputCore_structs.hpp"
#include "CommonGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonUI_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class CommonGame.AsyncAction_CreateWidgetAsync
// 0x0070 (0x00A0 - 0x0030)
class UAsyncAction_CreateWidgetAsync final : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_             OnComplete;                                        // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x60];                                      // 0x0040(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAsyncAction_CreateWidgetAsync* CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<class UClass> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_CreateWidgetAsync">();
	}
	static class UAsyncAction_CreateWidgetAsync* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_CreateWidgetAsync>();
	}
};
static_assert(alignof(UAsyncAction_CreateWidgetAsync) == 0x000008, "Wrong alignment on UAsyncAction_CreateWidgetAsync");
static_assert(sizeof(UAsyncAction_CreateWidgetAsync) == 0x0000A0, "Wrong size on UAsyncAction_CreateWidgetAsync");
static_assert(offsetof(UAsyncAction_CreateWidgetAsync, OnComplete) == 0x000030, "Member 'UAsyncAction_CreateWidgetAsync::OnComplete' has a wrong offset!");

// Class CommonGame.AsyncAction_PushContentToLayerForPlayer
// 0x0070 (0x00A0 - 0x0030)
class UAsyncAction_PushContentToLayerForPlayer final : public UCancellableAsyncAction
{
public:
	FMulticastInlineDelegateProperty_             BeforePush;                                        // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             AfterPush;                                         // 0x0040(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x50];                                      // 0x0050(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UAsyncAction_PushContentToLayerForPlayer* PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<class UClass> WidgetClass, const struct FGameplayTag& LayerName, bool bSuspendInputUntilComplete);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_PushContentToLayerForPlayer">();
	}
	static class UAsyncAction_PushContentToLayerForPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_PushContentToLayerForPlayer>();
	}
};
static_assert(alignof(UAsyncAction_PushContentToLayerForPlayer) == 0x000008, "Wrong alignment on UAsyncAction_PushContentToLayerForPlayer");
static_assert(sizeof(UAsyncAction_PushContentToLayerForPlayer) == 0x0000A0, "Wrong size on UAsyncAction_PushContentToLayerForPlayer");
static_assert(offsetof(UAsyncAction_PushContentToLayerForPlayer, BeforePush) == 0x000030, "Member 'UAsyncAction_PushContentToLayerForPlayer::BeforePush' has a wrong offset!");
static_assert(offsetof(UAsyncAction_PushContentToLayerForPlayer, AfterPush) == 0x000040, "Member 'UAsyncAction_PushContentToLayerForPlayer::AfterPush' has a wrong offset!");

// Class CommonGame.AsyncAction_ShowConfirmation
// 0x0028 (0x0058 - 0x0030)
class UAsyncAction_ShowConfirmation final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             OnResult;                                          // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                                WorldContextObject;                                // 0x0040(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                           TargetLocalPlayer;                                 // 0x0048(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonGameDialogDescriptor*            Descriptor;                                        // 0x0050(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UAsyncAction_ShowConfirmation* ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Descriptor_0);
	static class UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(class UObject* InWorldContextObject, const class FText& Title, const class FText& Message);
	static class UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(class UObject* InWorldContextObject, const class FText& Title, const class FText& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncAction_ShowConfirmation">();
	}
	static class UAsyncAction_ShowConfirmation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncAction_ShowConfirmation>();
	}
};
static_assert(alignof(UAsyncAction_ShowConfirmation) == 0x000008, "Wrong alignment on UAsyncAction_ShowConfirmation");
static_assert(sizeof(UAsyncAction_ShowConfirmation) == 0x000058, "Wrong size on UAsyncAction_ShowConfirmation");
static_assert(offsetof(UAsyncAction_ShowConfirmation, OnResult) == 0x000030, "Member 'UAsyncAction_ShowConfirmation::OnResult' has a wrong offset!");
static_assert(offsetof(UAsyncAction_ShowConfirmation, WorldContextObject) == 0x000040, "Member 'UAsyncAction_ShowConfirmation::WorldContextObject' has a wrong offset!");
static_assert(offsetof(UAsyncAction_ShowConfirmation, TargetLocalPlayer) == 0x000048, "Member 'UAsyncAction_ShowConfirmation::TargetLocalPlayer' has a wrong offset!");
static_assert(offsetof(UAsyncAction_ShowConfirmation, Descriptor) == 0x000050, "Member 'UAsyncAction_ShowConfirmation::Descriptor' has a wrong offset!");

// Class CommonGame.CommonGameInstance
// 0x0010 (0x01D0 - 0x01C0)
class UCommonGameInstance : public UGameInstance
{
public:
	uint8                                         Pad_1C0[0x8];                                      // 0x01C0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonSession_SearchResult*            RequestedSession;                                  // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void HandlePrivilegeChanged(const class UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability);
	void HandleSystemMessage(const struct FGameplayTag& MessageType, const class FText& Title, const class FText& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameInstance">();
	}
	static class UCommonGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameInstance>();
	}
};
static_assert(alignof(UCommonGameInstance) == 0x000008, "Wrong alignment on UCommonGameInstance");
static_assert(sizeof(UCommonGameInstance) == 0x0001D0, "Wrong size on UCommonGameInstance");
static_assert(offsetof(UCommonGameInstance, RequestedSession) == 0x0001C8, "Member 'UCommonGameInstance::RequestedSession' has a wrong offset!");

// Class CommonGame.CommonLocalPlayer
// 0x0050 (0x0300 - 0x02B0)
class UCommonLocalPlayer : public ULocalPlayer
{
public:
	uint8                                         Pad_2B0[0x50];                                     // 0x02B0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonLocalPlayer">();
	}
	static class UCommonLocalPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonLocalPlayer>();
	}
};
static_assert(alignof(UCommonLocalPlayer) == 0x000008, "Wrong alignment on UCommonLocalPlayer");
static_assert(sizeof(UCommonLocalPlayer) == 0x000300, "Wrong size on UCommonLocalPlayer");

// Class CommonGame.CommonPlayerController
// 0x0000 (0x0858 - 0x0858)
class ACommonPlayerController : public AModularPlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPlayerController">();
	}
	static class ACommonPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACommonPlayerController>();
	}
};
static_assert(alignof(ACommonPlayerController) == 0x000008, "Wrong alignment on ACommonPlayerController");
static_assert(sizeof(ACommonPlayerController) == 0x000858, "Wrong size on ACommonPlayerController");

// Class CommonGame.CommonPlayerInputKey
// 0x0438 (0x0740 - 0x0308)
class UCommonPlayerInputKey final : public UCommonUserWidget
{
public:
	class FName                                   BoundAction;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AxisScale;                                         // 0x0310(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_314[0x4];                                      // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   BoundKeyFallback;                                  // 0x0318(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              InputTypeOverride;                                 // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_331[0x3];                                      // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PresetNameOverride;                                // 0x0334(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonKeybindForcedHoldStatus                ForcedHoldKeybindStatus;                           // 0x033C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsHoldKeybind;                                    // 0x033D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShowKeybindBorder;                                // 0x033E(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_33F[0x1];                                      // 0x033F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FrameSize;                                         // 0x0340(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShowTimeCountDown;                                // 0x0350(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_351[0x7];                                      // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   BoundKey;                                          // 0x0358(0x0018)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                            HoldProgressBrush;                                 // 0x0370(0x00D0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                            KeyBindTextBorder;                                 // 0x0440(0x00D0)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                          bShowUnboundStatus;                                // 0x0510(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_511[0x7];                                      // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         KeyBindTextFont;                                   // 0x0518(0x0060)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                         CountdownTextFont;                                 // 0x0578(0x0060)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMeasuredText                          CountdownText;                                     // 0x05D8(0x0028)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMeasuredText                          KeybindText;                                       // 0x0600(0x0028)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FMargin                                KeybindTextPadding;                                // 0x0628(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                              KeybindFrameMinimumSize;                           // 0x0638(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   PercentageMaterialParameterName;                   // 0x0648(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               ProgressPercentageMID;                             // 0x0650(0x0008)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_658[0x18];                                     // 0x0658(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CachedKeyBrush;                                    // 0x0670(0x00D0)(Transient, NativeAccessSpecifierPrivate)

public:
	void SetAxisScale(const float NewValue);
	void SetBoundAction(class FName NewBoundAction);
	void SetBoundKey(const struct FKey& NewBoundAction);
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus);
	void SetPresetNameOverride(const class FName NewValue);
	void SetShowProgressCountDown(bool bShow);
	void StartHoldProgress(class FName HoldActionName, float HoldDuration);
	void StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully);
	void UpdateKeybindWidget();

	bool IsBoundKeyValid() const;
	bool IsHoldKeybind() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPlayerInputKey">();
	}
	static class UCommonPlayerInputKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPlayerInputKey>();
	}
};
static_assert(alignof(UCommonPlayerInputKey) == 0x000010, "Wrong alignment on UCommonPlayerInputKey");
static_assert(sizeof(UCommonPlayerInputKey) == 0x000740, "Wrong size on UCommonPlayerInputKey");
static_assert(offsetof(UCommonPlayerInputKey, BoundAction) == 0x000308, "Member 'UCommonPlayerInputKey::BoundAction' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, AxisScale) == 0x000310, "Member 'UCommonPlayerInputKey::AxisScale' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, BoundKeyFallback) == 0x000318, "Member 'UCommonPlayerInputKey::BoundKeyFallback' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, InputTypeOverride) == 0x000330, "Member 'UCommonPlayerInputKey::InputTypeOverride' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, PresetNameOverride) == 0x000334, "Member 'UCommonPlayerInputKey::PresetNameOverride' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, ForcedHoldKeybindStatus) == 0x00033C, "Member 'UCommonPlayerInputKey::ForcedHoldKeybindStatus' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bIsHoldKeybind) == 0x00033D, "Member 'UCommonPlayerInputKey::bIsHoldKeybind' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bShowKeybindBorder) == 0x00033E, "Member 'UCommonPlayerInputKey::bShowKeybindBorder' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, FrameSize) == 0x000340, "Member 'UCommonPlayerInputKey::FrameSize' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bShowTimeCountDown) == 0x000350, "Member 'UCommonPlayerInputKey::bShowTimeCountDown' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, BoundKey) == 0x000358, "Member 'UCommonPlayerInputKey::BoundKey' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, HoldProgressBrush) == 0x000370, "Member 'UCommonPlayerInputKey::HoldProgressBrush' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeyBindTextBorder) == 0x000440, "Member 'UCommonPlayerInputKey::KeyBindTextBorder' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, bShowUnboundStatus) == 0x000510, "Member 'UCommonPlayerInputKey::bShowUnboundStatus' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeyBindTextFont) == 0x000518, "Member 'UCommonPlayerInputKey::KeyBindTextFont' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, CountdownTextFont) == 0x000578, "Member 'UCommonPlayerInputKey::CountdownTextFont' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, CountdownText) == 0x0005D8, "Member 'UCommonPlayerInputKey::CountdownText' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeybindText) == 0x000600, "Member 'UCommonPlayerInputKey::KeybindText' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeybindTextPadding) == 0x000628, "Member 'UCommonPlayerInputKey::KeybindTextPadding' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, KeybindFrameMinimumSize) == 0x000638, "Member 'UCommonPlayerInputKey::KeybindFrameMinimumSize' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, PercentageMaterialParameterName) == 0x000648, "Member 'UCommonPlayerInputKey::PercentageMaterialParameterName' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, ProgressPercentageMID) == 0x000650, "Member 'UCommonPlayerInputKey::ProgressPercentageMID' has a wrong offset!");
static_assert(offsetof(UCommonPlayerInputKey, CachedKeyBrush) == 0x000670, "Member 'UCommonPlayerInputKey::CachedKeyBrush' has a wrong offset!");

// Class CommonGame.CommonUIExtensions
// 0x0000 (0x0028 - 0x0028)
class UCommonUIExtensions final : public UBlueprintFunctionLibrary
{
public:
	static class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* PlayerController);
	static ECommonInputType GetOwningPlayerInputType(const class UUserWidget* WidgetContextObject);
	static bool IsOwningPlayerUsingGamepad(const class UUserWidget* WidgetContextObject);
	static bool IsOwningPlayerUsingTouch(const class UUserWidget* WidgetContextObject);
	static void PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget);
	static class UCommonActivatableWidget* PushContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass);
	static void PushStreamedContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSoftClassPtr<class UClass> WidgetClass);
	static void ResumeInputForPlayer(class APlayerController* PlayerController, class FName SuspendToken);
	static class FName SuspendInputForPlayer(class APlayerController* PlayerController, class FName SuspendReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIExtensions">();
	}
	static class UCommonUIExtensions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIExtensions>();
	}
};
static_assert(alignof(UCommonUIExtensions) == 0x000008, "Wrong alignment on UCommonUIExtensions");
static_assert(sizeof(UCommonUIExtensions) == 0x000028, "Wrong size on UCommonUIExtensions");

// Class CommonGame.GameUIManagerSubsystem
// 0x0030 (0x0060 - 0x0030)
class UGameUIManagerSubsystem : public UGameInstanceSubsystem
{
public:
	class UGameUIPolicy*                          CurrentPolicy;                                     // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UClass>                   DefaultUIPolicyClass;                              // 0x0038(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameUIManagerSubsystem">();
	}
	static class UGameUIManagerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUIManagerSubsystem>();
	}
};
static_assert(alignof(UGameUIManagerSubsystem) == 0x000008, "Wrong alignment on UGameUIManagerSubsystem");
static_assert(sizeof(UGameUIManagerSubsystem) == 0x000060, "Wrong size on UGameUIManagerSubsystem");
static_assert(offsetof(UGameUIManagerSubsystem, CurrentPolicy) == 0x000030, "Member 'UGameUIManagerSubsystem::CurrentPolicy' has a wrong offset!");
static_assert(offsetof(UGameUIManagerSubsystem, DefaultUIPolicyClass) == 0x000038, "Member 'UGameUIManagerSubsystem::DefaultUIPolicyClass' has a wrong offset!");

// Class CommonGame.GameUIPolicy
// 0x0040 (0x0068 - 0x0028)
class UGameUIPolicy : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   LayoutClass;                                       // 0x0030(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRootViewportLayoutInfo>        RootViewportLayouts;                               // 0x0058(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameUIPolicy">();
	}
	static class UGameUIPolicy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUIPolicy>();
	}
};
static_assert(alignof(UGameUIPolicy) == 0x000008, "Wrong alignment on UGameUIPolicy");
static_assert(sizeof(UGameUIPolicy) == 0x000068, "Wrong size on UGameUIPolicy");
static_assert(offsetof(UGameUIPolicy, LayoutClass) == 0x000030, "Member 'UGameUIPolicy::LayoutClass' has a wrong offset!");
static_assert(offsetof(UGameUIPolicy, RootViewportLayouts) == 0x000058, "Member 'UGameUIPolicy::RootViewportLayouts' has a wrong offset!");

// Class CommonGame.CommonGameDialogDescriptor
// 0x0030 (0x0058 - 0x0028)
class UCommonGameDialogDescriptor final : public UObject
{
public:
	class FText                                   Header;                                            // 0x0028(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                   Body;                                              // 0x0038(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FConfirmationDialogAction>      ButtonActions;                                     // 0x0048(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameDialogDescriptor">();
	}
	static class UCommonGameDialogDescriptor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameDialogDescriptor>();
	}
};
static_assert(alignof(UCommonGameDialogDescriptor) == 0x000008, "Wrong alignment on UCommonGameDialogDescriptor");
static_assert(sizeof(UCommonGameDialogDescriptor) == 0x000058, "Wrong size on UCommonGameDialogDescriptor");
static_assert(offsetof(UCommonGameDialogDescriptor, Header) == 0x000028, "Member 'UCommonGameDialogDescriptor::Header' has a wrong offset!");
static_assert(offsetof(UCommonGameDialogDescriptor, Body) == 0x000038, "Member 'UCommonGameDialogDescriptor::Body' has a wrong offset!");
static_assert(offsetof(UCommonGameDialogDescriptor, ButtonActions) == 0x000048, "Member 'UCommonGameDialogDescriptor::ButtonActions' has a wrong offset!");

// Class CommonGame.CommonGameDialog
// 0x0000 (0x0430 - 0x0430)
class UCommonGameDialog : public UCommonActivatableWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGameDialog">();
	}
	static class UCommonGameDialog* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGameDialog>();
	}
};
static_assert(alignof(UCommonGameDialog) == 0x000008, "Wrong alignment on UCommonGameDialog");
static_assert(sizeof(UCommonGameDialog) == 0x000430, "Wrong size on UCommonGameDialog");

// Class CommonGame.CommonMessagingSubsystem
// 0x0000 (0x0030 - 0x0030)
class UCommonMessagingSubsystem : public ULocalPlayerSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonMessagingSubsystem">();
	}
	static class UCommonMessagingSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonMessagingSubsystem>();
	}
};
static_assert(alignof(UCommonMessagingSubsystem) == 0x000008, "Wrong alignment on UCommonMessagingSubsystem");
static_assert(sizeof(UCommonMessagingSubsystem) == 0x000030, "Wrong size on UCommonMessagingSubsystem");

// Class CommonGame.PrimaryGameLayout
// 0x0068 (0x0370 - 0x0308)
class UPrimaryGameLayout : public UCommonUserWidget
{
public:
	uint8                                         Pad_308[0x18];                                     // 0x0308(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FGameplayTag, class UCommonActivatableWidgetContainerBase*> Layers;                                            // 0x0320(0x0050)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	void RegisterLayer(const struct FGameplayTag& LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimaryGameLayout">();
	}
	static class UPrimaryGameLayout* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimaryGameLayout>();
	}
};
static_assert(alignof(UPrimaryGameLayout) == 0x000008, "Wrong alignment on UPrimaryGameLayout");
static_assert(sizeof(UPrimaryGameLayout) == 0x000370, "Wrong size on UPrimaryGameLayout");
static_assert(offsetof(UPrimaryGameLayout, Layers) == 0x000320, "Member 'UPrimaryGameLayout::Layers' has a wrong offset!");

}

