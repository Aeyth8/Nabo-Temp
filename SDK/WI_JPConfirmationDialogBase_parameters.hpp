#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPConfirmationDialogBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WI_JPConfirmationDialogBase.WI_JPConfirmationDialogBase_C.ExecuteUbergraph_WI_JPConfirmationDialogBase
// 0x0010 (0x0010 - 0x0000)
struct WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase) == 0x000008, "Wrong alignment on WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase");
static_assert(sizeof(WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase) == 0x000010, "Wrong size on WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase");
static_assert(offsetof(WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase, EntryPoint) == 0x000000, "Member 'WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WI_JPConfirmationDialogBase_C_ExecuteUbergraph_WI_JPConfirmationDialogBase::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WI_JPConfirmationDialogBase.WI_JPConfirmationDialogBase_C.BP_GetDesiredFocusTarget
// 0x0028 (0x0028 - 0x0000)
struct WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UDynamicEntryBox*                       CallFunc_GetEntryBoxButtonsWidget_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;                // 0x0010(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget) == 0x000028, "Wrong size on WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget, CallFunc_GetEntryBoxButtonsWidget_ReturnValue) == 0x000008, "Member 'WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget::CallFunc_GetEntryBoxButtonsWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget, CallFunc_GetAllEntries_ReturnValue) == 0x000010, "Member 'WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget, CallFunc_Array_Get_Item) == 0x000020, "Member 'WI_JPConfirmationDialogBase_C_BP_GetDesiredFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");

}

