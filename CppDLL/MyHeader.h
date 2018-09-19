
#ifndef __My_SDK_H
#define __My_SDK_H

#pragma once


#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API  __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API  __declspec(dllimport) 
#endif


class MyClass
{
public:
	MATHFUNCSDLL_API static int MyPlusTen(int nInput);
};

#endif