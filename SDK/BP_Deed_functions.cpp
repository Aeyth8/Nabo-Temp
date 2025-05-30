#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Deed

#include "Basic.hpp"

#include "BP_Deed_classes.hpp"
#include "BP_Deed_parameters.hpp"


namespace SDK
{

// Function BP_Deed.BP_Deed_C.BelowDeathPlane
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Deed_C::BelowDeathPlane()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "BelowDeathPlane");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Deed.BP_Deed_C.BndEvt__BP_Deed_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Deed_C::BndEvt__BP_Deed_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "BndEvt__BP_Deed_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_Deed_C_BndEvt__BP_Deed_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.DeedHandInIsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_CaptureTheFlagDeedSafe_C*     Safe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   WinningTeam                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::DeedHandInIsValid(class ABP_CaptureTheFlagDeedSafe_C* Safe, bool* Return, uint8* WinningTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "DeedHandInIsValid");

	Params::BP_Deed_C_DeedHandInIsValid Parms{};

	Parms.Safe = Safe;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (WinningTeam != nullptr)
		*WinningTeam = Parms.WinningTeam;
}


// Function BP_Deed.BP_Deed_C.DetermineEventMessageToSend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                ControllerIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                ControllerOut                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// E_DeedMessageType                       MessageType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::DetermineEventMessageToSend(class APlayerController* ControllerIn, class APlayerController** ControllerOut, E_DeedMessageType* MessageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "DetermineEventMessageToSend");

	Params::BP_Deed_C_DetermineEventMessageToSend Parms{};

	Parms.ControllerIn = ControllerIn;

	UObject::ProcessEvent(Func, &Parms);

	if (ControllerOut != nullptr)
		*ControllerOut = Parms.ControllerOut;

	if (MessageType != nullptr)
		*MessageType = Parms.MessageType;
}


// Function BP_Deed.BP_Deed_C.DisableCollisionAndHide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Deed_C::DisableCollisionAndHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "DisableCollisionAndHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Deed.BP_Deed_C.EnableCollisionAndShow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Deed_C::EnableCollisionAndShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "EnableCollisionAndShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Deed.BP_Deed_C.ExecuteUbergraph_BP_Deed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::ExecuteUbergraph_BP_Deed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "ExecuteUbergraph_BP_Deed");

	Params::BP_Deed_C_ExecuteUbergraph_BP_Deed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.GrippedLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       GrippingCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::GrippedLocal(class ACharacter* GrippingCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "GrippedLocal");

	Params::BP_Deed_C_GrippedLocal Parms{};

	Parms.GrippingCharacter = GrippingCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.HandInCosmetics
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Deed_C::HandInCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "HandInCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Deed.BP_Deed_C.IsCurrentHolderOnDeedTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    SameTeam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::IsCurrentHolderOnDeedTeam(bool* SameTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "IsCurrentHolderOnDeedTeam");

	Params::BP_Deed_C_IsCurrentHolderOnDeedTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SameTeam != nullptr)
		*SameTeam = Parms.SameTeam;
}


// Function BP_Deed.BP_Deed_C.On_DeliveredToTeamSafe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                                   WinningTeamID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::On_DeliveredToTeamSafe__DelegateSignature(uint8 WinningTeamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "On_DeliveredToTeamSafe__DelegateSignature");

	Params::BP_Deed_C_On_DeliveredToTeamSafe__DelegateSignature Parms{};

	Parms.WinningTeamID = WinningTeamID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.Picked Up by Owning Team
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Deed_C::Picked_Up_by_Owning_Team()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "Picked Up by Owning Team");

	Params::BP_Deed_C_Picked_Up_by_Owning_Team Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_Deed.BP_Deed_C.PostInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InteractingActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              InteractionComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::PostInteract(class AActor* InteractingActor, class UPrimitiveComponent* InteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "PostInteract");

	Params::BP_Deed_C_PostInteract Parms{};

	Parms.InteractingActor = InteractingActor;
	Parms.InteractionComponent = InteractionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Deed_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Deed.BP_Deed_C.Released Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       ReleasingCharacter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::Released_Local(class ACharacter* ReleasingCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "Released Local");

	Params::BP_Deed_C_Released_Local Parms{};

	Parms.ReleasingCharacter = ReleasingCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.SendDeedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// E_DeedMessageType                       MessageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::SendDeedEvent(class APlayerController* Controller, E_DeedMessageType MessageType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "SendDeedEvent");

	Params::BP_Deed_C_SendDeedEvent Parms{};

	Parms.Controller = Controller;
	Parms.MessageType = MessageType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.SetCosmetics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Deed_C::SetCosmetics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "SetCosmetics");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Deed.BP_Deed_C.SlowDownHoldingCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnableSlow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::SlowDownHoldingCharacter(bool EnableSlow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "SlowDownHoldingCharacter");

	Params::BP_Deed_C_SlowDownHoldingCharacter Parms{};

	Parms.EnableSlow = EnableSlow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.Toggle Relevant Safe Highlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deed_C::Toggle_Relevant_Safe_Highlight(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "Toggle Relevant Safe Highlight");

	Params::BP_Deed_C_Toggle_Relevant_Safe_Highlight Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Deed.BP_Deed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Deed_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Deed_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

