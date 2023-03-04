#include <iostream>
#include <vector>

std::vector< std::tuple< uint32_t, std::string, std::string > > g_aImports =
{
{ 0x36217000, "KERNEL32.DLL", "GetCurrentProcessId" },
{ 0x36217004, "KERNEL32.DLL", "DisableThreadLibraryCalls" },
{ 0x36217008, "KERNEL32.DLL", "GetTickCount64" },
{ 0x3621700c, "KERNEL32.DLL", "WideCharToMultiByte" },
{ 0x36217010, "KERNEL32.DLL", "GetModuleHandleA" },
{ 0x36217014, "KERNEL32.DLL", "Sleep" },
{ 0x36217018, "KERNEL32.DLL", "GetProcAddress" },
{ 0x3621701c, "KERNEL32.DLL", "GetLastError" },
{ 0x36217020, "KERNEL32.DLL", "FreeLibraryAndExitThread" },
{ 0x36217024, "KERNEL32.DLL", "CreateThread" },
{ 0x36217028, "KERNEL32.DLL", "IsDebuggerPresent" },
{ 0x3621702c, "KERNEL32.DLL", "FreeLibrary" },
{ 0x36217030, "KERNEL32.DLL", "GetModuleFileNameA" },
{ 0x36217034, "KERNEL32.DLL", "LoadLibraryExA" },
{ 0x36217038, "KERNEL32.DLL", "FormatMessageA" },
{ 0x3621703c, "KERNEL32.DLL", "DebugActiveProcessStop" },
{ 0x36217040, "KERNEL32.DLL", "GetProcessHeap" },
{ 0x36217044, "KERNEL32.DLL", "SetEnvironmentVariableW" },
{ 0x36217048, "KERNEL32.DLL", "FreeEnvironmentStringsW" },
{ 0x3621704c, "KERNEL32.DLL", "GetEnvironmentStringsW" },
{ 0x36217050, "KERNEL32.DLL", "GetCommandLineW" },
{ 0x36217054, "KERNEL32.DLL", "GetCommandLineA" },
{ 0x36217058, "KERNEL32.DLL", "GetOEMCP" },
{ 0x3621705c, "KERNEL32.DLL", "GetACP" },
{ 0x36217060, "KERNEL32.DLL", "IsValidCodePage" },
{ 0x36217064, "KERNEL32.DLL", "GetTimeZoneInformation" },
{ 0x36217068, "KERNEL32.DLL", "CreatePipe" },
{ 0x3621706c, "KERNEL32.DLL", "GetExitCodeProcess" },
{ 0x36217070, "KERNEL32.DLL", "WaitForSingleObject" },
{ 0x36217074, "ntdll.dll", "RtlReAllocateHeap" },
{ 0x36217078, "KERNEL32.DLL", "DeleteFileW" },
{ 0x3621707c, "KERNEL32.DLL", "VirtualQuery" },
{ 0x36217080, "KERNEL32.DLL", "CloseHandle" },
{ 0x36217084, "KERNEL32.DLL", "OpenProcess" },
{ 0x36217088, "KERNEL32.DLL", "K32GetModuleFileNameExW" },
{ 0x3621708c, "ntdll.dll", "RtlSizeHeap" },
{ 0x36217090, "KERNEL32.DLL", "ReadConsoleW" },
{ 0x36217094, "KERNEL32.DLL", "GetConsoleMode" },
{ 0x36217098, "KERNEL32.DLL", "GetConsoleOutputCP" },
{ 0x3621709c, "KERNEL32.DLL", "FlushFileBuffers" },
{ 0x362170a0, "ntdll.dll", "RtlInitializeConditionVariable" },
{ 0x362170a4, "ntdll.dll", "RtlReleaseSRWLockExclusive" },
{ 0x362170a8, "ntdll.dll", "RtlAcquireSRWLockExclusive" },
{ 0x362170ac, "ntdll.dll", "RtlEnterCriticalSection" },
{ 0x362170b0, "ntdll.dll", "RtlLeaveCriticalSection" },
{ 0x362170b4, "KERNEL32.DLL", "InitializeCriticalSectionEx" },
{ 0x362170b8, "ntdll.dll", "RtlTryEnterCriticalSection" },
{ 0x362170bc, "ntdll.dll", "RtlDeleteCriticalSection" },
{ 0x362170c0, "KERNEL32.DLL", "GetCurrentThreadId" },
{ 0x362170c4, "KERNEL32.DLL", "LocalFree" },
{ 0x362170c8, "KERNEL32.DLL", "CreateDirectoryW" },
{ 0x362170cc, "KERNEL32.DLL", "CreateFileW" },
{ 0x362170d0, "KERNEL32.DLL", "FindClose" },
{ 0x362170d4, "KERNEL32.DLL", "FindFirstFileExW" },
{ 0x362170d8, "KERNEL32.DLL", "FindNextFileW" },
{ 0x362170dc, "KERNEL32.DLL", "GetFileAttributesExW" },
{ 0x362170e0, "KERNEL32.DLL", "SetEndOfFile" },
{ 0x362170e4, "KERNEL32.DLL", "SetFilePointerEx" },
{ 0x362170e8, "KERNEL32.DLL", "GetTempPathW" },
{ 0x362170ec, "KERNEL32.DLL", "AreFileApisANSI" },
{ 0x362170f0, "KERNEL32.DLL", "MoveFileExW" },
{ 0x362170f4, "KERNEL32.DLL", "GetFileInformationByHandleEx" },
{ 0x362170f8, "KERNEL32.DLL", "MultiByteToWideChar" },
{ 0x362170fc, "KERNEL32.DLL", "WaitForSingleObjectEx" },
{ 0x36217100, "KERNEL32.DLL", "SwitchToThread" },
{ 0x36217104, "KERNEL32.DLL", "QueryPerformanceCounter" },
{ 0x36217108, "KERNEL32.DLL", "QueryPerformanceFrequency" },
{ 0x3621710c, "ntdll.dll", "RtlEncodePointer" },
{ 0x36217110, "ntdll.dll", "RtlDecodePointer" },
{ 0x36217114, "KERNEL32.DLL", "SetStdHandle" },
{ 0x36217118, "KERNEL32.DLL", "GetSystemTimeAsFileTime" },
{ 0x3621711c, "KERNEL32.DLL", "GetModuleHandleW" },
{ 0x36217120, "KERNEL32.DLL", "LCMapStringEx" },
{ 0x36217124, "KERNEL32.DLL", "GetLocaleInfoEx" },
{ 0x36217128, "KERNEL32.DLL", "GetStringTypeW" },
{ 0x3621712c, "KERNEL32.DLL", "CompareStringEx" },
{ 0x36217130, "KERNEL32.DLL", "GetCPInfo" },
{ 0x36217134, "KERNEL32.DLL", "InitializeCriticalSectionAndSpinCount" },
{ 0x36217138, "KERNEL32.DLL", "SetEvent" },
{ 0x3621713c, "KERNEL32.DLL", "ResetEvent" },
{ 0x36217140, "KERNEL32.DLL", "CreateEventW" },
{ 0x36217144, "KERNEL32.DLL", "UnhandledExceptionFilter" },
{ 0x36217148, "KERNEL32.DLL", "SetUnhandledExceptionFilter" },
{ 0x3621714c, "KERNEL32.DLL", "GetCurrentProcess" },
{ 0x36217150, "KERNEL32.DLL", "TerminateProcess" },
{ 0x36217154, "KERNEL32.DLL", "IsProcessorFeaturePresent" },
{ 0x36217158, "KERNEL32.DLL", "GetStartupInfoW" },
{ 0x3621715c, "ntdll.dll", "RtlInitializeSListHead" },
{ 0x36217160, "KERNEL32.DLL", "RtlUnwind" },
{ 0x36217164, "ntdll.dll", "RtlInterlockedFlushSList" },
{ 0x36217168, "KERNEL32.DLL", "RaiseException" },
{ 0x3621716c, "KERNEL32.DLL", "SetLastError" },
{ 0x36217170, "KERNEL32.DLL", "TlsAlloc" },
{ 0x36217174, "KERNEL32.DLL", "TlsGetValue" },
{ 0x36217178, "KERNEL32.DLL", "TlsSetValue" },
{ 0x3621717c, "KERNEL32.DLL", "TlsFree" },
{ 0x36217180, "KERNEL32.DLL", "LoadLibraryExW" },
{ 0x36217184, "KERNEL32.DLL", "GetStdHandle" },
{ 0x36217188, "KERNEL32.DLL", "GetFileType" },
{ 0x3621718c, "KERNEL32.DLL", "GetModuleFileNameW" },
{ 0x36217190, "KERNEL32.DLL", "GetModuleHandleExW" },
{ 0x36217194, "KERNEL32.DLL", "WriteConsoleW" },
{ 0x36217198, "KERNEL32.DLL", "ExitProcess" },
{ 0x3621719c, "KERNEL32.DLL", "ReadFile" },
{ 0x362171a0, "KERNEL32.DLL", "DuplicateHandle" },
{ 0x362171a4, "KERNEL32.DLL", "CreateProcessW" },
{ 0x362171a8, "KERNEL32.DLL", "HeapFree" },
{ 0x362171ac, "ntdll.dll", "RtlAllocateHeap" },
{ 0x362171b0, "KERNEL32.DLL", "GetDateFormatW" },
{ 0x362171b4, "KERNEL32.DLL", "GetTimeFormatW" },
{ 0x362171b8, "KERNEL32.DLL", "CompareStringW" },
{ 0x362171bc, "KERNEL32.DLL", "LCMapStringW" },
{ 0x362171c0, "KERNEL32.DLL", "GetLocaleInfoW" },
{ 0x362171c4, "KERNEL32.DLL", "IsValidLocale" },
{ 0x362171c8, "KERNEL32.DLL", "GetUserDefaultLCID" },
{ 0x362171cc, "KERNEL32.DLL", "EnumSystemLocalesW" },
{ 0x362171d0, "KERNEL32.DLL", "WriteFile" },
{ 0x362171d4, "KERNEL32.DLL", "OutputDebugStringW" },
{ 0x362171d8, "KERNEL32.DLL", "GetFileSizeEx" },
{ 0x362171e0, "SHELL32.dll", "ShellExecuteW" },
{ 0x362171e8, "SHLWAPI.dll", "PathFindFileNameW" },
{ 0x362171f0, "USER32.dll", "ScreenToClient" },
{ 0x362171f4, "USER32.dll", "GetCursorInfo" },
{ 0x362171f8, "USER32.dll", "IsChild" },
{ 0x362171fc, "USER32.dll", "GetForegroundWindow" },
{ 0x36217200, "USER32.dll", "GetCursorPos" },
{ 0x36217204, "USER32.dll", "ShowWindow" },
{ 0x36217208, "USER32.dll", "FindWindowW" },
{ 0x3621720c, "USER32.dll", "FlashWindowEx" },
{ 0x36217210, "USER32.dll", "CallWindowProcA" },
{ 0x36217214, "USER32.dll", "GetWindowThreadProcessId" },
{ 0x36217218, "USER32.dll", "GetWindowTextLengthW" },
{ 0x3621721c, "USER32.dll", "FindWindowExW" },
{ 0x36217220, "USER32.dll", "GetWindowTextLengthA" },
{ 0x36217224, "USER32.dll", "GetWindowTextW" },
{ 0x3621722c, "d3dx9_43.dll", "D3DXMatrixMultiply" },
};