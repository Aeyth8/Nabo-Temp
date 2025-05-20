#pragma once

#include <string>
#include <vector>
#include "../SDK/GameplayTags_structs.hpp"
#include "../SDK/JP_structs.hpp"
#include "../SDK/JP_classes.hpp"



class Logic
{
public:

	static SDK::FName NeighborIdentifier;
	static SDK::FName NeighborPerk;
	static SDK::FName GeneralPerk;
	static SDK::FName NeighborSkin;

	class Helpers
	{
	public:
		static std::string FGameplayTagParser(const SDK::FGameplayTag& Tag);


	public:

		static SDK::FGameplayTag SDK::FNeighborLoadout::* NeighborLoadoutPtr[];
		const static std::vector<std::string> FNeighborLoadoutName;
		static std::string NeighborLoadoutParserCache;
		static std::string NeighborLoadoutParser(const SDK::FNeighborLoadout& Loadout);

	};

	typedef __int64(__thiscall* SetNeighborLoadout_T)(SDK::ULocalUserOnlineServicesGameInstanceSubsystem* This, SDK::FGameplayTag& NeighborID, SDK::FNeighborLoadout& NeighborLoadout);

	class Func
	{
	public:
		static __int64 SetNeighborLoadout(SDK::ULocalUserOnlineServicesGameInstanceSubsystem* This, SDK::FGameplayTag& NeighborID, SDK::FNeighborLoadout& NeighborLoadout);


	};




};