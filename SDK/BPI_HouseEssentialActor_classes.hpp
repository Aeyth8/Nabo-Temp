#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_HouseEssentialActor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_HouseEssentialActor.BPI_HouseEssentialActor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_HouseEssentialActor_C final : public IInterface
{
public:
	void GetHealth(double* CurrentHealth) const;
	void GetMaxHealth(double* MaxHealth) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_HouseEssentialActor_C">();
	}
	static class IBPI_HouseEssentialActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_HouseEssentialActor_C>();
	}
};
static_assert(alignof(IBPI_HouseEssentialActor_C) == 0x000008, "Wrong alignment on IBPI_HouseEssentialActor_C");
static_assert(sizeof(IBPI_HouseEssentialActor_C) == 0x000028, "Wrong size on IBPI_HouseEssentialActor_C");

}

