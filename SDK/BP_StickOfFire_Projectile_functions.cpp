#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StickOfFire_Projectile

#include "Basic.hpp"

#include "BP_StickOfFire_Projectile_classes.hpp"
#include "BP_StickOfFire_Projectile_parameters.hpp"


namespace SDK
{

// Function BP_StickOfFire_Projectile.BP_StickOfFire_Projectile_C.DetermineSpawnLocationAndNormal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StickOfFire_Projectile_C::DetermineSpawnLocationAndNormal(const struct FHitResult& Hit, struct FVector* Location, struct FVector* Normal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StickOfFire_Projectile_C", "DetermineSpawnLocationAndNormal");

	Params::BP_StickOfFire_Projectile_C_DetermineSpawnLocationAndNormal Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Normal != nullptr)
		*Normal = std::move(Parms.Normal);
}


// Function BP_StickOfFire_Projectile.BP_StickOfFire_Projectile_C.ExecuteUbergraph_BP_StickOfFire_Projectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StickOfFire_Projectile_C::ExecuteUbergraph_BP_StickOfFire_Projectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StickOfFire_Projectile_C", "ExecuteUbergraph_BP_StickOfFire_Projectile");

	Params::BP_StickOfFire_Projectile_C_ExecuteUbergraph_BP_StickOfFire_Projectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StickOfFire_Projectile.BP_StickOfFire_Projectile_C.SpawnFireSpot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          SpawnLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     OwningPlayerState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StickOfFire_Projectile_C::SpawnFireSpot(const struct FVector& SpawnLocation, const struct FVector& Normal, class APlayerState* OwningPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StickOfFire_Projectile_C", "SpawnFireSpot");

	Params::BP_StickOfFire_Projectile_C_SpawnFireSpot Parms{};

	Parms.SpawnLocation = std::move(SpawnLocation);
	Parms.Normal = std::move(Normal);
	Parms.OwningPlayerState = OwningPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StickOfFire_Projectile.BP_StickOfFire_Projectile_C.HandleProjectileStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_StickOfFire_Projectile_C::HandleProjectileStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StickOfFire_Projectile_C", "HandleProjectileStop");

	Params::BP_StickOfFire_Projectile_C_HandleProjectileStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StickOfFire_Projectile.BP_StickOfFire_Projectile_C.PooledBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_StickOfFire_Projectile_C::PooledBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StickOfFire_Projectile_C", "PooledBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

