#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_TwitchVoteResultHUD

#include "Basic.hpp"


namespace SDK::Params
{

// Function WI_TwitchVoteResultHUD.WI_TwitchVoteResultHUD_C.ExecuteUbergraph_WI_TwitchVoteResultHUD
// 0x0018 (0x0018 - 0x0000)
struct WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD) == 0x000008, "Wrong alignment on WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD");
static_assert(sizeof(WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD) == 0x000018, "Wrong size on WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD");
static_assert(offsetof(WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD, EntryPoint) == 0x000000, "Member 'WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'WI_TwitchVoteResultHUD_C_ExecuteUbergraph_WI_TwitchVoteResultHUD::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

