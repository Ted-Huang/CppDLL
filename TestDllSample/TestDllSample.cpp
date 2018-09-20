// TestDllSample.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
//#include "MyHeader.h"
#include <windows.h>

#ifdef WIN64
#pragma comment(lib, "..\\Debug\\CppDLL.lib")
#else
#pragma comment(lib, "..\\Debug\\CppDLL.lib")
#endif



using namespace std;
typedef int(*f_funci)(int nInput);

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "start test " << endl;
	
	//cout << MyClass::MyPlusTen(10) << endl;
	//
	//MyClassToExport* pClassExport = createMyClassToExport();

	//cout << pClassExport->GetTen() << endl;

	//test load library
	HINSTANCE hGetProcIDDLL = LoadLibrary(_T("CppDLL.dll"));

	if (!hGetProcIDDLL) {
		std::cout << "could not load the dynamic library" << std::endl;
		return EXIT_FAILURE;
	}

	// resolve function address here
	f_funci funci = (f_funci)GetProcAddress(hGetProcIDDLL, "Test");
	if (!funci) {
		std::cout << "could not locate the function" << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << "funci() returned " << funci(14) << std::endl;

	return 0;
}

