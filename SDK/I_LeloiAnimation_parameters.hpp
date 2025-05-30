#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_LeloiAnimation

#include "Basic.hpp"

#include "ELeloiIdleStates_structs.hpp"
#include "E_LeloiStates_structs.hpp"
#include "ELeloiStates_structs.hpp"


namespace SDK::Params
{

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetBarkingAlpha
// 0x0008 (0x0008 - 0x0000)
struct I_LeloiAnimation_C_SetBarkingAlpha final
{
public:
	double                                        Barking;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetBarkingAlpha) == 0x000008, "Wrong alignment on I_LeloiAnimation_C_SetBarkingAlpha");
static_assert(sizeof(I_LeloiAnimation_C_SetBarkingAlpha) == 0x000008, "Wrong size on I_LeloiAnimation_C_SetBarkingAlpha");
static_assert(offsetof(I_LeloiAnimation_C_SetBarkingAlpha, Barking) == 0x000000, "Member 'I_LeloiAnimation_C_SetBarkingAlpha::Barking' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetBehaviourState
// 0x0001 (0x0001 - 0x0000)
struct I_LeloiAnimation_C_SetBehaviourState final
{
public:
	E_LeloiStates                                 BehaviourState;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetBehaviourState) == 0x000001, "Wrong alignment on I_LeloiAnimation_C_SetBehaviourState");
static_assert(sizeof(I_LeloiAnimation_C_SetBehaviourState) == 0x000001, "Wrong size on I_LeloiAnimation_C_SetBehaviourState");
static_assert(offsetof(I_LeloiAnimation_C_SetBehaviourState, BehaviourState) == 0x000000, "Member 'I_LeloiAnimation_C_SetBehaviourState::BehaviourState' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetBeingPet
// 0x0001 (0x0001 - 0x0000)
struct I_LeloiAnimation_C_SetBeingPet final
{
public:
	bool                                          bBeingPet;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetBeingPet) == 0x000001, "Wrong alignment on I_LeloiAnimation_C_SetBeingPet");
static_assert(sizeof(I_LeloiAnimation_C_SetBeingPet) == 0x000001, "Wrong size on I_LeloiAnimation_C_SetBeingPet");
static_assert(offsetof(I_LeloiAnimation_C_SetBeingPet, bBeingPet) == 0x000000, "Member 'I_LeloiAnimation_C_SetBeingPet::bBeingPet' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetBreathingAlpha
// 0x0008 (0x0008 - 0x0000)
struct I_LeloiAnimation_C_SetBreathingAlpha final
{
public:
	double                                        Breathing;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetBreathingAlpha) == 0x000008, "Wrong alignment on I_LeloiAnimation_C_SetBreathingAlpha");
static_assert(sizeof(I_LeloiAnimation_C_SetBreathingAlpha) == 0x000008, "Wrong size on I_LeloiAnimation_C_SetBreathingAlpha");
static_assert(offsetof(I_LeloiAnimation_C_SetBreathingAlpha, Breathing) == 0x000000, "Member 'I_LeloiAnimation_C_SetBreathingAlpha::Breathing' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetIdleState
// 0x0001 (0x0001 - 0x0000)
struct I_LeloiAnimation_C_SetIdleState final
{
public:
	ELeloiIdleStates                              IdleState;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetIdleState) == 0x000001, "Wrong alignment on I_LeloiAnimation_C_SetIdleState");
static_assert(sizeof(I_LeloiAnimation_C_SetIdleState) == 0x000001, "Wrong size on I_LeloiAnimation_C_SetIdleState");
static_assert(offsetof(I_LeloiAnimation_C_SetIdleState, IdleState) == 0x000000, "Member 'I_LeloiAnimation_C_SetIdleState::IdleState' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetInteractablePlayer
// 0x0008 (0x0008 - 0x0000)
struct I_LeloiAnimation_C_SetInteractablePlayer final
{
public:
	class ABP_MovementCharacter_C*                PlayerRef;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetInteractablePlayer) == 0x000008, "Wrong alignment on I_LeloiAnimation_C_SetInteractablePlayer");
static_assert(sizeof(I_LeloiAnimation_C_SetInteractablePlayer) == 0x000008, "Wrong size on I_LeloiAnimation_C_SetInteractablePlayer");
static_assert(offsetof(I_LeloiAnimation_C_SetInteractablePlayer, PlayerRef) == 0x000000, "Member 'I_LeloiAnimation_C_SetInteractablePlayer::PlayerRef' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetPlayerInView
// 0x0001 (0x0001 - 0x0000)
struct I_LeloiAnimation_C_SetPlayerInView final
{
public:
	bool                                          InView;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetPlayerInView) == 0x000001, "Wrong alignment on I_LeloiAnimation_C_SetPlayerInView");
static_assert(sizeof(I_LeloiAnimation_C_SetPlayerInView) == 0x000001, "Wrong size on I_LeloiAnimation_C_SetPlayerInView");
static_assert(offsetof(I_LeloiAnimation_C_SetPlayerInView, InView) == 0x000000, "Member 'I_LeloiAnimation_C_SetPlayerInView::InView' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetSitting
// 0x0001 (0x0001 - 0x0000)
struct I_LeloiAnimation_C_SetSitting final
{
public:
	bool                                          Sitting;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetSitting) == 0x000001, "Wrong alignment on I_LeloiAnimation_C_SetSitting");
static_assert(sizeof(I_LeloiAnimation_C_SetSitting) == 0x000001, "Wrong size on I_LeloiAnimation_C_SetSitting");
static_assert(offsetof(I_LeloiAnimation_C_SetSitting, Sitting) == 0x000000, "Member 'I_LeloiAnimation_C_SetSitting::Sitting' has a wrong offset!");

// Function I_LeloiAnimation.I_LeloiAnimation_C.SetState
// 0x0001 (0x0001 - 0x0000)
struct I_LeloiAnimation_C_SetState final
{
public:
	ELeloiStates                                  State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_LeloiAnimation_C_SetState) == 0x000001, "Wrong alignment on I_LeloiAnimation_C_SetState");
static_assert(sizeof(I_LeloiAnimation_C_SetState) == 0x000001, "Wrong size on I_LeloiAnimation_C_SetState");
static_assert(offsetof(I_LeloiAnimation_C_SetState, State) == 0x000000, "Member 'I_LeloiAnimation_C_SetState::State' has a wrong offset!");

}

