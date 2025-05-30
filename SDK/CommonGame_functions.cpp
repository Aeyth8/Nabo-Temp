#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonGame

#include "Basic.hpp"

#include "CommonGame_classes.hpp"
#include "CommonGame_parameters.hpp"


namespace SDK
{

// Function CommonGame.AsyncAction_CreateWidgetAsync.CreateWidgetAsync
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UClass>             UserWidgetSoftClass                                    (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*                OwningPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSuspendInputUntilComplete                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_CreateWidgetAsync*   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_CreateWidgetAsync* UAsyncAction_CreateWidgetAsync::CreateWidgetAsync(class UObject* WorldContextObject, TSoftClassPtr<class UClass> UserWidgetSoftClass, class APlayerController* OwningPlayer, bool bSuspendInputUntilComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_CreateWidgetAsync", "CreateWidgetAsync");

	Params::AsyncAction_CreateWidgetAsync_CreateWidgetAsync Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UserWidgetSoftClass = UserWidgetSoftClass;
	Parms.OwningPlayer = OwningPlayer;
	Parms.bSuspendInputUntilComplete = bSuspendInputUntilComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.AsyncAction_PushContentToLayerForPlayer.PushContentToLayerForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                OwningPlayer                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UClass>             WidgetClass                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                     LayerName                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSuspendInputUntilComplete                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_PushContentToLayerForPlayer*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_PushContentToLayerForPlayer* UAsyncAction_PushContentToLayerForPlayer::PushContentToLayerForPlayer(class APlayerController* OwningPlayer, TSoftClassPtr<class UClass> WidgetClass, const struct FGameplayTag& LayerName, bool bSuspendInputUntilComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_PushContentToLayerForPlayer", "PushContentToLayerForPlayer");

	Params::AsyncAction_PushContentToLayerForPlayer_PushContentToLayerForPlayer Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.WidgetClass = WidgetClass;
	Parms.LayerName = std::move(LayerName);
	Parms.bSuspendInputUntilComplete = bSuspendInputUntilComplete;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationCustom
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          InWorldContextObject                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonGameDialogDescriptor*      Descriptor_0                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncAction_ShowConfirmation*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationCustom(class UObject* InWorldContextObject, class UCommonGameDialogDescriptor* Descriptor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_ShowConfirmation", "ShowConfirmationCustom");

	Params::AsyncAction_ShowConfirmation_ShowConfirmationCustom Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Descriptor_0 = Descriptor_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationOkCancel
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          InWorldContextObject                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                             Title                                                  (Parm, NativeAccessSpecifierPublic)
// class FText                             Message                                                (Parm, NativeAccessSpecifierPublic)
// class UAsyncAction_ShowConfirmation*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancel(class UObject* InWorldContextObject, const class FText& Title, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_ShowConfirmation", "ShowConfirmationOkCancel");

	Params::AsyncAction_ShowConfirmation_ShowConfirmationOkCancel Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Title = std::move(Title);
	Parms.Message = std::move(Message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.AsyncAction_ShowConfirmation.ShowConfirmationYesNo
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          InWorldContextObject                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                             Title                                                  (Parm, NativeAccessSpecifierPublic)
// class FText                             Message                                                (Parm, NativeAccessSpecifierPublic)
// class UAsyncAction_ShowConfirmation*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationYesNo(class UObject* InWorldContextObject, const class FText& Title, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AsyncAction_ShowConfirmation", "ShowConfirmationYesNo");

	Params::AsyncAction_ShowConfirmation_ShowConfirmationYesNo Parms{};

	Parms.InWorldContextObject = InWorldContextObject;
	Parms.Title = std::move(Title);
	Parms.Message = std::move(Message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonGameInstance.HandlePrivilegeChanged
// (Native, Public)
// Parameters:
// class UCommonUserInfo*                  UserInfo                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECommonUserPrivilege                    Privilege                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECommonUserAvailability                 OldAvailability                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECommonUserAvailability                 NewAvailability                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonGameInstance::HandlePrivilegeChanged(const class UCommonUserInfo* UserInfo, ECommonUserPrivilege Privilege, ECommonUserAvailability OldAvailability, ECommonUserAvailability NewAvailability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonGameInstance", "HandlePrivilegeChanged");

	Params::CommonGameInstance_HandlePrivilegeChanged Parms{};

	Parms.UserInfo = UserInfo;
	Parms.Privilege = Privilege;
	Parms.OldAvailability = OldAvailability;
	Parms.NewAvailability = NewAvailability;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonGameInstance.HandleSystemMessage
// (Native, Public)
// Parameters:
// struct FGameplayTag                     MessageType                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                             Title                                                  (Parm, NativeAccessSpecifierPublic)
// class FText                             Message                                                (Parm, NativeAccessSpecifierPublic)

void UCommonGameInstance::HandleSystemMessage(const struct FGameplayTag& MessageType, const class FText& Title, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonGameInstance", "HandleSystemMessage");

	Params::CommonGameInstance_HandleSystemMessage Parms{};

	Parms.MessageType = std::move(MessageType);
	Parms.Title = std::move(Title);
	Parms.Message = std::move(Message);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetAxisScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                                   NewValue                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetAxisScale(const float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetAxisScale");

	Params::CommonPlayerInputKey_SetAxisScale Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetBoundAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             NewBoundAction                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetBoundAction(class FName NewBoundAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetBoundAction");

	Params::CommonPlayerInputKey_SetBoundAction Parms{};

	Parms.NewBoundAction = NewBoundAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetBoundKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                             NewBoundAction                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetBoundKey(const struct FKey& NewBoundAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetBoundKey");

	Params::CommonPlayerInputKey_SetBoundKey Parms{};

	Parms.NewBoundAction = std::move(NewBoundAction);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    InForcedHoldKeybind                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetForcedHoldKeybind(bool InForcedHoldKeybind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetForcedHoldKeybind");

	Params::CommonPlayerInputKey_SetForcedHoldKeybind Parms{};

	Parms.InForcedHoldKeybind = InForcedHoldKeybind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetForcedHoldKeybindStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonKeybindForcedHoldStatus          InForcedHoldKeybindStatus                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetForcedHoldKeybindStatus");

	Params::CommonPlayerInputKey_SetForcedHoldKeybindStatus Parms{};

	Parms.InForcedHoldKeybindStatus = InForcedHoldKeybindStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetPresetNameOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             NewValue                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetPresetNameOverride(const class FName NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetPresetNameOverride");

	Params::CommonPlayerInputKey_SetPresetNameOverride Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.SetShowProgressCountDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bShow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::SetShowProgressCountDown(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "SetShowProgressCountDown");

	Params::CommonPlayerInputKey_SetShowProgressCountDown Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.StartHoldProgress
// (Final, Native, Public)
// Parameters:
// class FName                             HoldActionName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   HoldDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::StartHoldProgress(class FName HoldActionName, float HoldDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "StartHoldProgress");

	Params::CommonPlayerInputKey_StartHoldProgress Parms{};

	Parms.HoldActionName = HoldActionName;
	Parms.HoldDuration = HoldDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.StopHoldProgress
// (Final, Native, Public)
// Parameters:
// class FName                             HoldActionName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bCompletedSuccessfully                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonPlayerInputKey::StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "StopHoldProgress");

	Params::CommonPlayerInputKey_StopHoldProgress Parms{};

	Parms.HoldActionName = HoldActionName;
	Parms.bCompletedSuccessfully = bCompletedSuccessfully;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.UpdateKeybindWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonPlayerInputKey::UpdateKeybindWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "UpdateKeybindWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonPlayerInputKey.IsBoundKeyValid
// (Final, Native, Public, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonPlayerInputKey::IsBoundKeyValid() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "IsBoundKeyValid");

	Params::CommonPlayerInputKey_IsBoundKeyValid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonPlayerInputKey.IsHoldKeybind
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonPlayerInputKey::IsHoldKeybind() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerInputKey", "IsHoldKeybind");

	Params::CommonPlayerInputKey_IsHoldKeybind Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonUIExtensions.GetLocalPlayerFromController
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UCommonUIExtensions::GetLocalPlayerFromController(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "GetLocalPlayerFromController");

	Params::CommonUIExtensions_GetLocalPlayerFromController Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonUIExtensions.GetOwningPlayerInputType
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                      WidgetContextObject                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECommonInputType                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonInputType UCommonUIExtensions::GetOwningPlayerInputType(const class UUserWidget* WidgetContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "GetOwningPlayerInputType");

	Params::CommonUIExtensions_GetOwningPlayerInputType Parms{};

	Parms.WidgetContextObject = WidgetContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingGamepad
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                      WidgetContextObject                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIExtensions::IsOwningPlayerUsingGamepad(const class UUserWidget* WidgetContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "IsOwningPlayerUsingGamepad");

	Params::CommonUIExtensions_IsOwningPlayerUsingGamepad Parms{};

	Parms.WidgetContextObject = WidgetContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonUIExtensions.IsOwningPlayerUsingTouch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                      WidgetContextObject                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonUIExtensions::IsOwningPlayerUsingTouch(const class UUserWidget* WidgetContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "IsOwningPlayerUsingTouch");

	Params::CommonUIExtensions_IsOwningPlayerUsingTouch Parms{};

	Parms.WidgetContextObject = WidgetContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonUIExtensions.PopContentFromLayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*         ActivatableWidget                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIExtensions::PopContentFromLayer(class UCommonActivatableWidget* ActivatableWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "PopContentFromLayer");

	Params::CommonUIExtensions_PopContentFromLayer Parms{};

	Parms.ActivatableWidget = ActivatableWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonUIExtensions.PushContentToLayer_ForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                     LocalPlayer                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                     LayerName                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCommonActivatableWidget>WidgetClass                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*         ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* UCommonUIExtensions::PushContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSubclassOf<class UCommonActivatableWidget> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "PushContentToLayer_ForPlayer");

	Params::CommonUIExtensions_PushContentToLayer_ForPlayer Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.LayerName = std::move(LayerName);
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.CommonUIExtensions.PushStreamedContentToLayer_ForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                     LocalPlayer                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                     LayerName                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UClass>             WidgetClass                                            (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIExtensions::PushStreamedContentToLayer_ForPlayer(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& LayerName, TSoftClassPtr<class UClass> WidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "PushStreamedContentToLayer_ForPlayer");

	Params::CommonUIExtensions_PushStreamedContentToLayer_ForPlayer Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.LayerName = std::move(LayerName);
	Parms.WidgetClass = WidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonUIExtensions.ResumeInputForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SuspendToken                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUIExtensions::ResumeInputForPlayer(class APlayerController* PlayerController, class FName SuspendToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "ResumeInputForPlayer");

	Params::CommonUIExtensions_ResumeInputForPlayer Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SuspendToken = SuspendToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonGame.CommonUIExtensions.SuspendInputForPlayer
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*                PlayerController                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SuspendReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonUIExtensions::SuspendInputForPlayer(class APlayerController* PlayerController, class FName SuspendReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUIExtensions", "SuspendInputForPlayer");

	Params::CommonUIExtensions_SuspendInputForPlayer Parms{};

	Parms.PlayerController = PlayerController;
	Parms.SuspendReason = SuspendReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonGame.PrimaryGameLayout.RegisterLayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     LayerTag                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidgetContainerBase*LayerWidget                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPrimaryGameLayout::RegisterLayer(const struct FGameplayTag& LayerTag, class UCommonActivatableWidgetContainerBase* LayerWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimaryGameLayout", "RegisterLayer");

	Params::PrimaryGameLayout_RegisterLayer Parms{};

	Parms.LayerTag = std::move(LayerTag);
	Parms.LayerWidget = LayerWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

