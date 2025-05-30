#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TwitchVoteHUDTeam

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WI_TwitchVoteHUDTeam.WI_TwitchVoteHUDTeam_C.ExecuteUbergraph_WI_TwitchVoteHUDTeam
// 0x0008 (0x0008 - 0x0000)
struct WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam) == 0x000004, "Wrong alignment on WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam");
static_assert(sizeof(WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam) == 0x000008, "Wrong size on WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam");
static_assert(offsetof(WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam, EntryPoint) == 0x000000, "Member 'WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WI_TwitchVoteHUDTeam_C_ExecuteUbergraph_WI_TwitchVoteHUDTeam::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WI_TwitchVoteHUDTeam.WI_TwitchVoteHUDTeam_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_TwitchVoteHUDTeam_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TwitchVoteHUDTeam_C_PreConstruct) == 0x000001, "Wrong alignment on WI_TwitchVoteHUDTeam_C_PreConstruct");
static_assert(sizeof(WI_TwitchVoteHUDTeam_C_PreConstruct) == 0x000001, "Wrong size on WI_TwitchVoteHUDTeam_C_PreConstruct");
static_assert(offsetof(WI_TwitchVoteHUDTeam_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_TwitchVoteHUDTeam_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_TwitchVoteHUDTeam.WI_TwitchVoteHUDTeam_C.SetTeamColor
// 0x0014 (0x0014 - 0x0000)
struct WI_TwitchVoteHUDTeam_C_SetTeamColor final
{
public:
	struct FSlateColor                            TeamColor_0;                                       // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WI_TwitchVoteHUDTeam_C_SetTeamColor) == 0x000004, "Wrong alignment on WI_TwitchVoteHUDTeam_C_SetTeamColor");
static_assert(sizeof(WI_TwitchVoteHUDTeam_C_SetTeamColor) == 0x000014, "Wrong size on WI_TwitchVoteHUDTeam_C_SetTeamColor");
static_assert(offsetof(WI_TwitchVoteHUDTeam_C_SetTeamColor, TeamColor_0) == 0x000000, "Member 'WI_TwitchVoteHUDTeam_C_SetTeamColor::TeamColor_0' has a wrong offset!");

// Function WI_TwitchVoteHUDTeam.WI_TwitchVoteHUDTeam_C.SetVotes
// 0x0018 (0x0018 - 0x0000)
struct WI_TwitchVoteHUDTeam_C_SetVotes final
{
public:
	int32                                         Votes_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0010)()
};
static_assert(alignof(WI_TwitchVoteHUDTeam_C_SetVotes) == 0x000008, "Wrong alignment on WI_TwitchVoteHUDTeam_C_SetVotes");
static_assert(sizeof(WI_TwitchVoteHUDTeam_C_SetVotes) == 0x000018, "Wrong size on WI_TwitchVoteHUDTeam_C_SetVotes");
static_assert(offsetof(WI_TwitchVoteHUDTeam_C_SetVotes, Votes_0) == 0x000000, "Member 'WI_TwitchVoteHUDTeam_C_SetVotes::Votes_0' has a wrong offset!");
static_assert(offsetof(WI_TwitchVoteHUDTeam_C_SetVotes, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WI_TwitchVoteHUDTeam_C_SetVotes::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

