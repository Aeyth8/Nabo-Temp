#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_FinancesPurchaseError

#include "Basic.hpp"

#include "IWOnlineServices_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WI_FinancesPurchaseError.WI_FinancesPurchaseError_C.BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WI_FinancesPurchaseError_C_BndEvt__WI_FinancesPurchaseConfirmation_WI_JPButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WI_FinancesPurchaseError.WI_FinancesPurchaseError_C.ExecuteUbergraph_WI_FinancesPurchaseError
// 0x0010 (0x0010 - 0x0000)
struct WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError) == 0x000008, "Wrong alignment on WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError");
static_assert(sizeof(WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError) == 0x000010, "Wrong size on WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError");
static_assert(offsetof(WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError, EntryPoint) == 0x000000, "Member 'WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WI_FinancesPurchaseError_C_ExecuteUbergraph_WI_FinancesPurchaseError::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WI_FinancesPurchaseError.WI_FinancesPurchaseError_C.SetErrorInformation
// 0x00F0 (0x00F0 - 0x0000)
struct WI_FinancesPurchaseError_C_SetErrorInformation final
{
public:
	EPlatformStoreState                           PlatformStoreState;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TransactionId;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0010)()
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0028(0x0010)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0048)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0048)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0010)()
};
static_assert(alignof(WI_FinancesPurchaseError_C_SetErrorInformation) == 0x000008, "Wrong alignment on WI_FinancesPurchaseError_C_SetErrorInformation");
static_assert(sizeof(WI_FinancesPurchaseError_C_SetErrorInformation) == 0x0000F0, "Wrong size on WI_FinancesPurchaseError_C_SetErrorInformation");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, PlatformStoreState) == 0x000000, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::PlatformStoreState' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, TransactionId) == 0x000008, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::TransactionId' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, CallFunc_Map_Find_Value) == 0x000028, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, K2Node_MakeArray_Array) == 0x0000D0, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WI_FinancesPurchaseError_C_SetErrorInformation, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'WI_FinancesPurchaseError_C_SetErrorInformation::CallFunc_Format_ReturnValue' has a wrong offset!");

}

