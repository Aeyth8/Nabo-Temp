#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ClosetStore

#include "Basic.hpp"

#include "BP_ClosetStore_classes.hpp"
#include "BP_ClosetStore_parameters.hpp"


namespace SDK
{

// Function BP_ClosetStore.BP_ClosetStore_C.BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ClosetStore_C::BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClosetStore.BP_ClosetStore_C.BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ClosetStore_C::BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_ClosetStore_C_BndEvt__BP_ClosetStore_BoxOpen_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClosetStore.BP_ClosetStore_C.Close Closet
// (BlueprintCallable, BlueprintEvent)

void ABP_ClosetStore_C::Close_Closet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "Close Closet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ClosetStore.BP_ClosetStore_C.Cosmetic Collect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ClosetStore_C::Cosmetic_Collect(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "Cosmetic Collect");

	Params::BP_ClosetStore_C_Cosmetic_Collect Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClosetStore.BP_ClosetStore_C.ExecuteUbergraph_BP_ClosetStore
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ClosetStore_C::ExecuteUbergraph_BP_ClosetStore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "ExecuteUbergraph_BP_ClosetStore");

	Params::BP_ClosetStore_C_ExecuteUbergraph_BP_ClosetStore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClosetStore.BP_ClosetStore_C.HideInterior
// (BlueprintCallable, BlueprintEvent)

void ABP_ClosetStore_C::HideInterior()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "HideInterior");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ClosetStore.BP_ClosetStore_C.MeshesToHide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPrimitiveComponent*>      TargetMeshes                                           (Parm, OutParm, ContainsInstancedReference)

void ABP_ClosetStore_C::MeshesToHide(TArray<class UPrimitiveComponent*>* TargetMeshes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "MeshesToHide");

	Params::BP_ClosetStore_C_MeshesToHide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetMeshes != nullptr)
		*TargetMeshes = std::move(Parms.TargetMeshes);
}


// Function BP_ClosetStore.BP_ClosetStore_C.Open Closet
// (BlueprintCallable, BlueprintEvent)

void ABP_ClosetStore_C::Open_Closet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "Open Closet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ClosetStore.BP_ClosetStore_C.PlayDoorSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       NewSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ClosetStore_C::PlayDoorSound(class USoundBase* NewSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "PlayDoorSound");

	Params::BP_ClosetStore_C_PlayDoorSound Parms{};

	Parms.NewSound = NewSound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClosetStore.BP_ClosetStore_C.SetTeamMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SameTeam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Red                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               Blue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ClosetStore_C::SetTeamMaterial(bool SameTeam, class UMaterialInterface* Red, class UMaterialInterface* Blue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "SetTeamMaterial");

	Params::BP_ClosetStore_C_SetTeamMaterial Parms{};

	Parms.SameTeam = SameTeam;
	Parms.Red = Red;
	Parms.Blue = Blue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ClosetStore.BP_ClosetStore_C.ShouldClose
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ClosetStore_C::ShouldClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "ShouldClose");

	Params::BP_ClosetStore_C_ShouldClose Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ClosetStore.BP_ClosetStore_C.ShouldOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_ClosetStore_C::ShouldOpen(class UObject* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ClosetStore_C", "ShouldOpen");

	Params::BP_ClosetStore_C_ShouldOpen Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

