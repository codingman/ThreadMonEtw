// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

typedef unsigned long long QWORD;

// Get if a file Exist
bool FileExists(LPTSTR fileName);

// Get Last Win32 Error description
LPTSTR GetWin32ErrorMessage(DWORD errNum);

// Read a line of input from a console
DWORD ReadLine(LPTSTR buff, int buffCch);

enum ConsoleColor {
	DARKBLUE = 1, DARKGREEN, DARKTEAL, DARKRED, DARKPINK, DARKYELLOW,
	GRAY, DARKGRAY, BLUE, GREEN, TEAL, RED, PINK, YELLOW, WHITE
};

// Set console text Color
void SetConsoleColor(ConsoleColor c);
// Get console text Color
int GetCurrentConsoleColor();
// Color WPrintf 
void cl_wprintf(ConsoleColor c, LPTSTR string, LPVOID arg1 = NULL, LPVOID arg2 = NULL, LPVOID arg3 = NULL, LPVOID arg4 = NULL);

#ifdef _DEBUG
#define DbgBreak() __debugbreak()
#else
#define DbgBreak() __noop()
#endif

#define COUNTOF(x) sizeof(x) / sizeof(x[0])