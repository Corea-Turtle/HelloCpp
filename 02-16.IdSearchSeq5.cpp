#include"stdafx.h"
#include<iostream>
using namespace std;

int nData = 100;

namespace TEST
{
	int nData = 200;
}

using namespace TEST;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << nData << endl;

	return 0;
}

//using을 사용할 경우 이런 모호성 에러가 뜬다.
//왜냐면 TEST에 있는 nData인지 전역변수 nData인지 결정할 수 없기 떄문이다.
