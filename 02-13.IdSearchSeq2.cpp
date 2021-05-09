#include"stdafx.h"
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int nInput = 0;
    cout << "11 이상의 정수를 입력하세요" << endl;
    cin >> nInput;

    if (nInput > 10)
    {
        cout << nInput << endl;   //블록 스코프 안에 nInput 식별자가 없으므로 07번쨰줄 nInput의 메모리를 불러온다.
    }

    else
        cout << "Error" << endl;

    return 0;
}
