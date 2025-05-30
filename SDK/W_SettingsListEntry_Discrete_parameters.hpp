#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SettingsListEntry_Discrete

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C.BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C.BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'W_SettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C.ExecuteUbergraph_W_SettingsListEntry_Discrete
// 0x0158 (0x0158 - 0x0000)
struct W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0010(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0048(0x0078)(ConstParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00D0(0x0078)(ConstParm)
	bool                                          CallFunc_IsOwningPlayerUsingTouch_ReturnValue;     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete) == 0x000008, "Wrong alignment on W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete");
static_assert(sizeof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete) == 0x000158, "Wrong size on W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, EntryPoint) == 0x000000, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::EntryPoint' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, K2Node_Event_MyGeometry) == 0x000010, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C0, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000C8, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, K2Node_Event_MouseEvent) == 0x0000D0, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, CallFunc_IsOwningPlayerUsingTouch_ReturnValue) == 0x000148, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::CallFunc_IsOwningPlayerUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete, K2Node_ComponentBoundEvent_Button_1) == 0x000150, "Member 'W_SettingsListEntry_Discrete_C_ExecuteUbergraph_W_SettingsListEntry_Discrete::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");

// Function W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C.GetPrimaryGamepadFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong alignment on W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget");
static_assert(sizeof(W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong size on W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget, ReturnValue) == 0x000000, "Member 'W_SettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget::ReturnValue' has a wrong offset!");

// Function W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct W_SettingsListEntry_Discrete_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_SettingsListEntry_Discrete_C_OnMouseEnter) == 0x000008, "Wrong alignment on W_SettingsListEntry_Discrete_C_OnMouseEnter");
static_assert(sizeof(W_SettingsListEntry_Discrete_C_OnMouseEnter) == 0x0000B0, "Wrong size on W_SettingsListEntry_Discrete_C_OnMouseEnter");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'W_SettingsListEntry_Discrete_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'W_SettingsListEntry_Discrete_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function W_SettingsListEntry_Discrete.W_SettingsListEntry_Discrete_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct W_SettingsListEntry_Discrete_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(W_SettingsListEntry_Discrete_C_OnMouseLeave) == 0x000008, "Wrong alignment on W_SettingsListEntry_Discrete_C_OnMouseLeave");
static_assert(sizeof(W_SettingsListEntry_Discrete_C_OnMouseLeave) == 0x000078, "Wrong size on W_SettingsListEntry_Discrete_C_OnMouseLeave");
static_assert(offsetof(W_SettingsListEntry_Discrete_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'W_SettingsListEntry_Discrete_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}

