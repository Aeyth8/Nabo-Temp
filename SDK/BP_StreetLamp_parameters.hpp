#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StreetLamp

#include "Basic.hpp"

#include "E_TimeOfDay_structs.hpp"


namespace SDK::Params
{

// Function BP_StreetLamp.BP_StreetLamp_C.ExecuteUbergraph_BP_StreetLamp
// 0x0050 (0x0050 - 0x0000)
struct BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(E_TimeOfDay TimeOfDay)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TimeOfDay                                   K2Node_CustomEvent_TimeOfDay;                      // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADowntimeManager_C*                     CallFunc_GetActorOfClass_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TimeOfDay                                   K2Node_CustomEvent_Selection_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_TimeOfDay                                   K2Node_CustomEvent_Selection;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp) == 0x000008, "Wrong alignment on BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp");
static_assert(sizeof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp) == 0x000050, "Wrong size on BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, EntryPoint) == 0x000000, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_IsDedicatedServer_ReturnValue) == 0x000014, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_IsValid_ReturnValue_1) == 0x000016, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, K2Node_CustomEvent_TimeOfDay) == 0x000017, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::K2Node_CustomEvent_TimeOfDay' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_GetActorOfClass_ReturnValue) == 0x000018, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_HasAuthority_ReturnValue) == 0x000021, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, K2Node_CustomEvent_Selection_1) == 0x000022, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::K2Node_CustomEvent_Selection_1' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_RandomFloatInRange_ReturnValue) == 0x000028, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000038, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, K2Node_CustomEvent_Selection) == 0x000040, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::K2Node_CustomEvent_Selection' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, K2Node_SwitchEnum_CmpSuccess_1) == 0x000041, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_Delay_Duration_ImplicitCast) == 0x000044, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp, CallFunc_Delay_Duration_ImplicitCast_1) == 0x000048, "Member 'BP_StreetLamp_C_ExecuteUbergraph_BP_StreetLamp::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");

// Function BP_StreetLamp.BP_StreetLamp_C.On_TimeOfDayChange_Event
// 0x0001 (0x0001 - 0x0000)
struct BP_StreetLamp_C_On_TimeOfDayChange_Event final
{
public:
	E_TimeOfDay                                   TimeOfDay;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StreetLamp_C_On_TimeOfDayChange_Event) == 0x000001, "Wrong alignment on BP_StreetLamp_C_On_TimeOfDayChange_Event");
static_assert(sizeof(BP_StreetLamp_C_On_TimeOfDayChange_Event) == 0x000001, "Wrong size on BP_StreetLamp_C_On_TimeOfDayChange_Event");
static_assert(offsetof(BP_StreetLamp_C_On_TimeOfDayChange_Event, TimeOfDay) == 0x000000, "Member 'BP_StreetLamp_C_On_TimeOfDayChange_Event::TimeOfDay' has a wrong offset!");

// Function BP_StreetLamp.BP_StreetLamp_C.PreviewStreetLight
// 0x0001 (0x0001 - 0x0000)
struct BP_StreetLamp_C_PreviewStreetLight final
{
public:
	E_TimeOfDay                                   Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StreetLamp_C_PreviewStreetLight) == 0x000001, "Wrong alignment on BP_StreetLamp_C_PreviewStreetLight");
static_assert(sizeof(BP_StreetLamp_C_PreviewStreetLight) == 0x000001, "Wrong size on BP_StreetLamp_C_PreviewStreetLight");
static_assert(offsetof(BP_StreetLamp_C_PreviewStreetLight, Selection) == 0x000000, "Member 'BP_StreetLamp_C_PreviewStreetLight::Selection' has a wrong offset!");

// Function BP_StreetLamp.BP_StreetLamp_C.UpdateStreetLight
// 0x0001 (0x0001 - 0x0000)
struct BP_StreetLamp_C_UpdateStreetLight final
{
public:
	E_TimeOfDay                                   Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_StreetLamp_C_UpdateStreetLight) == 0x000001, "Wrong alignment on BP_StreetLamp_C_UpdateStreetLight");
static_assert(sizeof(BP_StreetLamp_C_UpdateStreetLight) == 0x000001, "Wrong size on BP_StreetLamp_C_UpdateStreetLight");
static_assert(offsetof(BP_StreetLamp_C_UpdateStreetLight, Selection) == 0x000000, "Member 'BP_StreetLamp_C_UpdateStreetLight::Selection' has a wrong offset!");

}

