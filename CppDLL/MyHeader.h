
#ifndef __My_SDK_H
#define __My_SDK_H

#pragma once

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API  __declspec(dllexport) 
#else
#define MATHFUNCSDLL_API  __declspec(dllimport) 
#endif

//�[�F���N(dllimport/export)�䤤�@�ӳ��|����lib�Mexp, �~��link
//import�O���sĶ���ݪ�, ���F�F��̨Τ�. ���[�]�i�H �Ѧ�: https://blogs.msdn.microsoft.com/russellk/2005/03/20/lnk4217/
// export �|�v�T�ʺA���Jdll. �|���T�{
//�ӤW, �]��dll�M�ת�precompile�n�]�w �b����MATHFUNCSDLL_EXPORTS, �~��F�� dll�M�ר�export. �ϥΤ��󪺱M�ר�import
//extern c �O�n���Dc++���ݪ�, ���M�|�䤣��function. �]Function Signature

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