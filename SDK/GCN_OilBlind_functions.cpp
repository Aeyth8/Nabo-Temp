#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_OilBlind

#include "Basic.hpp"

#include "GCN_OilBlind_classes.hpp"
#include "GCN_OilBlind_parameters.hpp"


namespace SDK
{

// Function GCN_OilBlind.GCN_OilBlind_C.Enable
// (BlueprintCallable, BlueprintEvent)

void AGCN_OilBlind_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "Enable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_OilBlind.GCN_OilBlind_C.EnableOilEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_OilBlind_C::EnableOilEffect(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "EnableOilEffect");

	Params::GCN_OilBlind_C_EnableOilEffect Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_OilBlind.GCN_OilBlind_C.ExecuteUbergraph_GCN_OilBlind
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCN_OilBlind_C::ExecuteUbergraph_GCN_OilBlind(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "ExecuteUbergraph_GCN_OilBlind");

	Params::GCN_OilBlind_C_ExecuteUbergraph_GCN_OilBlind Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCN_OilBlind.GCN_OilBlind_C.GetEffectCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AGCN_OilBlind_C::GetEffectCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "GetEffectCount");

	Params::GCN_OilBlind_C_GetEffectCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_OilBlind.GCN_OilBlind_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCN_OilBlind_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "OnActive");

	Params::GCN_OilBlind_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters_0 = std::move(Parameters_0);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_OilBlind.GCN_OilBlind_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters_0                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGCN_OilBlind_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "OnRemove");

	Params::GCN_OilBlind_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters_0 = std::move(Parameters_0);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCN_OilBlind.GCN_OilBlind_C.TimelineDrip__FinishedFunc
// (BlueprintEvent)

void AGCN_OilBlind_C::TimelineDrip__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "TimelineDrip__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_OilBlind.GCN_OilBlind_C.TimelineDrip__UpdateFunc
// (BlueprintEvent)

void AGCN_OilBlind_C::TimelineDrip__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "TimelineDrip__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_OilBlind.GCN_OilBlind_C.TimelineErosion__FinishedFunc
// (BlueprintEvent)

void AGCN_OilBlind_C::TimelineErosion__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "TimelineErosion__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_OilBlind.GCN_OilBlind_C.TimelineErosion__UpdateFunc
// (BlueprintEvent)

void AGCN_OilBlind_C::TimelineErosion__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "TimelineErosion__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCN_OilBlind.GCN_OilBlind_C.UpdateVisuals
// (BlueprintCallable, BlueprintEvent)

void AGCN_OilBlind_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_OilBlind_C", "UpdateVisuals");

	UObject::ProcessEvent(Func, nullptr);
}

}

