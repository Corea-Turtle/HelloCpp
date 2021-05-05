#include"stdafx.h"
#include<iostream>

namespace TEST
{
	int g_nData = 100;

	void TestFunc(void)
	{
		std::cout << "TEST::TestFunc()" << std::endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	TEST::TestFunc();
	std::cout << TEST::g_nData << std::endl;

	return 0;
}

/*
namespace 이름
{
    //네임 스페이스의 시작
    .
    .
    .
    //네임 스페이스의 끝
}
이렇게 작성
*/
