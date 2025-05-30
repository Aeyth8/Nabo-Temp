#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PreMainMenu

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function WI_PreMainMenu.WI_PreMainMenu_C.InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0 final
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WI_PreMainMenu_C_InpActEvt_IA_ASkipSplashScreen_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WI_PreMainMenu.WI_PreMainMenu_C.ExecuteUbergraph_WI_PreMainMenu
// 0x00C8 (0x00C8 - 0x0000)
struct WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionValue                      K2Node_EnhancedInputActionEvent_ActionValue;       // 0x0008(0x0020)(NoDestructor)
	float                                         K2Node_EnhancedInputActionEvent_ElapsedTime;       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_EnhancedInputActionEvent_TriggeredTime;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction;      // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                           Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_InputActionValueToBool_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Temp_real_Variable;                                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_0;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Temp_real_Variable_1_0;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifyContextOptions                  Temp_struct_Variable;                              // 0x006A(0x0001)(ConstParm, NoDestructor)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstanceJP*                        K2Node_DynamicCast_AsGame_Instance_JP;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEnhancedInputLocalPlayerSubsystem*     CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_RemoveMappingContext_self_CastInput;      // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifyContextOptions                  K2Node_MakeStruct_ModifyContextOptions;            // 0x00A8(0x0001)(NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddMappingContext_self_CastInput;         // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu) == 0x000008, "Wrong alignment on WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu");
static_assert(sizeof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu) == 0x0000C8, "Wrong size on WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, EntryPoint) == 0x000000, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_object_Variable) == 0x000038, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_real_Variable) == 0x000048, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_real_Variable_1) == 0x000050, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_real_Variable_0) == 0x000058, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_real_Variable_1_0) == 0x000060, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_bool_Variable) == 0x000068, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_struct_Variable) == 0x00006A, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000070, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_DynamicCast_AsGame_Instance_JP) == 0x000078, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_DynamicCast_AsGame_Instance_JP' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000088, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000090, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_RemoveMappingContext_self_CastInput) == 0x000098, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_RemoveMappingContext_self_CastInput' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, K2Node_MakeStruct_ModifyContextOptions) == 0x0000A8, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::K2Node_MakeStruct_ModifyContextOptions' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, CallFunc_AddMappingContext_self_CastInput) == 0x0000B0, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::CallFunc_AddMappingContext_self_CastInput' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_bool_IsClosed_Variable) == 0x0000C0, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu, Temp_bool_Has_Been_Initd_Variable) == 0x0000C1, "Member 'WI_PreMainMenu_C_ExecuteUbergraph_WI_PreMainMenu::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

}

