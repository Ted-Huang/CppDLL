// TestDllSample.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
#include "MyHeader.h"

#ifdef WIN64
#pragma comment(lib, "..\\Debug\\CppDLL.lib")
#else
#pragma comment(lib, "..\\Debug\\CppDLL.lib")
#endif



using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "start test " << endl;
	
	cout << MyClass::MyPlusTen(10) << endl;
	
	MyClassToExport* pClassExport = createMyClassToExport();

	cout << pClassExport->GetTen() << endl;

	return 0;
}

