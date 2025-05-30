#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AC_HitDirection

#include "Basic.hpp"

#include "AC_HitDirection_classes.hpp"
#include "AC_HitDirection_parameters.hpp"


namespace SDK
{

// Function AC_HitDirection.AC_HitDirection_C.CreateHealDirectionMarker
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  HealAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_HitDirection_C::CreateHealDirectionMarker(const struct FVector& HitLocation, double HealAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "CreateHealDirectionMarker");

	Params::AC_HitDirection_C_CreateHealDirectionMarker Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.HealAmount = HealAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AC_HitDirection.AC_HitDirection_C.CreateHitDirectionMarker
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_HitDirection_C::CreateHitDirectionMarker(const struct FVector& HitLocation, double Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "CreateHitDirectionMarker");

	Params::AC_HitDirection_C_CreateHitDirectionMarker Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AC_HitDirection.AC_HitDirection_C.ExecuteUbergraph_AC_HitDirection
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_HitDirection_C::ExecuteUbergraph_AC_HitDirection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "ExecuteUbergraph_AC_HitDirection");

	Params::AC_HitDirection_C_ExecuteUbergraph_AC_HitDirection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AC_HitDirection.AC_HitDirection_C.FindDirections
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_HitDirections                         PrimaryDirection                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_HitDirections                         SecondaryDirection                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_HitDirection_C::FindDirections(const struct FVector& HitLocation, E_HitDirections* PrimaryDirection, E_HitDirections* SecondaryDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "FindDirections");

	Params::AC_HitDirection_C_FindDirections Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (PrimaryDirection != nullptr)
		*PrimaryDirection = Parms.PrimaryDirection;

	if (SecondaryDirection != nullptr)
		*SecondaryDirection = Parms.SecondaryDirection;
}


// Function AC_HitDirection.AC_HitDirection_C.FindPrimaryDirection
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                          DotProducts                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<E_HitDirections>                 Directions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_HitDirections                         Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_HitDirection_C::FindPrimaryDirection(TArray<double>& DotProducts, TArray<E_HitDirections>& Directions, E_HitDirections* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "FindPrimaryDirection");

	Params::AC_HitDirection_C_FindPrimaryDirection Parms{};

	Parms.DotProducts = std::move(DotProducts);
	Parms.Directions = std::move(Directions);

	UObject::ProcessEvent(Func, &Parms);

	DotProducts = std::move(Parms.DotProducts);
	Directions = std::move(Parms.Directions);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function AC_HitDirection.AC_HitDirection_C.FindSecondaryDirection
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<double>                          DotProducts                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<E_HitDirections>                 Directions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// E_HitDirections                         Output                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAC_HitDirection_C::FindSecondaryDirection(TArray<double>& DotProducts, TArray<E_HitDirections>& Directions, E_HitDirections* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "FindSecondaryDirection");

	Params::AC_HitDirection_C_FindSecondaryDirection Parms{};

	Parms.DotProducts = std::move(DotProducts);
	Parms.Directions = std::move(Directions);

	UObject::ProcessEvent(Func, &Parms);

	DotProducts = std::move(Parms.DotProducts);
	Directions = std::move(Parms.Directions);

	if (Output != nullptr)
		*Output = Parms.Output;
}


// Function AC_HitDirection.AC_HitDirection_C.GetDotProductsFromDirections
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitDirection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<double>                          DotProducts                                            (Parm, OutParm)

void UAC_HitDirection_C::GetDotProductsFromDirections(const struct FVector& HitDirection, TArray<double>* DotProducts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AC_HitDirection_C", "GetDotProductsFromDirections");

	Params::AC_HitDirection_C_GetDotProductsFromDirections Parms{};

	Parms.HitDirection = std::move(HitDirection);

	UObject::ProcessEvent(Func, &Parms);

	if (DotProducts != nullptr)
		*DotProducts = std::move(Parms.DotProducts);
}

}

