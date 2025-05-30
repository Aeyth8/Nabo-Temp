#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_CharacterAnimation

#include "Basic.hpp"

#include "I_CharacterAnimation_classes.hpp"
#include "I_CharacterAnimation_parameters.hpp"


namespace SDK
{

// Function I_CharacterAnimation.I_CharacterAnimation_C.ADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bADS                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::ADS(bool bADS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "ADS");

	Params::I_CharacterAnimation_C_ADS Parms{};

	Parms.bADS = bADS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Attacking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Attacking_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Heavy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Error_Tolerance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Attacking(bool Attacking_0, bool Heavy, double Error_Tolerance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Attacking");

	Params::I_CharacterAnimation_C_Attacking Parms{};

	Parms.Attacking_0 = Attacking_0;
	Parms.Heavy = Heavy;
	Parms.Error_Tolerance = Error_Tolerance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Blocking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Blocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Blocking(bool Blocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Blocking");

	Params::I_CharacterAnimation_C_Blocking Parms{};

	Parms.Blocked = Blocked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.HeadRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Rotate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::HeadRotation(bool Rotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "HeadRotation");

	Params::I_CharacterAnimation_C_HeadRotation Parms{};

	Parms.Rotate = Rotate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Hit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Hit(double Time, double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Hit");

	Params::I_CharacterAnimation_C_Hit Parms{};

	Parms.Time = Time;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Interacted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InteractedObject                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Interacted(class UObject* InteractedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Interacted");

	Params::I_CharacterAnimation_C_Interacted Parms{};

	Parms.InteractedObject = InteractedObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.ItemReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReady                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::ItemReady(bool bReady)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "ItemReady");

	Params::I_CharacterAnimation_C_ItemReady Parms{};

	Parms.bReady = bReady;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Jab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Jab_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Jab(bool Jab_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Jab");

	Params::I_CharacterAnimation_C_Jab Parms{};

	Parms.Jab_0 = Jab_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.PrimaryPressed
// (Public, BlueprintCallable, BlueprintEvent)

void II_CharacterAnimation_C::PrimaryPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "PrimaryPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.PrimaryReleased
// (Public, BlueprintCallable, BlueprintEvent)

void II_CharacterAnimation_C::PrimaryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "PrimaryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SecondaryPressed
// (Public, BlueprintCallable, BlueprintEvent)

void II_CharacterAnimation_C::SecondaryPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SecondaryPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SecondaryReleased
// (Public, BlueprintCallable, BlueprintEvent)

void II_CharacterAnimation_C::SecondaryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SecondaryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SetChargeHoldTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HoldTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::SetChargeHoldTime(double HoldTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SetChargeHoldTime");

	Params::I_CharacterAnimation_C_SetChargeHoldTime Parms{};

	Parms.HoldTime = HoldTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SetEffectCauser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           EffectCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::SetEffectCauser(class AActor* EffectCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SetEffectCauser");

	Params::I_CharacterAnimation_C_SetEffectCauser Parms{};

	Parms.EffectCauser = EffectCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SetFacialStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFacialStatesJP                         FacialState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  HoldStateDuration                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::SetFacialStates(EFacialStatesJP FacialState, double HoldStateDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SetFacialStates");

	Params::I_CharacterAnimation_C_SetFacialStates Parms{};

	Parms.FacialState = FacialState;
	Parms.HoldStateDuration = HoldStateDuration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SetOverlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemsJP                                OverlayState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::SetOverlayState(EItemsJP OverlayState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SetOverlayState");

	Params::I_CharacterAnimation_C_SetOverlayState Parms{};

	Parms.OverlayState = OverlayState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SetPetActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Leloi_C*                      PetActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::SetPetActor(class ABP_Leloi_C* PetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SetPetActor");

	Params::I_CharacterAnimation_C_SetPetActor Parms{};

	Parms.PetActor = PetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.SetPlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  PlayRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::SetPlayRate(double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "SetPlayRate");

	Params::I_CharacterAnimation_C_SetPlayRate Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Talking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Talking(double Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Talking");

	Params::I_CharacterAnimation_C_Talking Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.Throwing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Throwing_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::Throwing(bool Throwing_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "Throwing");

	Params::I_CharacterAnimation_C_Throwing Parms{};

	Parms.Throwing_0 = Throwing_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function I_CharacterAnimation.I_CharacterAnimation_C.ToggleHandIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       HandTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void II_CharacterAnimation_C::ToggleHandIK(bool Condition, const struct FTransform& HandTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("I_CharacterAnimation_C", "ToggleHandIK");

	Params::I_CharacterAnimation_C_ToggleHandIK Parms{};

	Parms.Condition = Condition;
	Parms.HandTarget = std::move(HandTarget);

	UObject::ProcessEvent(Func, &Parms);
}

}

