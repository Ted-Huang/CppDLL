// TestDllSample.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
#include "MyHeader.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "start test " << endl;
	
	cout << MyClass::MyPlusTen(10) << endl;
	return 0;
}

