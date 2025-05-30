#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteWheelEntryWI

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function EmoteWheelEntryWI.EmoteWheelEntryWI_C.ExecuteUbergraph_EmoteWheelEntryWI
// 0x01C0 (0x01C0 - 0x0000)
struct EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0xF];                                       // 0x0021(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0030(0x00D0)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0108(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class II_ItemWheel_C>        K2Node_DynamicCast_AsI_Item_Wheel;                 // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0164(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterItemWheelComponent_C*         CallFunc_GetItemWheelComponent_Return;             // 0x0178(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue; // 0x0188(0x0020)()
	class UAbilitySystemComponentIW*              K2Node_DynamicCast_AsAbility_System_Component_IW;  // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CancelAbilitiesByTag_ReturnValue;         // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI) == 0x000010, "Wrong alignment on EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI");
static_assert(sizeof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI) == 0x0001C0, "Wrong size on EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, EntryPoint) == 0x000000, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::EntryPoint' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, Temp_object_Variable) == 0x000010, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000030, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_PlayAnimation_ReturnValue) == 0x000100, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_Event_MyGeometry) == 0x000108, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_Event_InDeltaTime) == 0x000140, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000148, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_DynamicCast_AsI_Item_Wheel) == 0x000150, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_DynamicCast_AsI_Item_Wheel' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_DynamicCast_bSuccess_1) == 0x000160, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_CreateDelegate_OutputDelegate) == 0x000164, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_GetItemWheelComponent_Return) == 0x000178, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_GetItemWheelComponent_Return' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000180, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000188, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_DynamicCast_AsAbility_System_Component_IW) == 0x0001A8, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_DynamicCast_AsAbility_System_Component_IW' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, K2Node_DynamicCast_bSuccess_2) == 0x0001B0, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI, CallFunc_CancelAbilitiesByTag_ReturnValue) == 0x0001B1, "Member 'EmoteWheelEntryWI_C_ExecuteUbergraph_EmoteWheelEntryWI::CallFunc_CancelAbilitiesByTag_ReturnValue' has a wrong offset!");

// Function EmoteWheelEntryWI.EmoteWheelEntryWI_C.GetColorAndOpacity_0
// 0x0020 (0x0020 - 0x0000)
struct EmoteWheelEntryWI_C_GetColorAndOpacity_0 final
{
public:
	struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteWheelEntryWI_C_GetColorAndOpacity_0) == 0x000004, "Wrong alignment on EmoteWheelEntryWI_C_GetColorAndOpacity_0");
static_assert(sizeof(EmoteWheelEntryWI_C_GetColorAndOpacity_0) == 0x000020, "Wrong size on EmoteWheelEntryWI_C_GetColorAndOpacity_0");
static_assert(offsetof(EmoteWheelEntryWI_C_GetColorAndOpacity_0, ReturnValue) == 0x000000, "Member 'EmoteWheelEntryWI_C_GetColorAndOpacity_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_GetColorAndOpacity_0, CallFunc_SelectColor_ReturnValue) == 0x000010, "Member 'EmoteWheelEntryWI_C_GetColorAndOpacity_0::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

// Function EmoteWheelEntryWI.EmoteWheelEntryWI_C.OnEntryHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature final
{
public:
	class UItemDefinition*                        HoveredItemDefinition;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature) == 0x000008, "Wrong alignment on EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature");
static_assert(sizeof(EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature) == 0x000008, "Wrong size on EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature");
static_assert(offsetof(EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature, HoveredItemDefinition) == 0x000000, "Member 'EmoteWheelEntryWI_C_OnEntryHovered__DelegateSignature::HoveredItemDefinition' has a wrong offset!");

// Function EmoteWheelEntryWI.EmoteWheelEntryWI_C.OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017
// 0x0008 (0x0008 - 0x0000)
struct EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017) == 0x000008, "Wrong alignment on EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017");
static_assert(sizeof(EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017) == 0x000008, "Wrong size on EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017");
static_assert(offsetof(EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017, Loaded) == 0x000000, "Member 'EmoteWheelEntryWI_C_OnLoaded_3AF18C4F4A21BA73C5B0B88A30247017::Loaded' has a wrong offset!");

// Function EmoteWheelEntryWI.EmoteWheelEntryWI_C.Tick
// 0x003C (0x003C - 0x0000)
struct EmoteWheelEntryWI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EmoteWheelEntryWI_C_Tick) == 0x000004, "Wrong alignment on EmoteWheelEntryWI_C_Tick");
static_assert(sizeof(EmoteWheelEntryWI_C_Tick) == 0x00003C, "Wrong size on EmoteWheelEntryWI_C_Tick");
static_assert(offsetof(EmoteWheelEntryWI_C_Tick, MyGeometry) == 0x000000, "Member 'EmoteWheelEntryWI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(EmoteWheelEntryWI_C_Tick, InDeltaTime) == 0x000038, "Member 'EmoteWheelEntryWI_C_Tick::InDeltaTime' has a wrong offset!");

}

