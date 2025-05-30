#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RadialInputPlayerController

#include "Basic.hpp"

#include "EJoystickTypes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RadialInputPlayerController.BP_RadialInputPlayerController_C.GetJoystickDirection
// 0x0078 (0x0078 - 0x0000)
struct BP_RadialInputPlayerController_C_GetJoystickDirection final
{
public:
	EJoystickTypes                                Stick;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              StickInput;                                        // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputAxisKeyValue_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetInputAxisKeyValue_ReturnValue_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputAxisKeyValue_ReturnValue_2;       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetInputAxisKeyValue_ReturnValue_3;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_Y_ImplicitCast;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MakeVector2D_X_ImplicitCast_1;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RadialInputPlayerController_C_GetJoystickDirection) == 0x000008, "Wrong alignment on BP_RadialInputPlayerController_C_GetJoystickDirection");
static_assert(sizeof(BP_RadialInputPlayerController_C_GetJoystickDirection) == 0x000078, "Wrong size on BP_RadialInputPlayerController_C_GetJoystickDirection");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, Stick) == 0x000000, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::Stick' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, StickInput) == 0x000008, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::StickInput' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_GetInputAxisKeyValue_ReturnValue) == 0x000018, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_GetInputAxisKeyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, K2Node_SwitchEnum_CmpSuccess) == 0x00001C, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_GetInputAxisKeyValue_ReturnValue_1) == 0x000020, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_GetInputAxisKeyValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_GetInputAxisKeyValue_ReturnValue_2) == 0x000024, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_GetInputAxisKeyValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_MakeVector2D_ReturnValue) == 0x000028, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_GetInputAxisKeyValue_ReturnValue_3) == 0x000040, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_GetInputAxisKeyValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_MakeVector2D_ReturnValue_1) == 0x000048, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_MakeVector2D_Y_ImplicitCast) == 0x000058, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_MakeVector2D_Y_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_MakeVector2D_X_ImplicitCast) == 0x000060, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_MakeVector2D_X_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_RadialInputPlayerController_C_GetJoystickDirection, CallFunc_MakeVector2D_X_ImplicitCast_1) == 0x000070, "Member 'BP_RadialInputPlayerController_C_GetJoystickDirection::CallFunc_MakeVector2D_X_ImplicitCast_1' has a wrong offset!");

}

