#include "MyHeader.h"

int Test(int i)
{
	return i * 100;
}

/*static */ int MyClass::MyPlusTen(int nInput)
{
	return nInput + 10;
}

class MyClassToExportSon : public MyClassToExport
{
public:
	virtual int GetTen();
};


int MyClassToExportSon::GetTen()
{
	return 10;
}

MyClassToExport* createMyClassToExport() {
	return new MyClassToExportSon();
}