#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SOA_Resources

#include "Basic.hpp"


namespace SDK::Params
{

// Function SOA_Resources.SOA_Resources_C.ExecuteUbergraph_SOA_Resources
// 0x0058 (0x0058 - 0x0000)
struct SOA_Resources_C_ExecuteUbergraph_SOA_Resources final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_StoreBase_C*>                CallFunc_GetAllActorsOfClass_OutActors;            // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ACharacter* DeliveringCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_StoreBase_C*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             K2Node_CustomEvent_DeliveringCharacter;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources) == 0x000008, "Wrong alignment on SOA_Resources_C_ExecuteUbergraph_SOA_Resources");
static_assert(sizeof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources) == 0x000058, "Wrong size on SOA_Resources_C_ExecuteUbergraph_SOA_Resources");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, EntryPoint) == 0x000000, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::EntryPoint' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, CallFunc_GetAllActorsOfClass_OutActors) == 0x000008, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, CallFunc_Array_Get_Item) == 0x000038, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, K2Node_CustomEvent_DeliveringCharacter) == 0x000048, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::K2Node_CustomEvent_DeliveringCharacter' has a wrong offset!");
static_assert(offsetof(SOA_Resources_C_ExecuteUbergraph_SOA_Resources, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'SOA_Resources_C_ExecuteUbergraph_SOA_Resources::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function SOA_Resources.SOA_Resources_C.IsToolTipCompleted
// 0x0001 (0x0001 - 0x0000)
struct SOA_Resources_C_IsToolTipCompleted final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_Resources_C_IsToolTipCompleted) == 0x000001, "Wrong alignment on SOA_Resources_C_IsToolTipCompleted");
static_assert(sizeof(SOA_Resources_C_IsToolTipCompleted) == 0x000001, "Wrong size on SOA_Resources_C_IsToolTipCompleted");
static_assert(offsetof(SOA_Resources_C_IsToolTipCompleted, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'SOA_Resources_C_IsToolTipCompleted::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function SOA_Resources.SOA_Resources_C.ResourceGrabbed
// 0x0008 (0x0008 - 0x0000)
struct SOA_Resources_C_ResourceGrabbed final
{
public:
	class ACharacter*                             DeliveringCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SOA_Resources_C_ResourceGrabbed) == 0x000008, "Wrong alignment on SOA_Resources_C_ResourceGrabbed");
static_assert(sizeof(SOA_Resources_C_ResourceGrabbed) == 0x000008, "Wrong size on SOA_Resources_C_ResourceGrabbed");
static_assert(offsetof(SOA_Resources_C_ResourceGrabbed, DeliveringCharacter) == 0x000000, "Member 'SOA_Resources_C_ResourceGrabbed::DeliveringCharacter' has a wrong offset!");

}

