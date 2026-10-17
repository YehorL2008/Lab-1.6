#include <iostream>

using namespace std;

int main(){

    // Опис змінних першої групи типів
    int nVal = 30679;
    float fVal = 2.57e-4f;
    unsigned short usVal = 2384;

    // Опис змінних другої групи типів
    double dResult;
    int nResult;
    char cResult;

    // Ініціювання змінних другої групи
    
    // 1) Неявне приведення типів
    dResult = nVal;  // int до double
    nResult = fVal;  // float до int (відкидання дробової частини)
    cResult = usVal; // unsigned short до char

    cout << "Неявне приведення типів:" << endl;
    cout << "double (z int): " << dResult << endl;
    cout << "int (z float): " << nResult << endl;
    cout << "char (z ushort): " << cResult << endl;

    // 2) Явне приведення типів
    dResult = (double)fVal;
    nResult = (int)usVal;
    cResult = (char)nVal;

    cout << "\nЯвне приведення типів:" << endl;
    cout << "double (z float): " << dResult << endl;
    cout << "int (z ushort): " << nResult << endl;
    cout << "char (z int): " << cResult << endl;

    // 3) Механізм обходу суворої типізації (використання void*)
    void* pVoidPtr;

    // Обхід для double
    pVoidPtr = &fVal;
    double* pdTarget = (double*)pVoidPtr;
    dResult  = *pdTarget;

    // Обхід для int
    pVoidPtr = &usVal;
    int* pnTarget = (int*)pVoidPtr;
    nResult  = *pnTarget;

    // Обхід для char
    pVoidPtr = &nVal;
    char* pcTarget = (char*)pVoidPtr;
    cResult  = *pcTarget;

    cout << "\nОбхід суворої типізації (void*):" << endl;
    cout << "double через void*: " << dResult << endl;
    cout << "int через void*: " << nResult << endl;
    cout << "char через void*: " << cResult << endl;

    return 0;
}