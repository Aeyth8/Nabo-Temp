#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_ImplementsInteractableInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function TT_ImplementsInteractableInterface.TT_ImplementsInteractableInterface_C.ShouldFilterTargetBP
// 0x0018 (0x0018 - 0x0000)
struct TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP final
{
public:
	const class AActor*                           HitActor;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class AActor*                           Source;                                            // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP) == 0x000008, "Wrong alignment on TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP");
static_assert(sizeof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP) == 0x000018, "Wrong size on TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP");
static_assert(offsetof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP, HitActor) == 0x000000, "Member 'TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP::HitActor' has a wrong offset!");
static_assert(offsetof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP, Source) == 0x000008, "Member 'TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP::Source' has a wrong offset!");
static_assert(offsetof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP, ReturnValue) == 0x000010, "Member 'TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP, CallFunc_DoesImplementInterface_ReturnValue) == 0x000011, "Member 'TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'TT_ImplementsInteractableInterface_C_ShouldFilterTargetBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

