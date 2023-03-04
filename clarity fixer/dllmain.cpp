#define _WINSOCK_DEPRECATED_NO_WARNINGS // ratio + don't care
#define _CRT_SECURE_NO_WARNINGS // ratio + don't care
#include <Windows.h>
#include <iostream>
#include <cstdint>
#include <intrin.h>
#include <filesystem>
#include <fstream>
#include <array>
#include <map>
#include <unordered_map>
#include "Imports.h"
#include "cheat.h"
#include "Other/patches.hpp"

void main()
{
	MEMORY_BASIC_INFORMATION mem;
	if (!VirtualQuery(reinterpret_cast<void*>(0x36080000), &mem, sizeof(mem)))
	{
		printf("[-] failed to query memory\n");
		Sleep(3000);
		TerminateProcess(reinterpret_cast<HANDLE>(-1), 0);
	}

	if (mem.RegionSize != 0x237000)
	{
		printf("[-] failed to find memory\n");
		Sleep(3000);
		TerminateProcess(reinterpret_cast<HANDLE>(-1), 0);
	}
	void* hack_address = reinterpret_cast<void*>(0x36080000);
	printf("	init clarity...\n");
	memcpy(hack_address, rawData, sizeof(rawData));
	printf("	inited!\n");
	printf("	waiting serverbrowser.dll...\n");
	while (!GetModuleHandleA("serverbrowser.dll")) Sleep(100);
	printf("	serverbrowser.dll founted!\n");
	printf("	patching cheat name...\n");
	//patches();
	printf("	patched\n");
	printf("	resolving imports...\n");
	for (const auto& CurrentImport : g_aImports)
	{
		HMODULE hModule = LoadLibraryA(std::get< 1 >(CurrentImport).c_str());
		if (!hModule)
			continue;

		uint32_t pFunction = (uint32_t)GetProcAddress(hModule, std::get< 2 >(CurrentImport).c_str());
		if (!pFunction)
			continue;

		*reinterpret_cast<uint32_t*>(std::get< 0 >(CurrentImport)) = pFunction;
	}

	printf("	resolved!\n");
	printf("	calling clarity [0x361D5174]...\n");
	using DllEntry_t = BOOL(__stdcall*) (void*, DWORD, void*);
	(reinterpret_cast<DllEntry_t>(0x361D5174))(reinterpret_cast<void*>(0x36080000),
		DLL_PROCESS_ATTACH, 0);
	printf("	called!\n");
}

bool __stdcall DllMain(HANDLE hinstDLL, uint32_t fdwReason, void* lpReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		AllocConsole();
		SetConsoleTitleA("clarity.tk v1 mapper [ft.Ex3zen]");
		freopen("CONOUT$", "w", stdout);
		CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(main), 0, 0, 0);
	}
	return true;
}