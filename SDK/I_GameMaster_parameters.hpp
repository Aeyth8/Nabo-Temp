#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_GameMaster

#include "Basic.hpp"


namespace SDK::Params
{

// Function I_GameMaster.I_GameMaster_C.SetGameMasterReference
// 0x0008 (0x0008 - 0x0000)
struct I_GameMaster_C_SetGameMasterReference final
{
public:
	class Abp_groundskeeper_C*                    NewGroundskeeper;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_GameMaster_C_SetGameMasterReference) == 0x000008, "Wrong alignment on I_GameMaster_C_SetGameMasterReference");
static_assert(sizeof(I_GameMaster_C_SetGameMasterReference) == 0x000008, "Wrong size on I_GameMaster_C_SetGameMasterReference");
static_assert(offsetof(I_GameMaster_C_SetGameMasterReference, NewGroundskeeper) == 0x000000, "Member 'I_GameMaster_C_SetGameMasterReference::NewGroundskeeper' has a wrong offset!");

}

