#pragma once
#include <Windows.h>
#include <iostream>
#include <cstdint>
#include <intrin.h>
#include <filesystem>
#include <fstream>
#include <array>
#include <map>

void patches()
{
	memset(reinterpret_cast<void*>(0x362686EC), 0x90, 3);
	std::string watermark = "Ex3zen$";
	memcpy(reinterpret_cast<void*>(0x362686EC), watermark.c_str(), watermark.size());
}