#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_ScreenSplat_Container

#include "Basic.hpp"

#include "WI_ScreenSplat_Container_classes.hpp"
#include "WI_ScreenSplat_Container_parameters.hpp"


namespace SDK
{

// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_ScreenSplat_Container_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWI_ScreenSplat_Base_C*           SplatEffectWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::CustomEvent(class UWI_ScreenSplat_Base_C* SplatEffectWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "CustomEvent");

	Params::WI_ScreenSplat_Container_C_CustomEvent Parms{};

	Parms.SplatEffectWidget = SplatEffectWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.ExecuteUbergraph_WI_ScreenSplat_Container
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::ExecuteUbergraph_WI_ScreenSplat_Container(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "ExecuteUbergraph_WI_ScreenSplat_Container");

	Params::WI_ScreenSplat_Container_C_ExecuteUbergraph_WI_ScreenSplat_Container Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.HideSplat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             EffectClassToRemove                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::HideSplat(TSoftClassPtr<class UClass> EffectClassToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "HideSplat");

	Params::WI_ScreenSplat_Container_C_HideSplat Parms{};

	Parms.EffectClassToRemove = EffectClassToRemove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.OnLoaded_227F1FBE4C7CAAA52008DDA02EB63EB2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::OnLoaded_227F1FBE4C7CAAA52008DDA02EB63EB2(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "OnLoaded_227F1FBE4C7CAAA52008DDA02EB63EB2");

	Params::WI_ScreenSplat_Container_C_OnLoaded_227F1FBE4C7CAAA52008DDA02EB63EB2 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.OnMessageReceived_9D50C2334FDDCFCB93E2BF98325C6B12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::OnMessageReceived_9D50C2334FDDCFCB93E2BF98325C6B12(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "OnMessageReceived_9D50C2334FDDCFCB93E2BF98325C6B12");

	Params::WI_ScreenSplat_Container_C_OnMessageReceived_9D50C2334FDDCFCB93E2BF98325C6B12 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.OnMessageReceived_EB37BD1D4EBB2F53BB2EACB29C43A248
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::OnMessageReceived_EB37BD1D4EBB2F53BB2EACB29C43A248(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "OnMessageReceived_EB37BD1D4EBB2F53BB2EACB29C43A248");

	Params::WI_ScreenSplat_Container_C_OnMessageReceived_EB37BD1D4EBB2F53BB2EACB29C43A248 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_ScreenSplat_Container.WI_ScreenSplat_Container_C.ShowSplat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             EffectClassToAdd                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWI_ScreenSplat_Container_C::ShowSplat(TSoftClassPtr<class UClass> EffectClassToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_ScreenSplat_Container_C", "ShowSplat");

	Params::WI_ScreenSplat_Container_C_ShowSplat Parms{};

	Parms.EffectClassToAdd = EffectClassToAdd;

	UObject::ProcessEvent(Func, &Parms);
}

}

