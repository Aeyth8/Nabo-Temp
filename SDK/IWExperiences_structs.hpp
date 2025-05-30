#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IWExperiences

#include "Basic.hpp"


namespace SDK
{

// Enum IWExperiences.EExperienceLoadState
// NumValues: 0x0008
enum class EExperienceLoadState : uint8
{
	Unloaded                                 = 0,
	Loading                                  = 1,
	LoadingGameFeatures                      = 2,
	LoadingChaosTestingDelay                 = 3,
	ExecutingActions                         = 4,
	Loaded                                   = 5,
	Deactivating                             = 6,
	EExperienceLoadState_MAX                 = 7,
};

}

