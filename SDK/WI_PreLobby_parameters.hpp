#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PreLobby

#include "Basic.hpp"


namespace SDK::Params
{

// Function WI_PreLobby.WI_PreLobby_C.BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature final
{
public:
	class UJPTabPanelContent*                     InNewTab;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature) == 0x000008, "Wrong alignment on WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature");
static_assert(sizeof(WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature) == 0x000008, "Wrong size on WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature");
static_assert(offsetof(WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature, InNewTab) == 0x000000, "Member 'WI_PreLobby_C_BndEvt__WI_PreLobby_WI_TabPanel_K2Node_ComponentBoundEvent_0_JPOnTabChanged__DelegateSignature::InNewTab' has a wrong offset!");

// Function WI_PreLobby.WI_PreLobby_C.ExecuteUbergraph_WI_PreLobby
// 0x0060 (0x0060 - 0x0000)
struct WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWI_BackButton_C*                       CallFunc_GetBackButton_BackButton;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_CustomEvent_Button;                         // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MainMenuTabCameraController_C*      CallFunc_FindPreLobbyCamera_Array_Element;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UJPTabPanelContent*                     K2Node_ComponentBoundEvent_InNewTab;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby) == 0x000008, "Wrong alignment on WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby");
static_assert(sizeof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby) == 0x000060, "Wrong size on WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, EntryPoint) == 0x000000, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_GetBackButton_BackButton) == 0x000008, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_GetBackButton_BackButton' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, K2Node_CustomEvent_Button) == 0x000010, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_FindPreLobbyCamera_Array_Element) == 0x000030, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_FindPreLobbyCamera_Array_Element' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_GetPlayerController_ReturnValue_1) == 0x000038, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_GetViewTarget_ReturnValue) == 0x000040, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_GetViewTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, K2Node_ComponentBoundEvent_InNewTab) == 0x000050, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::K2Node_ComponentBoundEvent_InNewTab' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000058, "Member 'WI_PreLobby_C_ExecuteUbergraph_WI_PreLobby::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WI_PreLobby.WI_PreLobby_C.FindPreLobbyCamera
// 0x0040 (0x0040 - 0x0000)
struct WI_PreLobby_C_FindPreLobbyCamera final
{
public:
	class ABP_MainMenuTabCameraController_C*      Array_Element;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_MainMenuTabCameraController_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MainMenuTabCameraController_C*      CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PreLobby_C_FindPreLobbyCamera) == 0x000008, "Wrong alignment on WI_PreLobby_C_FindPreLobbyCamera");
static_assert(sizeof(WI_PreLobby_C_FindPreLobbyCamera) == 0x000040, "Wrong size on WI_PreLobby_C_FindPreLobbyCamera");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, Array_Element) == 0x000000, "Member 'WI_PreLobby_C_FindPreLobbyCamera::Array_Element' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WI_PreLobby_C_FindPreLobbyCamera::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WI_PreLobby_C_FindPreLobbyCamera::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WI_PreLobby_C_FindPreLobbyCamera::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'WI_PreLobby_C_FindPreLobbyCamera::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WI_PreLobby_C_FindPreLobbyCamera::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, CallFunc_Array_Get_Item) == 0x000030, "Member 'WI_PreLobby_C_FindPreLobbyCamera::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WI_PreLobby_C_FindPreLobbyCamera::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreLobby_C_FindPreLobbyCamera, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000039, "Member 'WI_PreLobby_C_FindPreLobbyCamera::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function WI_PreLobby.WI_PreLobby_C.OnBackPressed
// 0x0008 (0x0008 - 0x0000)
struct WI_PreLobby_C_OnBackPressed final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PreLobby_C_OnBackPressed) == 0x000008, "Wrong alignment on WI_PreLobby_C_OnBackPressed");
static_assert(sizeof(WI_PreLobby_C_OnBackPressed) == 0x000008, "Wrong size on WI_PreLobby_C_OnBackPressed");
static_assert(offsetof(WI_PreLobby_C_OnBackPressed, Button) == 0x000000, "Member 'WI_PreLobby_C_OnBackPressed::Button' has a wrong offset!");

}

