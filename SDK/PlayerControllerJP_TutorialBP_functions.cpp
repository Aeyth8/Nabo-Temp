#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerControllerJP_TutorialBP

#include "Basic.hpp"

#include "PlayerControllerJP_TutorialBP_classes.hpp"
#include "PlayerControllerJP_TutorialBP_parameters.hpp"


namespace SDK
{

// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.EndTestVoiceChat
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerControllerJP_TutorialBP_C::EndTestVoiceChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "EndTestVoiceChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.ExecuteUbergraph_PlayerControllerJP_TutorialBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::ExecuteUbergraph_PlayerControllerJP_TutorialBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "ExecuteUbergraph_PlayerControllerJP_TutorialBP");

	Params::PlayerControllerJP_TutorialBP_C_ExecuteUbergraph_PlayerControllerJP_TutorialBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_0");

	Params::PlayerControllerJP_TutorialBP_C_InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_1");

	Params::PlayerControllerJP_TutorialBP_C_InpActEvt_IA_LookStickUI_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.InpActEvt_N_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::InpActEvt_N_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "InpActEvt_N_K2Node_InputKeyEvent_0");

	Params::PlayerControllerJP_TutorialBP_C_InpActEvt_N_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.Owner_Send Item Pick Up Message
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ItemTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::Owner_Send_Item_Pick_Up_Message(const struct FGameplayTag& ItemTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "Owner_Send Item Pick Up Message");

	Params::PlayerControllerJP_TutorialBP_C_Owner_Send_Item_Pick_Up_Message Parms{};

	Parms.ItemTag = std::move(ItemTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.Owner_SendMessage
// (Net, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerMessage                   PlayerMessage                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APlayerControllerJP_TutorialBP_C::Owner_SendMessage(const struct FPlayerMessage& PlayerMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "Owner_SendMessage");

	Params::PlayerControllerJP_TutorialBP_C_Owner_SendMessage Parms{};

	Parms.PlayerMessage = std::move(PlayerMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.OwnerSendItemPickUpMessageToPlayerController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     ItemTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::OwnerSendItemPickUpMessageToPlayerController(const struct FGameplayTag& ItemTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "OwnerSendItemPickUpMessageToPlayerController");

	Params::PlayerControllerJP_TutorialBP_C_OwnerSendItemPickUpMessageToPlayerController Parms{};

	Parms.ItemTag = std::move(ItemTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.OwnerSendMessageToPlayerController
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerMessage                   Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerControllerJP_TutorialBP_C::OwnerSendMessageToPlayerController(const struct FPlayerMessage& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "OwnerSendMessageToPlayerController");

	Params::PlayerControllerJP_TutorialBP_C_OwnerSendMessageToPlayerController Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.OwnerSendPlayerLeftMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerWhoLeft                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::OwnerSendPlayerLeftMessage(class APlayerState* PlayerWhoLeft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "OwnerSendPlayerLeftMessage");

	Params::PlayerControllerJP_TutorialBP_C_OwnerSendPlayerLeftMessage Parms{};

	Parms.PlayerWhoLeft = PlayerWhoLeft;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerControllerJP_TutorialBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.StartMicrohoneTest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerControllerJP_TutorialBP_C::StartMicrohoneTest(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "StartMicrohoneTest");

	Params::PlayerControllerJP_TutorialBP_C_StartMicrohoneTest Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerControllerJP_TutorialBP.PlayerControllerJP_TutorialBP_C.StartTestVoiceChat
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerControllerJP_TutorialBP_C::StartTestVoiceChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerControllerJP_TutorialBP_C", "StartTestVoiceChat");

	UObject::ProcessEvent(Func, nullptr);
}

}

