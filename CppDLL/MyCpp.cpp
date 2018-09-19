#include "MyHeader.h"

/*static */ int MyClass::MyPlusTen(int nInput)
{
	return nInput + 10;
}

int MyClassToExport::GetTen()
{
	return 10;
}

MyClassToExport* createMyClassToExport() {
	return new MyClassToExport();
}