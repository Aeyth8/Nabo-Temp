#include "Logic.hpp"
#include "../pch.h"
#include "../SDK/GameplayTags_structs.hpp"
#include "../SDK/JP_structs.hpp"
#include "../SDK/JP_classes.hpp"
#include "Global.hpp"
#include "Tools/Pointers.h"
#include "Offsets.hpp"


/*
		Helpers
*/

	std::string Logic::Helpers::FGameplayTagParser(const SDK::FGameplayTag& Tag) { return Tag.TagName.ToString(); }
	
	SDK::FGameplayTag SDK::FNeighborLoadout::* Logic::Helpers::NeighborLoadoutPtr[] = { &SDK::FNeighborLoadout::NeighborIdentifier,&SDK::FNeighborLoadout::NeighborPerk, &SDK::FNeighborLoadout::GeneralPerk,&SDK::FNeighborLoadout::NeighborSkin };
	const std::vector<std::string> Logic::Helpers::FNeighborLoadoutName = { " | [NeighborIdentifier]:", " | [NeighborPerk]:", " | [GeneralPerk]:", " | [NeighborSkin]:" };
	std::string Logic::Helpers::NeighborLoadoutParserCache{ "" };
	std::string Logic::Helpers::NeighborLoadoutParser(const SDK::FNeighborLoadout& Loadout) {
		NeighborLoadoutParserCache.clear();
		for (int i{ 0 }; i < FNeighborLoadoutName.size(); ++i) NeighborLoadoutParserCache += FNeighborLoadoutName[i] + FGameplayTagParser(&Loadout->*NeighborLoadoutPtr[i]);
		if (Loadout.Items.Num() > 0) {
			NeighborLoadoutParserCache += " | [Items]: ";
			for (int i{ 0 }; i < Loadout.Items.Num(); ++i) NeighborLoadoutParserCache += ("{ItemIdentifier= " + FGameplayTagParser(Loadout.Items[i].ItemIdentifier) + ", SkinIdentifier= " + FGameplayTagParser(Loadout.Items[i].SkinIdentifier) + "} ");
		}

		return NeighborLoadoutParserCache;
	}

	using namespace A8CL; using namespace Global; using namespace Pointers;

	SDK::FName Logic::NeighborIdentifier{0};
	SDK::FName Logic::NeighborPerk{0};
	SDK::FName Logic::GeneralPerk{0};
	SDK::FName Logic::NeighborSkin{0};

	__int64 Logic::Func::SetNeighborLoadout(SDK::ULocalUserOnlineServicesGameInstanceSubsystem* This, SDK::FGameplayTag& NeighborID, SDK::FNeighborLoadout& NeighborLoadout) {
		LogA("SetNeighborLoadout", "[" + This->GetFullName() + "] - [NeighborID]: " + NeighborID.TagName.ToString() + Helpers::NeighborLoadoutParser(NeighborLoadout));

		//SDK::FGameplayTag NewNeighborID(FString2FName(L"Neighbors.ID.Chad"));
		//SDK::FNeighborLoadout NewNeighborLoadout({FString2FName(L"Neighbors.ID.Chad")}, {FString2FName(L"Perk.Neighbor.PerArne.JetpackVest")}, {FString2FName(L"Perk.General.Sharpshooter")}, {FString2FName(L"Cosmetics.NeighborSkins.Chad.Maid")});

		//SDK::FGameplayTag NewNeighborID(FString2FName(L"Neighbors.ID.Chad"));
		//SDK::FNeighborLoadout NewNeighborLoadout({FString2FName(L"Neighbors.ID.Chad")}, {FString2FName(L"Perk.Neighbor.Chad.WhirlingBlast")}, {FString2FName(L"Perk.General.Sharpshooter")}, {FString2FName(L"Cosmetics.NeighborSkins.Chad.Maid")});

		if (&NeighborIdentifier != 0 && &NeighborPerk != 0 && &GeneralPerk != 0 && &NeighborSkin != 0)
		{
			SDK::FGameplayTag NewNeighborID(NeighborIdentifier);
			SDK::FNeighborLoadout NewNeighborLoadout({ NeighborIdentifier }, { NeighborPerk }, { GeneralPerk }, { NeighborSkin });

			LogA("SetNeighborLoadout", "[OVERRIDDEN] - [NeighborID]: " + NewNeighborID.TagName.ToString() + Helpers::NeighborLoadoutParser(NewNeighborLoadout));

			This->SetDefaultNeighborID(NewNeighborID);
			This->SavePlayerLoadout();

			return OFF::SetNeighborLoadout.VerifyFC<SetNeighborLoadout_T>()(This, NewNeighborID, NewNeighborLoadout);
		}

		return OFF::SetNeighborLoadout.VerifyFC<SetNeighborLoadout_T>()(This, NeighborID, NeighborLoadout);
	}

