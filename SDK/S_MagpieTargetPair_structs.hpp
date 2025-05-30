#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_MagpieTargetPair

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_MagpieTargetPair.S_MagpieTargetPair
// 0x0020 (0x0020 - 0x0000)
struct FS_MagpieTargetPair final
{
public:
	bool                                          IsFollowing_8_2775878D4F75FE1174D5A58458376572;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Target_12_22DF1D23487194966FD107921D7CB97D;        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_Magpie_Projectile_C*                Bird_7_43DB747D493CDC98E4DC0CB5DBF77A45;           // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StartPosition_11_EC316451420C8049C8FE3BB7E1E727BD; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_MagpieTargetPair) == 0x000008, "Wrong alignment on FS_MagpieTargetPair");
static_assert(sizeof(FS_MagpieTargetPair) == 0x000020, "Wrong size on FS_MagpieTargetPair");
static_assert(offsetof(FS_MagpieTargetPair, IsFollowing_8_2775878D4F75FE1174D5A58458376572) == 0x000000, "Member 'FS_MagpieTargetPair::IsFollowing_8_2775878D4F75FE1174D5A58458376572' has a wrong offset!");
static_assert(offsetof(FS_MagpieTargetPair, Target_12_22DF1D23487194966FD107921D7CB97D) == 0x000008, "Member 'FS_MagpieTargetPair::Target_12_22DF1D23487194966FD107921D7CB97D' has a wrong offset!");
static_assert(offsetof(FS_MagpieTargetPair, Bird_7_43DB747D493CDC98E4DC0CB5DBF77A45) == 0x000010, "Member 'FS_MagpieTargetPair::Bird_7_43DB747D493CDC98E4DC0CB5DBF77A45' has a wrong offset!");
static_assert(offsetof(FS_MagpieTargetPair, StartPosition_11_EC316451420C8049C8FE3BB7E1E727BD) == 0x000018, "Member 'FS_MagpieTargetPair::StartPosition_11_EC316451420C8049C8FE3BB7E1E727BD' has a wrong offset!");

}

