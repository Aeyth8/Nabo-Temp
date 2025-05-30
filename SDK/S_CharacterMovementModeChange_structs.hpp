#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_CharacterMovementModeChange

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_CharacterMovementModeChange.S_CharacterMovementModeChange
// 0x0002 (0x0002 - 0x0000)
struct FS_CharacterMovementModeChange final
{
public:
	uint8                                         NewMovementMode_2_CE328D954F78BFAA18595EA5EFF9CA07; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         PreviousMovementMode_4_25BA376548319D8C71BA3B9F0B135A37; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_CharacterMovementModeChange) == 0x000001, "Wrong alignment on FS_CharacterMovementModeChange");
static_assert(sizeof(FS_CharacterMovementModeChange) == 0x000002, "Wrong size on FS_CharacterMovementModeChange");
static_assert(offsetof(FS_CharacterMovementModeChange, NewMovementMode_2_CE328D954F78BFAA18595EA5EFF9CA07) == 0x000000, "Member 'FS_CharacterMovementModeChange::NewMovementMode_2_CE328D954F78BFAA18595EA5EFF9CA07' has a wrong offset!");
static_assert(offsetof(FS_CharacterMovementModeChange, PreviousMovementMode_4_25BA376548319D8C71BA3B9F0B135A37) == 0x000001, "Member 'FS_CharacterMovementModeChange::PreviousMovementMode_4_25BA376548319D8C71BA3B9F0B135A37' has a wrong offset!");

}

