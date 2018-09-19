
#ifndef __My_SDK_H
#define __My_SDK_H

#pragma once

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API  __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API  __declspec(dllimport) 
#endif

//加了任意(dllimport/export)其中一個都會產生lib和exp, 才能link
//import是給編譯器看的, 為了達到最佳化. 不加也可以 參考: https://blogs.msdn.microsoft.com/russellk/2005/03/20/lnk4217/
// export 會影響動態載入dll. 尚未確認
//承上, 因此dll專案的precompile要設定 在此為MATHFUNCSDLL_EXPORTS, 才能達到 dll專案走export. 使用元件的專案走import
//extern c 是要給非c++的看的, 不然會找不到function. 因Function Signature

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