#include <process.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>


void gbk2utf8(char *utf8,char *gb2312,int buffer_len)
{
    int len = MultiByteToWideChar(CP_ACP, 0, gb2312, -1, NULL, 0);
    wchar_t* wstr = new wchar_t[len+1];
    memset(wstr, 0, len+1);
    MultiByteToWideChar(CP_ACP, 0, gb2312, -1, wstr, len);
    len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
    memset(utf8, 0, buffer_len);
    WideCharToMultiByte(CP_UTF8, 0, wstr, -1, utf8, buffer_len, NULL, NULL);
    if(wstr)
    {
        delete[] wstr;
    }
}

void main()
{
    char MSG[]="123fdsa是我啊456";
    char pOut[0xFF];
    HINSTANCE hInst=LoadLibrary("jwtlib.dll");
    typedef void (/*_stdcall*/ *pMakeJWT)(char* p0);
    pMakeJWT MakeJWT =(pMakeJWT)GetProcAddress(hInst,"MakeJWT");  
    gbk2utf8(pOut,MSG,sizeof(pOut));
    MakeJWT(MSG);
    printf(MSG);
    getchar();
}

  
