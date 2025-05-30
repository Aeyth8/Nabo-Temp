#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Sabotagable

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_Tools_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass I_Sabotagable.I_Sabotagable_C
// 0x0000 (0x0028 - 0x0028)
class II_Sabotagable_C final : public IInterface
{
public:
	void IsSabotaged(bool* Return, class AActor** SabotagingActor, E_Tools* RequiredTool, double* DurabilityCost);
	void Sabotage(class AActor* SabotagingActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"I_Sabotagable_C">();
	}
	static class II_Sabotagable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<II_Sabotagable_C>();
	}
};
static_assert(alignof(II_Sabotagable_C) == 0x000008, "Wrong alignment on II_Sabotagable_C");
static_assert(sizeof(II_Sabotagable_C) == 0x000028, "Wrong size on II_Sabotagable_C");

}

