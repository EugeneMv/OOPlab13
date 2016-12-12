
#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "DLLhead.h"

using namespace std;

void main()
{
	NameChecker::LocalName::GetLocalName();
	system("pause");


	HINSTANCE hLib = LoadLibrary(L"DLL_Create.dll");
	if (hLib == NULL)
	{
		cout << "Unable to load library!" << endl;
		return;
	}
	LPCSTR func_name = "GetLocalName";
	FARPROC loadFunc = GetProcAddress(hLib, func_name); // replacing previous string
	if (loadFunc == NULL)
	{
		cout << "Unable to load function(s)." << endl;
		FreeLibrary(hLib);
		return;
	}
	typedef void(__cdecl *proto)();
	((proto)loadFunc)();
	
	FreeLibrary(hLib);
	system("pause");
	return;
}