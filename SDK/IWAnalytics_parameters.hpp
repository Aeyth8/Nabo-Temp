#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWAnalytics

#include "Basic.hpp"


namespace SDK::Params
{

// Function IWAnalytics.IWAnalyticsBlueprintFunctionLibrary.EnqueueAnalyticsEvent
// 0x0010 (0x0010 - 0x0000)
struct IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent final
{
public:
	class UObject*                                WorldContext;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIWAnalyticsEvent*                      AnalyticsEvent;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent) == 0x000008, "Wrong alignment on IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent");
static_assert(sizeof(IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent) == 0x000010, "Wrong size on IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent");
static_assert(offsetof(IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent, WorldContext) == 0x000000, "Member 'IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent::WorldContext' has a wrong offset!");
static_assert(offsetof(IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent, AnalyticsEvent) == 0x000008, "Member 'IWAnalyticsBlueprintFunctionLibrary_EnqueueAnalyticsEvent::AnalyticsEvent' has a wrong offset!");

// Function IWAnalytics.IWAnalyticsBlueprintFunctionLibrary.FlushQueuedAnalyticsEvents
// 0x0008 (0x0008 - 0x0000)
struct IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents final
{
public:
	class UObject*                                WorldContext;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents) == 0x000008, "Wrong alignment on IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents");
static_assert(sizeof(IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents) == 0x000008, "Wrong size on IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents");
static_assert(offsetof(IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents, WorldContext) == 0x000000, "Member 'IWAnalyticsBlueprintFunctionLibrary_FlushQueuedAnalyticsEvents::WorldContext' has a wrong offset!");

// Function IWAnalytics.IWAnalyticsSubsystem.EnqueueAnalyticsEvent
// 0x0008 (0x0008 - 0x0000)
struct IWAnalyticsSubsystem_EnqueueAnalyticsEvent final
{
public:
	class UIWAnalyticsEvent*                      Event;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IWAnalyticsSubsystem_EnqueueAnalyticsEvent) == 0x000008, "Wrong alignment on IWAnalyticsSubsystem_EnqueueAnalyticsEvent");
static_assert(sizeof(IWAnalyticsSubsystem_EnqueueAnalyticsEvent) == 0x000008, "Wrong size on IWAnalyticsSubsystem_EnqueueAnalyticsEvent");
static_assert(offsetof(IWAnalyticsSubsystem_EnqueueAnalyticsEvent, Event) == 0x000000, "Member 'IWAnalyticsSubsystem_EnqueueAnalyticsEvent::Event' has a wrong offset!");

// Function IWAnalytics.IWAnalyticsSubsystem.FlushQueuedAnalyticsEvents
// 0x0001 (0x0001 - 0x0000)
struct IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents) == 0x000001, "Wrong alignment on IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents");
static_assert(sizeof(IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents) == 0x000001, "Wrong size on IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents");
static_assert(offsetof(IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents, ReturnValue) == 0x000000, "Member 'IWAnalyticsSubsystem_FlushQueuedAnalyticsEvents::ReturnValue' has a wrong offset!");

}

