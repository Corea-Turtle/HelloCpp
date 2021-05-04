#include"stdafx.h"
#include<iostream>

void TestFunc(int a)
{
	std::cout << "TestFunc(int)" << std::endl;
}

void TestFunc(int a, int b=10)
{
	std::cout << "TestFunc(int, int)" << std::endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	TestFunc(5);

	return 0;
}

/*
1>C:\Users\easti\source\repos\HelloCpp2\2-01.DefaultParam.cpp(16,12): error C2668: 'TestFunc': 오버로드된 함수에 대한 호출이 모호합니다.
1>C:\Users\easti\source\repos\HelloCpp2\2-01.DefaultParam.cpp(9,6): message : 'void TestFunc(int,int)'일 수 있습니다.
1>C:\Users\easti\source\repos\HelloCpp2\2-01.DefaultParam.cpp(4,6): message : 또는       'void TestFunc(int)'

int b =10의 값이 있기 때문에 a에 5를 넣으면 앞에껄 선택해야하는지 뒤에껄 선택해야하는지 모호해진다
*/
