#include"stdafx.h"
#include<iostream>
using namespace std;

int nData = 100;

namespace TEST
{
	int nData = 200;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << nData << endl;

	return 0;
}

//출력 결과 = 100 
//순서 5번 예제와 비교
