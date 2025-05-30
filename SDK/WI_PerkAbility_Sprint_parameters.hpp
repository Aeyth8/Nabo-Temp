#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_PerkAbility_Sprint

#include "Basic.hpp"

#include "EnhancedInput_structs.hpp"
#include "S_CharacterMovementModeChange_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.ExecuteUbergraph_WI_PerkAbility_Sprint
// 0x0128 (0x0128 - 0x0000)
struct WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint final
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
	struct FS_CharacterMovementModeChange         Temp_struct_Variable;                              // 0x0069(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  K2Node_CustomEvent_ProxyObject;                    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_ActualChannel;                  // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_CharacterMovementModeChange         Temp_struct_Variable_1;                            // 0x0090(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92[0x2];                                       // 0x0092(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Temp_struct_Variable_2;                            // 0x0094(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  Temp_object_Variable_1;                            // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPayload_ReturnValue;                   // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AB[0x5];                                       // 0x00AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAsyncAction_ListenForGameplayMessage*  CallFunc_ListenForGameplayMessages_ReturnValue;    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00BC(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00FC(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0110(0x0014)()
};
static_assert(alignof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint) == 0x000008, "Wrong alignment on WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint");
static_assert(sizeof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint) == 0x000128, "Wrong size on WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, EntryPoint) == 0x000000, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_EnhancedInputActionEvent_ActionValue) == 0x000008, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_EnhancedInputActionEvent_ActionValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_EnhancedInputActionEvent_ElapsedTime) == 0x000028, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_EnhancedInputActionEvent_ElapsedTime' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_EnhancedInputActionEvent_TriggeredTime) == 0x00002C, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_EnhancedInputActionEvent_TriggeredTime' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_EnhancedInputActionEvent_SourceAction) == 0x000030, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_EnhancedInputActionEvent_SourceAction' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_object_Variable) == 0x000038, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, CallFunc_Conv_InputActionValueToBool_ReturnValue) == 0x000040, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::CallFunc_Conv_InputActionValueToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_real_Variable) == 0x000048, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_real_Variable_1) == 0x000050, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_real_Variable_0) == 0x000058, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_real_Variable_0' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_real_Variable_1_0) == 0x000060, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_real_Variable_1_0' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_bool_Variable) == 0x000068, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_struct_Variable) == 0x000069, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_CustomEvent_ProxyObject) == 0x000070, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_CustomEvent_ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_CustomEvent_ActualChannel) == 0x000078, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_CustomEvent_ActualChannel' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_struct_Variable_1) == 0x000090, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_struct_Variable_2) == 0x000094, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, Temp_object_Variable_1) == 0x0000A0, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, CallFunc_GetPayload_ReturnValue) == 0x0000A9, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::CallFunc_GetPayload_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000AA, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, CallFunc_ListenForGameplayMessages_ReturnValue) == 0x0000B0, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::CallFunc_ListenForGameplayMessages_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_Event_MyGeometry) == 0x0000BC, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_Event_InDeltaTime) == 0x0000F4, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_Event_IsDesignTime) == 0x0000F8, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_MakeStruct_SlateColor) == 0x0000FC, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint, K2Node_MakeStruct_SlateColor_1) == 0x000110, "Member 'WI_PerkAbility_Sprint_C_ExecuteUbergraph_WI_PerkAbility_Sprint::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0
// 0x0030 (0x0030 - 0x0000)
struct WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0 final
{
public:
	struct FInputActionValue                      ActionValue;                                       // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         ElapsedTime;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggeredTime;                                     // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UInputAction*                     SourceAction;                                      // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0) == 0x000008, "Wrong alignment on WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0");
static_assert(sizeof(WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0) == 0x000030, "Wrong size on WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0");
static_assert(offsetof(WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0, ActionValue) == 0x000000, "Member 'WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0::ActionValue' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0, ElapsedTime) == 0x000020, "Member 'WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0::ElapsedTime' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0, TriggeredTime) == 0x000024, "Member 'WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0::TriggeredTime' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0, SourceAction) == 0x000028, "Member 'WI_PerkAbility_Sprint_C_InpActEvt_IA_Sprint_K2Node_EnhancedInputActionEvent_0::SourceAction' has a wrong offset!");

// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262
// 0x0010 (0x0010 - 0x0000)
struct WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262 final
{
public:
	class UAsyncAction_ListenForGameplayMessage*  ProxyObject;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ActualChannel;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262) == 0x000008, "Wrong alignment on WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262");
static_assert(sizeof(WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262) == 0x000010, "Wrong size on WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262");
static_assert(offsetof(WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262, ProxyObject) == 0x000000, "Member 'WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262::ProxyObject' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262, ActualChannel) == 0x000008, "Member 'WI_PerkAbility_Sprint_C_OnMessageReceived_3A48B7CE4A4B442DED70CD844F45C262::ActualChannel' has a wrong offset!");

// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WI_PerkAbility_Sprint_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbility_Sprint_C_PreConstruct) == 0x000001, "Wrong alignment on WI_PerkAbility_Sprint_C_PreConstruct");
static_assert(sizeof(WI_PerkAbility_Sprint_C_PreConstruct) == 0x000001, "Wrong size on WI_PerkAbility_Sprint_C_PreConstruct");
static_assert(offsetof(WI_PerkAbility_Sprint_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WI_PerkAbility_Sprint_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WI_PerkAbility_Sprint.WI_PerkAbility_Sprint_C.Tick
// 0x003C (0x003C - 0x0000)
struct WI_PerkAbility_Sprint_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_PerkAbility_Sprint_C_Tick) == 0x000004, "Wrong alignment on WI_PerkAbility_Sprint_C_Tick");
static_assert(sizeof(WI_PerkAbility_Sprint_C_Tick) == 0x00003C, "Wrong size on WI_PerkAbility_Sprint_C_Tick");
static_assert(offsetof(WI_PerkAbility_Sprint_C_Tick, MyGeometry) == 0x000000, "Member 'WI_PerkAbility_Sprint_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WI_PerkAbility_Sprint_C_Tick, InDeltaTime) == 0x000038, "Member 'WI_PerkAbility_Sprint_C_Tick::InDeltaTime' has a wrong offset!");

}

