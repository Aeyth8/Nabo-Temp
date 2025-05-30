#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_WinscreenNameplate

#include "Basic.hpp"


namespace SDK::Params
{

// Function WI_WinscreenNameplate.WI_WinscreenNameplate_C.ExecuteUbergraph_WI_WinscreenNameplate
// 0x0058 (0x0058 - 0x0000)
struct WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Texture;                        // 0x0008(0x0028)(HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0030(0x0010)()
	bool                                          K2Node_CustomEvent_IsTalking;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate) == 0x000008, "Wrong alignment on WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate");
static_assert(sizeof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate) == 0x000058, "Wrong size on WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate");
static_assert(offsetof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate, EntryPoint) == 0x000000, "Member 'WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate::EntryPoint' has a wrong offset!");
static_assert(offsetof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate, K2Node_CustomEvent_Texture) == 0x000008, "Member 'WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate, K2Node_CustomEvent_InText) == 0x000030, "Member 'WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate, K2Node_CustomEvent_IsTalking) == 0x000040, "Member 'WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate::K2Node_CustomEvent_IsTalking' has a wrong offset!");
static_assert(offsetof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate, CallFunc_SelectFloat_ReturnValue) == 0x000048, "Member 'WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000050, "Member 'WI_WinscreenNameplate_C_ExecuteUbergraph_WI_WinscreenNameplate::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WI_WinscreenNameplate.WI_WinscreenNameplate_C.SetPortraitAndName
// 0x0038 (0x0038 - 0x0000)
struct WI_WinscreenNameplate_C_SetPortraitAndName final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                   InText;                                            // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WI_WinscreenNameplate_C_SetPortraitAndName) == 0x000008, "Wrong alignment on WI_WinscreenNameplate_C_SetPortraitAndName");
static_assert(sizeof(WI_WinscreenNameplate_C_SetPortraitAndName) == 0x000038, "Wrong size on WI_WinscreenNameplate_C_SetPortraitAndName");
static_assert(offsetof(WI_WinscreenNameplate_C_SetPortraitAndName, Texture) == 0x000000, "Member 'WI_WinscreenNameplate_C_SetPortraitAndName::Texture' has a wrong offset!");
static_assert(offsetof(WI_WinscreenNameplate_C_SetPortraitAndName, InText) == 0x000028, "Member 'WI_WinscreenNameplate_C_SetPortraitAndName::InText' has a wrong offset!");

// Function WI_WinscreenNameplate.WI_WinscreenNameplate_C.SetTalkingVisibility
// 0x0001 (0x0001 - 0x0000)
struct WI_WinscreenNameplate_C_SetTalkingVisibility final
{
public:
	bool                                          IsTalking;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WI_WinscreenNameplate_C_SetTalkingVisibility) == 0x000001, "Wrong alignment on WI_WinscreenNameplate_C_SetTalkingVisibility");
static_assert(sizeof(WI_WinscreenNameplate_C_SetTalkingVisibility) == 0x000001, "Wrong size on WI_WinscreenNameplate_C_SetTalkingVisibility");
static_assert(offsetof(WI_WinscreenNameplate_C_SetTalkingVisibility, IsTalking) == 0x000000, "Member 'WI_WinscreenNameplate_C_SetTalkingVisibility::IsTalking' has a wrong offset!");

}

