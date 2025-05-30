#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_HouseEssentialDestroyedByPlayerMessage

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_HouseEssentialDestroyedByPlayerMessage.S_HouseEssentialDestroyedByPlayerMessage
// 0x0010 (0x0010 - 0x0000)
struct FS_HouseEssentialDestroyedByPlayerMessage final
{
public:
	class ABP_HouseEssential_Cube_C*              DestroyedHouseEssential_5_E3034F564EEA336E18AF47BBFBE7F89B; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           AttackerPlayerState_8_D2E45026437D57CC34F749B067B3DACB; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_HouseEssentialDestroyedByPlayerMessage) == 0x000008, "Wrong alignment on FS_HouseEssentialDestroyedByPlayerMessage");
static_assert(sizeof(FS_HouseEssentialDestroyedByPlayerMessage) == 0x000010, "Wrong size on FS_HouseEssentialDestroyedByPlayerMessage");
static_assert(offsetof(FS_HouseEssentialDestroyedByPlayerMessage, DestroyedHouseEssential_5_E3034F564EEA336E18AF47BBFBE7F89B) == 0x000000, "Member 'FS_HouseEssentialDestroyedByPlayerMessage::DestroyedHouseEssential_5_E3034F564EEA336E18AF47BBFBE7F89B' has a wrong offset!");
static_assert(offsetof(FS_HouseEssentialDestroyedByPlayerMessage, AttackerPlayerState_8_D2E45026437D57CC34F749B067B3DACB) == 0x000008, "Member 'FS_HouseEssentialDestroyedByPlayerMessage::AttackerPlayerState_8_D2E45026437D57CC34F749B067B3DACB' has a wrong offset!");

}

