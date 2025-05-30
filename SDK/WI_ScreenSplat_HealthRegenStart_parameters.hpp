#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ScreenSplat_HealthRegenStart

#include "Basic.hpp"


namespace SDK::Params
{

// Function WI_ScreenSplat_HealthRegenStart.WI_ScreenSplat_HealthRegenStart_C.ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart
// 0x0038 (0x0038 - 0x0000)
struct WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerControllerJP_Match*              CallFunc_GetLocalPlayerControllerJP_Match_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ResidentCharacter_C*                K2Node_DynamicCast_AsBP_Resident_Character;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart) == 0x000008, "Wrong alignment on WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart");
static_assert(sizeof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart) == 0x000038, "Wrong size on WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, EntryPoint) == 0x000000, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, CallFunc_GetLocalPlayerControllerJP_Match_ReturnValue) == 0x000010, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::CallFunc_GetLocalPlayerControllerJP_Match_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, K2Node_DynamicCast_AsBP_Resident_Character) == 0x000020, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::K2Node_DynamicCast_AsBP_Resident_Character' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000030, "Member 'WI_ScreenSplat_HealthRegenStart_C_ExecuteUbergraph_WI_ScreenSplat_HealthRegenStart::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

// Function WI_ScreenSplat_HealthRegenStart.WI_ScreenSplat_HealthRegenStart_C.UpdateRadius
// 0x0010 (0x0010 - 0x0000)
struct WI_ScreenSplat_HealthRegenStart_C_UpdateRadius final
{
public:
	double                                        Intensity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_ScreenSplat_HealthRegenStart_C_UpdateRadius) == 0x000008, "Wrong alignment on WI_ScreenSplat_HealthRegenStart_C_UpdateRadius");
static_assert(sizeof(WI_ScreenSplat_HealthRegenStart_C_UpdateRadius) == 0x000010, "Wrong size on WI_ScreenSplat_HealthRegenStart_C_UpdateRadius");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_UpdateRadius, Intensity) == 0x000000, "Member 'WI_ScreenSplat_HealthRegenStart_C_UpdateRadius::Intensity' has a wrong offset!");
static_assert(offsetof(WI_ScreenSplat_HealthRegenStart_C_UpdateRadius, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000008, "Member 'WI_ScreenSplat_HealthRegenStart_C_UpdateRadius::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

}

