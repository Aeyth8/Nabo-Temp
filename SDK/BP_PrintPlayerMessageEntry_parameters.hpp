#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PrintPlayerMessageEntry

#include "Basic.hpp"

#include "JP_structs.hpp"


namespace SDK::Params
{

// Function BP_PrintPlayerMessageEntry.BP_PrintPlayerMessageEntry_C.ExecuteUbergraph_BP_PrintPlayerMessageEntry
// 0x0060 (0x0060 - 0x0000)
struct BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerMessage                         K2Node_CustomEvent_PlayerMessageEntry;             // 0x0008(0x0058)()
};
static_assert(alignof(BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry) == 0x000008, "Wrong alignment on BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry");
static_assert(sizeof(BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry) == 0x000060, "Wrong size on BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry");
static_assert(offsetof(BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry, EntryPoint) == 0x000000, "Member 'BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry, K2Node_CustomEvent_PlayerMessageEntry) == 0x000008, "Member 'BP_PrintPlayerMessageEntry_C_ExecuteUbergraph_BP_PrintPlayerMessageEntry::K2Node_CustomEvent_PlayerMessageEntry' has a wrong offset!");

// Function BP_PrintPlayerMessageEntry.BP_PrintPlayerMessageEntry_C.Init
// 0x0058 (0x0058 - 0x0000)
struct BP_PrintPlayerMessageEntry_C_Init final
{
public:
	struct FPlayerMessage                         PlayerMessageEntry_0;                              // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_PrintPlayerMessageEntry_C_Init) == 0x000008, "Wrong alignment on BP_PrintPlayerMessageEntry_C_Init");
static_assert(sizeof(BP_PrintPlayerMessageEntry_C_Init) == 0x000058, "Wrong size on BP_PrintPlayerMessageEntry_C_Init");
static_assert(offsetof(BP_PrintPlayerMessageEntry_C_Init, PlayerMessageEntry_0) == 0x000000, "Member 'BP_PrintPlayerMessageEntry_C_Init::PlayerMessageEntry_0' has a wrong offset!");

}

