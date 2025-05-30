#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonGame

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CommonUser_structs.hpp"
#include "CommonGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function CommonGame.AsyncAction_CreateWidgetAsync.CreateWidgetAsync
// 0x0048 (0x0048 - 0x0000)
struct AsyncAction_CreateWidgetAsync_CreateWidgetAsync final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   UserWidgetSoftClass;                               // 0x0008(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                      OwningPlayer;                                      // 0x0030(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuspendInputUntilComplete;                        // 0x0038(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_CreateWidgetAsync*         ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync) == 0x000008, "Wrong alignment on AsyncAction_CreateWidgetAsync_CreateWidgetAsync");
static_assert(sizeof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync) == 0x000048, "Wrong size on AsyncAction_CreateWidgetAsync_CreateWidgetAsync");
static_assert(offsetof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync, WorldContextObject) == 0x000000, "Member 'AsyncAction_CreateWidgetAsync_CreateWidgetAsync::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync, UserWidgetSoftClass) == 0x000008, "Member 'AsyncAction_CreateWidgetAsync_CreateWidgetAsync::UserWidgetSoftClass' has a wrong offset!");
static_assert(offsetof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync, OwningPlayer) == 0x000030, "Member 'AsyncAction_CreateWidgetAsync_CreateWidgetAsync::OwningPlayer' has a wrong offset!");
static_assert(offsetof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync, bSuspendInputUntilComplete) == 0x000038, "Member 'AsyncAction_CreateWidgetAsync_CreateWidgetAsync::bSuspendInputUntilComplete' has a wrong offset!");
static_assert(offsetof(AsyncAction_CreateWidgetAsync_CreateWidgetAsync, ReturnValue) == 0x000040, "Member 'AsyncAction_CreateWidgetAsync_CreateWidgetAsync::ReturnValue' has a wrong offset!");

// Function CommonGame.AsyncAction_PushContentToLayerForPlayer.PushContentToLayerForPlayer
// 0x0048 (0x0048 - 0x0000)
struct AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer final
{
public:
	class APlayerController*                      OwningPlayer;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0008(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerName;                                         // 0x0030(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuspendInputUntilComplete;                        // 0x0038(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_PushContentToLayerForPlayer* ReturnValue;                                       // 0x0040(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer) == 0x000008, "Wrong alignment on AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer");
static_assert(sizeof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer) == 0x000048, "Wrong size on AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer");
static_assert(offsetof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer, OwningPlayer) == 0x000000, "Member 'AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer::OwningPlayer' has a wrong offset!");
static_assert(offsetof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer, WidgetClass) == 0x000008, "Member 'AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer::WidgetClass' has a wrong offset!");
static_assert(offsetof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer, LayerName) == 0x000030, "Member 'AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer::LayerName' has a wrong offset!");
static_assert(offsetof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer, bSuspendInputUntilComplete) == 0x000038, "Member 'AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer::bSuspendInputUntilComplete' has a wrong offset!");
static_assert(offsetof(AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer, ReturnValue) == 0x000040, "Member 'AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer::ReturnValue' has a wrong offset!");

// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationCustom
// 0x0018 (0x0018 - 0x0000)
struct AsyncAction_ShowConfirmation_ShowConfirmationCustom final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonGameDialogDescriptor*            Descriptor_0;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*          ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_ShowConfirmation_ShowConfirmationCustom) == 0x000008, "Wrong alignment on AsyncAction_ShowConfirmation_ShowConfirmationCustom");
static_assert(sizeof(AsyncAction_ShowConfirmation_ShowConfirmationCustom) == 0x000018, "Wrong size on AsyncAction_ShowConfirmation_ShowConfirmationCustom");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationCustom, InWorldContextObject) == 0x000000, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationCustom::InWorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationCustom, Descriptor_0) == 0x000008, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationCustom::Descriptor_0' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationCustom, ReturnValue) == 0x000010, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationCustom::ReturnValue' has a wrong offset!");

// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationOkCancel
// 0x0030 (0x0030 - 0x0000)
struct AsyncAction_ShowConfirmation_ShowConfirmationOkCancel final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0018(0x0010)(Parm, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*          ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_ShowConfirmation_ShowConfirmationOkCancel) == 0x000008, "Wrong alignment on AsyncAction_ShowConfirmation_ShowConfirmationOkCancel");
static_assert(sizeof(AsyncAction_ShowConfirmation_ShowConfirmationOkCancel) == 0x000030, "Wrong size on AsyncAction_ShowConfirmation_ShowConfirmationOkCancel");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationOkCancel, InWorldContextObject) == 0x000000, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationOkCancel::InWorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationOkCancel, Title) == 0x000008, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationOkCancel::Title' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationOkCancel, Message) == 0x000018, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationOkCancel::Message' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationOkCancel, ReturnValue) == 0x000028, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationOkCancel::ReturnValue' has a wrong offset!");

// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationYesNo
// 0x0030 (0x0030 - 0x0000)
struct AsyncAction_ShowConfirmation_ShowConfirmationYesNo final
{
public:
	class UObject*                                InWorldContextObject;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0018(0x0010)(Parm, NativeAccessSpecifierPublic)
	class UAsyncAction_ShowConfirmation*          ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AsyncAction_ShowConfirmation_ShowConfirmationYesNo) == 0x000008, "Wrong alignment on AsyncAction_ShowConfirmation_ShowConfirmationYesNo");
static_assert(sizeof(AsyncAction_ShowConfirmation_ShowConfirmationYesNo) == 0x000030, "Wrong size on AsyncAction_ShowConfirmation_ShowConfirmationYesNo");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationYesNo, InWorldContextObject) == 0x000000, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationYesNo::InWorldContextObject' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationYesNo, Title) == 0x000008, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationYesNo::Title' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationYesNo, Message) == 0x000018, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationYesNo::Message' has a wrong offset!");
static_assert(offsetof(AsyncAction_ShowConfirmation_ShowConfirmationYesNo, ReturnValue) == 0x000028, "Member 'AsyncAction_ShowConfirmation_ShowConfirmationYesNo::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonGameInstance.HandlePrivilegeChanged
// 0x0010 (0x0010 - 0x0000)
struct CommonGameInstance_HandlePrivilegeChanged final
{
public:
	const class UCommonUserInfo*                  UserInfo;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserPrivilege                          Privilege;                                         // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserAvailability                       OldAvailability;                                   // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonUserAvailability                       NewAvailability;                                   // 0x000A(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CommonGameInstance_HandlePrivilegeChanged) == 0x000008, "Wrong alignment on CommonGameInstance_HandlePrivilegeChanged");
static_assert(sizeof(CommonGameInstance_HandlePrivilegeChanged) == 0x000010, "Wrong size on CommonGameInstance_HandlePrivilegeChanged");
static_assert(offsetof(CommonGameInstance_HandlePrivilegeChanged, UserInfo) == 0x000000, "Member 'CommonGameInstance_HandlePrivilegeChanged::UserInfo' has a wrong offset!");
static_assert(offsetof(CommonGameInstance_HandlePrivilegeChanged, Privilege) == 0x000008, "Member 'CommonGameInstance_HandlePrivilegeChanged::Privilege' has a wrong offset!");
static_assert(offsetof(CommonGameInstance_HandlePrivilegeChanged, OldAvailability) == 0x000009, "Member 'CommonGameInstance_HandlePrivilegeChanged::OldAvailability' has a wrong offset!");
static_assert(offsetof(CommonGameInstance_HandlePrivilegeChanged, NewAvailability) == 0x00000A, "Member 'CommonGameInstance_HandlePrivilegeChanged::NewAvailability' has a wrong offset!");

// Function CommonGame.CommonGameInstance.HandleSystemMessage
// 0x0028 (0x0028 - 0x0000)
struct CommonGameInstance_HandleSystemMessage final
{
public:
	struct FGameplayTag                           MessageType;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0008(0x0010)(Parm, NativeAccessSpecifierPublic)
	class FText                                   Message;                                           // 0x0018(0x0010)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonGameInstance_HandleSystemMessage) == 0x000008, "Wrong alignment on CommonGameInstance_HandleSystemMessage");
static_assert(sizeof(CommonGameInstance_HandleSystemMessage) == 0x000028, "Wrong size on CommonGameInstance_HandleSystemMessage");
static_assert(offsetof(CommonGameInstance_HandleSystemMessage, MessageType) == 0x000000, "Member 'CommonGameInstance_HandleSystemMessage::MessageType' has a wrong offset!");
static_assert(offsetof(CommonGameInstance_HandleSystemMessage, Title) == 0x000008, "Member 'CommonGameInstance_HandleSystemMessage::Title' has a wrong offset!");
static_assert(offsetof(CommonGameInstance_HandleSystemMessage, Message) == 0x000018, "Member 'CommonGameInstance_HandleSystemMessage::Message' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetAxisScale
// 0x0004 (0x0004 - 0x0000)
struct CommonPlayerInputKey_SetAxisScale final
{
public:
	float                                         NewValue;                                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetAxisScale) == 0x000004, "Wrong alignment on CommonPlayerInputKey_SetAxisScale");
static_assert(sizeof(CommonPlayerInputKey_SetAxisScale) == 0x000004, "Wrong size on CommonPlayerInputKey_SetAxisScale");
static_assert(offsetof(CommonPlayerInputKey_SetAxisScale, NewValue) == 0x000000, "Member 'CommonPlayerInputKey_SetAxisScale::NewValue' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetBoundAction
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerInputKey_SetBoundAction final
{
public:
	class FName                                   NewBoundAction;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetBoundAction) == 0x000004, "Wrong alignment on CommonPlayerInputKey_SetBoundAction");
static_assert(sizeof(CommonPlayerInputKey_SetBoundAction) == 0x000008, "Wrong size on CommonPlayerInputKey_SetBoundAction");
static_assert(offsetof(CommonPlayerInputKey_SetBoundAction, NewBoundAction) == 0x000000, "Member 'CommonPlayerInputKey_SetBoundAction::NewBoundAction' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetBoundKey
// 0x0018 (0x0018 - 0x0000)
struct CommonPlayerInputKey_SetBoundKey final
{
public:
	struct FKey                                   NewBoundAction;                                    // 0x0000(0x0018)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetBoundKey) == 0x000008, "Wrong alignment on CommonPlayerInputKey_SetBoundKey");
static_assert(sizeof(CommonPlayerInputKey_SetBoundKey) == 0x000018, "Wrong size on CommonPlayerInputKey_SetBoundKey");
static_assert(offsetof(CommonPlayerInputKey_SetBoundKey, NewBoundAction) == 0x000000, "Member 'CommonPlayerInputKey_SetBoundKey::NewBoundAction' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybind
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_SetForcedHoldKeybind final
{
public:
	bool                                          InForcedHoldKeybind;                               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetForcedHoldKeybind) == 0x000001, "Wrong alignment on CommonPlayerInputKey_SetForcedHoldKeybind");
static_assert(sizeof(CommonPlayerInputKey_SetForcedHoldKeybind) == 0x000001, "Wrong size on CommonPlayerInputKey_SetForcedHoldKeybind");
static_assert(offsetof(CommonPlayerInputKey_SetForcedHoldKeybind, InForcedHoldKeybind) == 0x000000, "Member 'CommonPlayerInputKey_SetForcedHoldKeybind::InForcedHoldKeybind' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybindStatus
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_SetForcedHoldKeybindStatus final
{
public:
	ECommonKeybindForcedHoldStatus                InForcedHoldKeybindStatus;                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetForcedHoldKeybindStatus) == 0x000001, "Wrong alignment on CommonPlayerInputKey_SetForcedHoldKeybindStatus");
static_assert(sizeof(CommonPlayerInputKey_SetForcedHoldKeybindStatus) == 0x000001, "Wrong size on CommonPlayerInputKey_SetForcedHoldKeybindStatus");
static_assert(offsetof(CommonPlayerInputKey_SetForcedHoldKeybindStatus, InForcedHoldKeybindStatus) == 0x000000, "Member 'CommonPlayerInputKey_SetForcedHoldKeybindStatus::InForcedHoldKeybindStatus' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetPresetNameOverride
// 0x0008 (0x0008 - 0x0000)
struct CommonPlayerInputKey_SetPresetNameOverride final
{
public:
	class FName                                   NewValue;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetPresetNameOverride) == 0x000004, "Wrong alignment on CommonPlayerInputKey_SetPresetNameOverride");
static_assert(sizeof(CommonPlayerInputKey_SetPresetNameOverride) == 0x000008, "Wrong size on CommonPlayerInputKey_SetPresetNameOverride");
static_assert(offsetof(CommonPlayerInputKey_SetPresetNameOverride, NewValue) == 0x000000, "Member 'CommonPlayerInputKey_SetPresetNameOverride::NewValue' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.SetShowProgressCountDown
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_SetShowProgressCountDown final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_SetShowProgressCountDown) == 0x000001, "Wrong alignment on CommonPlayerInputKey_SetShowProgressCountDown");
static_assert(sizeof(CommonPlayerInputKey_SetShowProgressCountDown) == 0x000001, "Wrong size on CommonPlayerInputKey_SetShowProgressCountDown");
static_assert(offsetof(CommonPlayerInputKey_SetShowProgressCountDown, bShow) == 0x000000, "Member 'CommonPlayerInputKey_SetShowProgressCountDown::bShow' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.StartHoldProgress
// 0x000C (0x000C - 0x0000)
struct CommonPlayerInputKey_StartHoldProgress final
{
public:
	class FName                                   HoldActionName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldDuration;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_StartHoldProgress) == 0x000004, "Wrong alignment on CommonPlayerInputKey_StartHoldProgress");
static_assert(sizeof(CommonPlayerInputKey_StartHoldProgress) == 0x00000C, "Wrong size on CommonPlayerInputKey_StartHoldProgress");
static_assert(offsetof(CommonPlayerInputKey_StartHoldProgress, HoldActionName) == 0x000000, "Member 'CommonPlayerInputKey_StartHoldProgress::HoldActionName' has a wrong offset!");
static_assert(offsetof(CommonPlayerInputKey_StartHoldProgress, HoldDuration) == 0x000008, "Member 'CommonPlayerInputKey_StartHoldProgress::HoldDuration' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.StopHoldProgress
// 0x000C (0x000C - 0x0000)
struct CommonPlayerInputKey_StopHoldProgress final
{
public:
	class FName                                   HoldActionName;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCompletedSuccessfully;                            // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CommonPlayerInputKey_StopHoldProgress) == 0x000004, "Wrong alignment on CommonPlayerInputKey_StopHoldProgress");
static_assert(sizeof(CommonPlayerInputKey_StopHoldProgress) == 0x00000C, "Wrong size on CommonPlayerInputKey_StopHoldProgress");
static_assert(offsetof(CommonPlayerInputKey_StopHoldProgress, HoldActionName) == 0x000000, "Member 'CommonPlayerInputKey_StopHoldProgress::HoldActionName' has a wrong offset!");
static_assert(offsetof(CommonPlayerInputKey_StopHoldProgress, bCompletedSuccessfully) == 0x000008, "Member 'CommonPlayerInputKey_StopHoldProgress::bCompletedSuccessfully' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.IsBoundKeyValid
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_IsBoundKeyValid final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_IsBoundKeyValid) == 0x000001, "Wrong alignment on CommonPlayerInputKey_IsBoundKeyValid");
static_assert(sizeof(CommonPlayerInputKey_IsBoundKeyValid) == 0x000001, "Wrong size on CommonPlayerInputKey_IsBoundKeyValid");
static_assert(offsetof(CommonPlayerInputKey_IsBoundKeyValid, ReturnValue) == 0x000000, "Member 'CommonPlayerInputKey_IsBoundKeyValid::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonPlayerInputKey.IsHoldKeybind
// 0x0001 (0x0001 - 0x0000)
struct CommonPlayerInputKey_IsHoldKeybind final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonPlayerInputKey_IsHoldKeybind) == 0x000001, "Wrong alignment on CommonPlayerInputKey_IsHoldKeybind");
static_assert(sizeof(CommonPlayerInputKey_IsHoldKeybind) == 0x000001, "Wrong size on CommonPlayerInputKey_IsHoldKeybind");
static_assert(offsetof(CommonPlayerInputKey_IsHoldKeybind, ReturnValue) == 0x000000, "Member 'CommonPlayerInputKey_IsHoldKeybind::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.GetLocalPlayerFromController
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_GetLocalPlayerFromController final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                           ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonUIExtensions_GetLocalPlayerFromController) == 0x000008, "Wrong alignment on CommonUIExtensions_GetLocalPlayerFromController");
static_assert(sizeof(CommonUIExtensions_GetLocalPlayerFromController) == 0x000010, "Wrong size on CommonUIExtensions_GetLocalPlayerFromController");
static_assert(offsetof(CommonUIExtensions_GetLocalPlayerFromController, PlayerController) == 0x000000, "Member 'CommonUIExtensions_GetLocalPlayerFromController::PlayerController' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_GetLocalPlayerFromController, ReturnValue) == 0x000008, "Member 'CommonUIExtensions_GetLocalPlayerFromController::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.GetOwningPlayerInputType
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_GetOwningPlayerInputType final
{
public:
	const class UUserWidget*                      WidgetContextObject;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                              ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CommonUIExtensions_GetOwningPlayerInputType) == 0x000008, "Wrong alignment on CommonUIExtensions_GetOwningPlayerInputType");
static_assert(sizeof(CommonUIExtensions_GetOwningPlayerInputType) == 0x000010, "Wrong size on CommonUIExtensions_GetOwningPlayerInputType");
static_assert(offsetof(CommonUIExtensions_GetOwningPlayerInputType, WidgetContextObject) == 0x000000, "Member 'CommonUIExtensions_GetOwningPlayerInputType::WidgetContextObject' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_GetOwningPlayerInputType, ReturnValue) == 0x000008, "Member 'CommonUIExtensions_GetOwningPlayerInputType::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingGamepad
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_IsOwningPlayerUsingGamepad final
{
public:
	const class UUserWidget*                      WidgetContextObject;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CommonUIExtensions_IsOwningPlayerUsingGamepad) == 0x000008, "Wrong alignment on CommonUIExtensions_IsOwningPlayerUsingGamepad");
static_assert(sizeof(CommonUIExtensions_IsOwningPlayerUsingGamepad) == 0x000010, "Wrong size on CommonUIExtensions_IsOwningPlayerUsingGamepad");
static_assert(offsetof(CommonUIExtensions_IsOwningPlayerUsingGamepad, WidgetContextObject) == 0x000000, "Member 'CommonUIExtensions_IsOwningPlayerUsingGamepad::WidgetContextObject' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_IsOwningPlayerUsingGamepad, ReturnValue) == 0x000008, "Member 'CommonUIExtensions_IsOwningPlayerUsingGamepad::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingTouch
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_IsOwningPlayerUsingTouch final
{
public:
	const class UUserWidget*                      WidgetContextObject;                               // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CommonUIExtensions_IsOwningPlayerUsingTouch) == 0x000008, "Wrong alignment on CommonUIExtensions_IsOwningPlayerUsingTouch");
static_assert(sizeof(CommonUIExtensions_IsOwningPlayerUsingTouch) == 0x000010, "Wrong size on CommonUIExtensions_IsOwningPlayerUsingTouch");
static_assert(offsetof(CommonUIExtensions_IsOwningPlayerUsingTouch, WidgetContextObject) == 0x000000, "Member 'CommonUIExtensions_IsOwningPlayerUsingTouch::WidgetContextObject' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_IsOwningPlayerUsingTouch, ReturnValue) == 0x000008, "Member 'CommonUIExtensions_IsOwningPlayerUsingTouch::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.PopContentFromLayer
// 0x0008 (0x0008 - 0x0000)
struct CommonUIExtensions_PopContentFromLayer final
{
public:
	class UCommonActivatableWidget*               ActivatableWidget;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonUIExtensions_PopContentFromLayer) == 0x000008, "Wrong alignment on CommonUIExtensions_PopContentFromLayer");
static_assert(sizeof(CommonUIExtensions_PopContentFromLayer) == 0x000008, "Wrong size on CommonUIExtensions_PopContentFromLayer");
static_assert(offsetof(CommonUIExtensions_PopContentFromLayer, ActivatableWidget) == 0x000000, "Member 'CommonUIExtensions_PopContentFromLayer::ActivatableWidget' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.PushContentToLayer_ForPlayer
// 0x0020 (0x0020 - 0x0000)
struct CommonUIExtensions_PushContentToLayer_ForPlayer final
{
public:
	const class ULocalPlayer*                     LocalPlayer;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerName;                                         // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonActivatableWidget>   WidgetClass;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*               ReturnValue;                                       // 0x0018(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonUIExtensions_PushContentToLayer_ForPlayer) == 0x000008, "Wrong alignment on CommonUIExtensions_PushContentToLayer_ForPlayer");
static_assert(sizeof(CommonUIExtensions_PushContentToLayer_ForPlayer) == 0x000020, "Wrong size on CommonUIExtensions_PushContentToLayer_ForPlayer");
static_assert(offsetof(CommonUIExtensions_PushContentToLayer_ForPlayer, LocalPlayer) == 0x000000, "Member 'CommonUIExtensions_PushContentToLayer_ForPlayer::LocalPlayer' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_PushContentToLayer_ForPlayer, LayerName) == 0x000008, "Member 'CommonUIExtensions_PushContentToLayer_ForPlayer::LayerName' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_PushContentToLayer_ForPlayer, WidgetClass) == 0x000010, "Member 'CommonUIExtensions_PushContentToLayer_ForPlayer::WidgetClass' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_PushContentToLayer_ForPlayer, ReturnValue) == 0x000018, "Member 'CommonUIExtensions_PushContentToLayer_ForPlayer::ReturnValue' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.PushStreamedContentToLayer_ForPlayer
// 0x0038 (0x0038 - 0x0000)
struct CommonUIExtensions_PushStreamedContentToLayer_ForPlayer final
{
public:
	const class ULocalPlayer*                     LocalPlayer;                                       // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           LayerName;                                         // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   WidgetClass;                                       // 0x0010(0x0028)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonUIExtensions_PushStreamedContentToLayer_ForPlayer) == 0x000008, "Wrong alignment on CommonUIExtensions_PushStreamedContentToLayer_ForPlayer");
static_assert(sizeof(CommonUIExtensions_PushStreamedContentToLayer_ForPlayer) == 0x000038, "Wrong size on CommonUIExtensions_PushStreamedContentToLayer_ForPlayer");
static_assert(offsetof(CommonUIExtensions_PushStreamedContentToLayer_ForPlayer, LocalPlayer) == 0x000000, "Member 'CommonUIExtensions_PushStreamedContentToLayer_ForPlayer::LocalPlayer' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_PushStreamedContentToLayer_ForPlayer, LayerName) == 0x000008, "Member 'CommonUIExtensions_PushStreamedContentToLayer_ForPlayer::LayerName' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_PushStreamedContentToLayer_ForPlayer, WidgetClass) == 0x000010, "Member 'CommonUIExtensions_PushStreamedContentToLayer_ForPlayer::WidgetClass' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.ResumeInputForPlayer
// 0x0010 (0x0010 - 0x0000)
struct CommonUIExtensions_ResumeInputForPlayer final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SuspendToken;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonUIExtensions_ResumeInputForPlayer) == 0x000008, "Wrong alignment on CommonUIExtensions_ResumeInputForPlayer");
static_assert(sizeof(CommonUIExtensions_ResumeInputForPlayer) == 0x000010, "Wrong size on CommonUIExtensions_ResumeInputForPlayer");
static_assert(offsetof(CommonUIExtensions_ResumeInputForPlayer, PlayerController) == 0x000000, "Member 'CommonUIExtensions_ResumeInputForPlayer::PlayerController' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_ResumeInputForPlayer, SuspendToken) == 0x000008, "Member 'CommonUIExtensions_ResumeInputForPlayer::SuspendToken' has a wrong offset!");

// Function CommonGame.CommonUIExtensions.SuspendInputForPlayer
// 0x0018 (0x0018 - 0x0000)
struct CommonUIExtensions_SuspendInputForPlayer final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SuspendReason;                                     // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CommonUIExtensions_SuspendInputForPlayer) == 0x000008, "Wrong alignment on CommonUIExtensions_SuspendInputForPlayer");
static_assert(sizeof(CommonUIExtensions_SuspendInputForPlayer) == 0x000018, "Wrong size on CommonUIExtensions_SuspendInputForPlayer");
static_assert(offsetof(CommonUIExtensions_SuspendInputForPlayer, PlayerController) == 0x000000, "Member 'CommonUIExtensions_SuspendInputForPlayer::PlayerController' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_SuspendInputForPlayer, SuspendReason) == 0x000008, "Member 'CommonUIExtensions_SuspendInputForPlayer::SuspendReason' has a wrong offset!");
static_assert(offsetof(CommonUIExtensions_SuspendInputForPlayer, ReturnValue) == 0x000010, "Member 'CommonUIExtensions_SuspendInputForPlayer::ReturnValue' has a wrong offset!");

// Function CommonGame.PrimaryGameLayout.RegisterLayer
// 0x0010 (0x0010 - 0x0000)
struct PrimaryGameLayout_RegisterLayer final
{
public:
	struct FGameplayTag                           LayerTag;                                          // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidgetContainerBase*  LayerWidget;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PrimaryGameLayout_RegisterLayer) == 0x000008, "Wrong alignment on PrimaryGameLayout_RegisterLayer");
static_assert(sizeof(PrimaryGameLayout_RegisterLayer) == 0x000010, "Wrong size on PrimaryGameLayout_RegisterLayer");
static_assert(offsetof(PrimaryGameLayout_RegisterLayer, LayerTag) == 0x000000, "Member 'PrimaryGameLayout_RegisterLayer::LayerTag' has a wrong offset!");
static_assert(offsetof(PrimaryGameLayout_RegisterLayer, LayerWidget) == 0x000008, "Member 'PrimaryGameLayout_RegisterLayer::LayerWidget' has a wrong offset!");

}

