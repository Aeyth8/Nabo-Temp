#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_TeamHouse

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_TeamHouse.S_TeamHouse
// 0x0030 (0x0030 - 0x0000)
struct FS_TeamHouse final
{
public:
	uint8                                         TeamID_13_4193649C4DBE8C9953B512A7D1447E3E;        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UHouseDefinition>        HouseDefinition_16_C23B1188481FA97B947519B614F02851; // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FS_TeamHouse) == 0x000008, "Wrong alignment on FS_TeamHouse");
static_assert(sizeof(FS_TeamHouse) == 0x000030, "Wrong size on FS_TeamHouse");
static_assert(offsetof(FS_TeamHouse, TeamID_13_4193649C4DBE8C9953B512A7D1447E3E) == 0x000000, "Member 'FS_TeamHouse::TeamID_13_4193649C4DBE8C9953B512A7D1447E3E' has a wrong offset!");
static_assert(offsetof(FS_TeamHouse, HouseDefinition_16_C23B1188481FA97B947519B614F02851) == 0x000008, "Member 'FS_TeamHouse::HouseDefinition_16_C23B1188481FA97B947519B614F02851' has a wrong offset!");

}

