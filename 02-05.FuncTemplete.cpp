#include"stdafx.h"
#include<iostream>

template<typename T>
T TestFunc(T a)
{
	std::cout << "매개변수 a: " << a << std::endl;

	return a;
}

int _tmain(int argc, _TCHAR* argvp[])
{
	std::cout << "int\t" << TestFunc(3) << std::endl;
	std::cout << "double\t" << TestFunc(4.4) << std::endl;
	std::cout << "char\t" << TestFunc('A') << std::endl;
	std::cout << "char*\t" << TestFunc("TestString") << std::endl;

	return 0;
}

/*
템플릿 기본 형식

templete <typename T>
반환형식 함수이름(매개변수)
*/
