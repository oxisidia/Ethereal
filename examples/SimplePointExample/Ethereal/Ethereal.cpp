/**/

#include "Ethereal.h"
#include <Windows.h>
#include <iostream>

using namespace std;

//Defines the entry point for the application.
//int main()
//{
//	cout << "Hello world." << endl;
//
//	return 0;
//}

#include <windows.h>

bool __stdcall DllMain(HMODULE /*module*/, DWORD reason, LPVOID /*reserved*/) {
    if (reason == DLL_PROCESS_ATTACH) Test::Hello();
    return true;
}

void Test::Hello()
{
    AllocConsole();
    freopen("CONOUT$", "w", stdout);
    cout << "Hello, World!" << endl;
}