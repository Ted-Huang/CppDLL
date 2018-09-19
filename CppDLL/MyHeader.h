
#ifndef __My_SDK_H
#define __My_SDK_H

#pragma once

//#define MATHFUNCSDLL_EXPORTS
#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API  __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API  __declspec(dllimport) 
#endif

extern "C" MATHFUNCSDLL_API int Test(int nInput);

class MyClass
{
public:
	 MATHFUNCSDLL_API static int MyPlusTen(int nInput);
};


class MyClassToExport
{
public:
	 virtual int GetTen() = 0;
};

extern "C" MATHFUNCSDLL_API MyClassToExport* createMyClassToExport();

#endif