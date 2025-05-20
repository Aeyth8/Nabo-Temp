#include "pch.h"

#include "Aeyth8/Global.hpp"
#include "SDK/JP_classes.hpp"
#include "Aeyth8/Logic.hpp"
#include "Aeyth8/Offsets.hpp"
#include "Aeyth8/Tools/Pointers.h"

/*

	Written by Aeyth8 (in a rush)

*/

using namespace A8CL; using namespace Global;

static void SetNeighbor(std::wstring& Param)
{
	Param = L"Neighbors.Id." + Param;
	Logic::NeighborIdentifier = ((SDK::FName)Pointers::FString2FName(SDK::FString(Param.c_str())));

}

static void SetPerk(std::wstring& Param)
{
	Param = L"Perk.General." + Param;
	Logic::GeneralPerk = ((SDK::FName)Pointers::FString2FName(SDK::FString(Param.c_str())));
}

static void SetNeighborPerk(std::wstring& Param)
{
	Param = L"Perk.Neighbor." + Param;
	Logic::NeighborPerk = ((SDK::FName)Pointers::FString2FName(SDK::FString(Param.c_str())));
}

static void SetSkin(std::wstring& Param)
{
	Param = L"Cosmetics.NeighborSkins." + Param;
	Logic::NeighborSkin = ((SDK::FName)Pointers::FString2FName(SDK::FString(Param.c_str())));
}

static void SetNeighborLoadoutT()
{
	LogA("SetNeighborLoadout", "Manually called");
	SDK::FGameplayTag NewNeighborID(Logic::NeighborIdentifier);
	SDK::FNeighborLoadout NewLoadout({ Logic::NeighborIdentifier }, { Logic::NeighborPerk }, { Logic::GeneralPerk }, { Logic::NeighborSkin });
	//LogA("SetNeighborLoadout", Pointers::GetLastOf<SDK::ULocalUserOnlineServicesGameInstanceSubsystem>(false)->GetFullName());
	Pointers::GetLastOf<SDK::ULocalUserOnlineServicesGameInstanceSubsystem>(false)->SetNeighborLoadout(NewNeighborID, NewLoadout);
	//OFF::SetNeighborLoadout.VerifyFC<Logic::SetNeighborLoadout_T>()(Pointers::GetLastOf<SDK::ULocalUserOnlineServicesGameInstanceSubsystem>(false), NewNeighborID, NewLoadout);
}

struct CustomCommand { const std::string Command; void (*Func)(std::wstring& Param); };
const static std::vector<CustomCommand> Commands =
{
	{"setneighborperk", SetNeighborPerk},
	{"setneighbor", SetNeighbor},
	{"setperk", SetPerk},	
	{"setskin", SetSkin},
};
//const static std::string Commands[] = { "setneighbor", "setperk", "setneighborperk", "setskin" };

typedef void(__thiscall* UConsole_T)(SDK::UConsole* This, SDK::FString& Command);
void UConsole(SDK::UConsole* This, SDK::FString& Command)
{
	std::string CommandStr = Command.ToString();
	LogA("UConsole", CommandStr);


	std::string Parsed;
	for (char Character : CommandStr)
	{
		Parsed.push_back(std::tolower(Character));

	}

	if (Parsed == "setneighborloadout")
	{
		SetNeighborLoadoutT();
		return;
	}

	for (const CustomCommand& Cmd : Commands)
	{
		if (Parsed.substr(0, Cmd.Command.size()) == Cmd.Command)
		{
			LogA(Cmd.Command, Parsed.substr(Cmd.Command.size() + 1, Parsed.size() - Cmd.Command.size() - 1));
			std::wstring Param(Parsed.begin() + Cmd.Command.size() + 1, Parsed.end());
			Cmd.Func(Param);
			break;
		}

	}

	OFF::UConsole.VerifyFC<UConsole_T>()(This, Command);
}


std::vector<Hooks::HookStructure> HookList =
{
	{OFF::SetNeighborLoadout, Logic::Func::SetNeighborLoadout},
	{OFF::UConsole, UConsole},
};

static void Init()
{
	LogInit();

	GBA = (uintptr_t)GetModuleHandleA(0);

	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	Hooks::Init();
	Hooks::CreateAndEnableHooks(HookList);

	while (Pointers::UWorld() == nullptr)
	{

		Sleep(2000);
	}

	Pointers::ConstructUConsole();
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH) return 1;

	if (Proxy::Attach(hModule)) {
		HANDLE Thread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)Init, 0, 0, 0);
		if (Thread != nullptr) CloseHandle(Thread);
	}

	return 1;
}