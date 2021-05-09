#include"stdafx.h"
#include<iostream>
using namespace std;

int nData = 200;

namespace Test
{
	int nData = 100;
	void TestFunc(void)
	{
		cout << nData << endl; //가장 최근에 선언된 전역변수부터 출력한다. 9번행이 12번보다 아래로 옮겨진다면 200이 출력됨
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	Test::TestFunc();

	return 0;
}

//전역변수는 네임스페이스를 생각하지말고 선언 순서를 생각해야한다.
