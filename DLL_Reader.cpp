#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


void main()
{
	HINSTANCE hLib = LoadLibrary(L"DLL_Create.dll");
	char* func = "?GetLocalName@@YA_NXZ";
	if (hLib == NULL)
	{
		cout << "Unable to load library!" << endl;
		_getch();
		return;
	}

	FARPROC loadFunc = (FARPROC)GetProcAddress((HMODULE)hLib, func); // replacing previous string
	if (loadFunc == NULL)
	{
		cout << "Unable to load function(s)." << endl;
		FreeLibrary((HMODULE)hLib);
		_getch();
		return;
	}
	cout << loadFunc();
	FreeLibrary((HMODULE)hLib);
	_getch();
}