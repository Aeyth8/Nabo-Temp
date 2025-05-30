#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WI_Currency

#include "Basic.hpp"

#include "WI_Currency_classes.hpp"
#include "WI_Currency_parameters.hpp"


namespace SDK
{

// Function WI_Currency.WI_Currency_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     CurrencyID                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                                   AddedAmount                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewTotalAmount                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::CREATEDELEGATE_PROXYFUNCTION_0(const struct FGameplayTag& CurrencyID, const int32 AddedAmount, const int32 NewTotalAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WI_Currency_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.CurrencyID = std::move(CurrencyID);
	Parms.AddedAmount = AddedAmount;
	Parms.NewTotalAmount = NewTotalAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.ExecuteUbergraph_WI_Currency
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::ExecuteUbergraph_WI_Currency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "ExecuteUbergraph_WI_Currency");

	Params::WI_Currency_C_ExecuteUbergraph_WI_Currency Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.HandleAnyCurrencyUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     CurrencyTag_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::HandleAnyCurrencyUpdated(const struct FGameplayTag& CurrencyTag_0, int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "HandleAnyCurrencyUpdated");

	Params::WI_Currency_C_HandleAnyCurrencyUpdated Parms{};

	Parms.CurrencyTag_0 = std::move(CurrencyTag_0);
	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWI_Currency_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WI_Currency.WI_Currency_C.OnLoaded_1AC7104047198562FA7C1E82C7C56F65
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::OnLoaded_1AC7104047198562FA7C1E82C7C56F65(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "OnLoaded_1AC7104047198562FA7C1E82C7C56F65");

	Params::WI_Currency_C_OnLoaded_1AC7104047198562FA7C1E82C7C56F65 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.OnMessageReceived_9D67AB524A6E8C9A941C14A45467A2C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAsyncAction_ListenForGameplayMessage*ProxyObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     ActualChannel                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::OnMessageReceived_9D67AB524A6E8C9A941C14A45467A2C6(class UAsyncAction_ListenForGameplayMessage* ProxyObject, const struct FGameplayTag& ActualChannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "OnMessageReceived_9D67AB524A6E8C9A941C14A45467A2C6");

	Params::WI_Currency_C_OnMessageReceived_9D67AB524A6E8C9A941C14A45467A2C6 Parms{};

	Parms.ProxyObject = ProxyObject;
	Parms.ActualChannel = std::move(ActualChannel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.OnReady_20CC0EF1448DE84A2218C79905D5A7E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCurrencySupported                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::OnReady_20CC0EF1448DE84A2218C79905D5A7E8(int32 Amount, bool IsCurrencySupported)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "OnReady_20CC0EF1448DE84A2218C79905D5A7E8");

	Params::WI_Currency_C_OnReady_20CC0EF1448DE84A2218C79905D5A7E8 Parms{};

	Parms.Amount = Amount;
	Parms.IsCurrencySupported = IsCurrencySupported;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.OnReady_C5A042D3487085E28CF3E8A0E626AF67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCurrencySupported                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::OnReady_C5A042D3487085E28CF3E8A0E626AF67(int32 Amount, bool IsCurrencySupported)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "OnReady_C5A042D3487085E28CF3E8A0E626AF67");

	Params::WI_Currency_C_OnReady_C5A042D3487085E28CF3E8A0E626AF67 Parms{};

	Parms.Amount = Amount;
	Parms.IsCurrencySupported = IsCurrencySupported;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "PreConstruct");

	Params::WI_Currency_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::SetBackgroundColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "SetBackgroundColor");

	Params::WI_Currency_C_SetBackgroundColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.SetCurrencyAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UOnlineCurrency>   Currency_Soft_Asset                                    (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UWI_Currency_C::SetCurrencyAsset(TSoftObjectPtr<class UOnlineCurrency> Currency_Soft_Asset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "SetCurrencyAsset");

	Params::WI_Currency_C_SetCurrencyAsset Parms{};

	Parms.Currency_Soft_Asset = Currency_Soft_Asset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.SetIconSoftTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        SoftTexture                                            (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UWI_Currency_C::SetIconSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "SetIconSoftTexture");

	Params::WI_Currency_C_SetIconSoftTexture Parms{};

	Parms.SoftTexture = SoftTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.SetIsLoading
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLoading_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::SetIsLoading(bool IsLoading_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "SetIsLoading");

	Params::WI_Currency_C_SetIsLoading Parms{};

	Parms.IsLoading_0 = IsLoading_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WI_Currency.WI_Currency_C.SetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWI_Currency_C::SetValue(int32 Value_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WI_Currency_C", "SetValue");

	Params::WI_Currency_C_SetValue Parms{};

	Parms.Value_0 = Value_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

