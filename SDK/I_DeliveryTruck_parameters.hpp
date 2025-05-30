#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_DeliveryTruck

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function I_DeliveryTruck.I_DeliveryTruck_C.HitByDeliveryTruck
// 0x0018 (0x0018 - 0x0000)
struct I_DeliveryTruck_C_HitByDeliveryTruck final
{
public:
	struct FVector                                LaunchVelocity;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(I_DeliveryTruck_C_HitByDeliveryTruck) == 0x000008, "Wrong alignment on I_DeliveryTruck_C_HitByDeliveryTruck");
static_assert(sizeof(I_DeliveryTruck_C_HitByDeliveryTruck) == 0x000018, "Wrong size on I_DeliveryTruck_C_HitByDeliveryTruck");
static_assert(offsetof(I_DeliveryTruck_C_HitByDeliveryTruck, LaunchVelocity) == 0x000000, "Member 'I_DeliveryTruck_C_HitByDeliveryTruck::LaunchVelocity' has a wrong offset!");

}

