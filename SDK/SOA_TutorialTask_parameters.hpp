#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_TutorialTask

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "S_TutorialTaskCompletedPayload_structs.hpp"


namespace SDK::Params
{

// Function SOA_TutorialTask.SOA_TutorialTask_C.CheckForTaskCompletion
// 0x0010 (0x0010 - 0x0000)
struct SOA_TutorialTask_C_CheckForTaskCompletion final
{
public:
	class UClass*                                 CompletedTaskSOD;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_TutorialTask_C_CheckForTaskCompletion) == 0x000008, "Wrong alignment on SOA_TutorialTask_C_CheckForTaskCompletion");
static_assert(sizeof(SOA_TutorialTask_C_CheckForTaskCompletion) == 0x000010, "Wrong size on SOA_TutorialTask_C_CheckForTaskCompletion");
static_assert(offsetof(SOA_TutorialTask_C_CheckForTaskCompletion, CompletedTaskSOD) == 0x000000, "Member 'SOA_TutorialTask_C_CheckForTaskCompletion::CompletedTaskSOD' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_CheckForTaskCompletion, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000008, "Member 'SOA_TutorialTask_C_CheckForTaskCompletion::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");

// Function SOA_TutorialTask.SOA_TutorialTask_C.ExecuteUbergraph_SOA_TutorialTask
// 0x0068 (0x0068 - 0x0000)
struct SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS_TutorialTaskCompletedPayload        Temp_struct_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  K2Node_CustomEvent_ProxyObject;                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ActualChannel;                  // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_TutorialTaskCompletedPayload        Temp_struct_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_ListenForGameplayMessage*  Temp_object_Variable;                              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  CallFunc_ListenForGameplayMessages_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_CurrentAmount;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TotalAmount;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask) == 0x000008, "Wrong alignment on SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask");
static_assert(sizeof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask) == 0x000068, "Wrong size on SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, EntryPoint) == 0x000000, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::EntryPoint' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, Temp_struct_Variable) == 0x000008, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, K2Node_CustomEvent_ProxyObject) == 0x000010, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, K2Node_CustomEvent_ActualChannel) == 0x000018, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::K2Node_CustomEvent_ActualChannel' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, Temp_struct_Variable_1) == 0x000030, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, Temp_struct_Variable_2) == 0x000038, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, Temp_object_Variable) == 0x000040, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, CallFunc_GetPayload_ReturnValue) == 0x000048, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, CallFunc_ListenForGameplayMessages_ReturnValue) == 0x000050, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::CallFunc_ListenForGameplayMessages_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, K2Node_CustomEvent_CurrentAmount) == 0x00005C, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::K2Node_CustomEvent_CurrentAmount' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask, K2Node_CustomEvent_TotalAmount) == 0x000060, "Member 'SOA_TutorialTask_C_ExecuteUbergraph_SOA_TutorialTask::K2Node_CustomEvent_TotalAmount' has a wrong offset!");

// Function SOA_TutorialTask.SOA_TutorialTask_C.GetText
// 0x0010 (0x0010 - 0x0000)
struct SOA_TutorialTask_C_GetText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(SOA_TutorialTask_C_GetText) == 0x000008, "Wrong alignment on SOA_TutorialTask_C_GetText");
static_assert(sizeof(SOA_TutorialTask_C_GetText) == 0x000010, "Wrong size on SOA_TutorialTask_C_GetText");
static_assert(offsetof(SOA_TutorialTask_C_GetText, ReturnValue) == 0x000000, "Member 'SOA_TutorialTask_C_GetText::ReturnValue' has a wrong offset!");

// Function SOA_TutorialTask.SOA_TutorialTask_C.OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E
// 0x0010 (0x0010 - 0x0000)
struct SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E final
{
public:
	class UAsyncAction_ListenForGameplayMessage*  ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActualChannel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E) == 0x000008, "Wrong alignment on SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E");
static_assert(sizeof(SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E) == 0x000010, "Wrong size on SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E");
static_assert(offsetof(SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E, ProxyObject) == 0x000000, "Member 'SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E::ProxyObject' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E, ActualChannel) == 0x000008, "Member 'SOA_TutorialTask_C_OnMessageReceived_EC6AA3A9484EC765E24041B470E22E9E::ActualChannel' has a wrong offset!");

// Function SOA_TutorialTask.SOA_TutorialTask_C.SetTaskProgressValues
// 0x0008 (0x0008 - 0x0000)
struct SOA_TutorialTask_C_SetTaskProgressValues final
{
public:
	int32                                         CurrentAmount_0;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalAmount_0;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_TutorialTask_C_SetTaskProgressValues) == 0x000004, "Wrong alignment on SOA_TutorialTask_C_SetTaskProgressValues");
static_assert(sizeof(SOA_TutorialTask_C_SetTaskProgressValues) == 0x000008, "Wrong size on SOA_TutorialTask_C_SetTaskProgressValues");
static_assert(offsetof(SOA_TutorialTask_C_SetTaskProgressValues, CurrentAmount_0) == 0x000000, "Member 'SOA_TutorialTask_C_SetTaskProgressValues::CurrentAmount_0' has a wrong offset!");
static_assert(offsetof(SOA_TutorialTask_C_SetTaskProgressValues, TotalAmount_0) == 0x000004, "Member 'SOA_TutorialTask_C_SetTaskProgressValues::TotalAmount_0' has a wrong offset!");

}

