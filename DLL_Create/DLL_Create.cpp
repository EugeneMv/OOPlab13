// DLL_Create.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "DLLhead.h"
#include <stdexcept>

using namespace std;

extern "C" __declspec(dllexport) void GetLocalName();


extern "C" __declspec(dllexport) void GetLocalName() {
	char buffer[256];
	unsigned long size = 256;

	char* answer = new char;
	GetComputerNameA(buffer, &size);
	strcpy(answer, buffer);
	cout <<"\n"<< answer <<"\n";
	return;
}


namespace NameChecker
{
	void LocalName::GetLocalName()
	{
		char buffer[256];
		unsigned long size = 256;

		char* answer = new char;
		GetComputerNameA(buffer, &size);
		strcpy(answer, buffer);
		cout << "\n" << answer << "\n";
		return;
	}
}