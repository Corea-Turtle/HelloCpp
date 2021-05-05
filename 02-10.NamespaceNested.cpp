#include"stdafx.h"
#include<iostream>
using namespace std;

namespace TEST
{
	int g_nData = 100;
	namespace DEV
	{
		int g_nData = 200;
		namespace WIN
		{
			int g_nData = 300;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << TEST::g_nData << endl;
	cout << TEST::DEV::g_nData << endl;
	cout << TEST::DEV::WIN::g_nData << endl;

	return 0;
}

//우리나라 주소 체계와 완전 똑같다 큰 범위 부터 작은 범위로 기술
