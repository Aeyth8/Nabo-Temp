#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_JPSettingsListEntry_Discrete

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Decrease_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_BndEvt__SettingsListEntry_Discrete_Button_Increase_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.ExecuteUbergraph_WI_JPSettingsListEntry_Discrete
// 0x0178 (0x0178 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0078)(ConstParm)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0078)(ConstParm)
	bool                                          CallFunc_IsOwningPlayerUsingTouch_ReturnValue;     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IJPGameSettingWithOddEvenInterface> K2Node_DynamicCast_AsJPGame_Setting_with_Odd_Even_Interface; // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsEven_ReturnValue;                    // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete) == 0x000178, "Wrong size on WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, EntryPoint) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_Event_MyGeometry) == 0x000004, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000B8, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000C0, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, CallFunc_IsOwningPlayerUsingTouch_ReturnValue) == 0x000140, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::CallFunc_IsOwningPlayerUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_ComponentBoundEvent_Button_1) == 0x000148, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_ComponentBoundEvent_Button) == 0x000150, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_Event_ListItemObject) == 0x000158, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_DynamicCast_AsJPGame_Setting_with_Odd_Even_Interface) == 0x000160, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_DynamicCast_AsJPGame_Setting_with_Odd_Even_Interface' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete, CallFunc_GetIsEven_ReturnValue) == 0x000171, "Member 'WI_JPSettingsListEntry_Discrete_C_ExecuteUbergraph_WI_JPSettingsListEntry_Discrete::CallFunc_GetIsEven_ReturnValue' has a wrong offset!");

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.GetPrimaryGamepadFocusWidget
// 0x0008 (0x0008 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget) == 0x000008, "Wrong size on WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget, ReturnValue) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget::ReturnValue' has a wrong offset!");

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet) == 0x000008, "Wrong size on WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_OnMouseEnter) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_OnMouseEnter");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_OnMouseEnter) == 0x0000B0, "Wrong size on WI_JPSettingsListEntry_Discrete_C_OnMouseEnter");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WI_JPSettingsListEntry_Discrete_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WI_JPSettingsListEntry_Discrete.WI_JPSettingsListEntry_Discrete_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WI_JPSettingsListEntry_Discrete_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WI_JPSettingsListEntry_Discrete_C_OnMouseLeave) == 0x000008, "Wrong alignment on WI_JPSettingsListEntry_Discrete_C_OnMouseLeave");
static_assert(sizeof(WI_JPSettingsListEntry_Discrete_C_OnMouseLeave) == 0x000078, "Wrong size on WI_JPSettingsListEntry_Discrete_C_OnMouseLeave");
static_assert(offsetof(WI_JPSettingsListEntry_Discrete_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WI_JPSettingsListEntry_Discrete_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}

