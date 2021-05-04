#include"stdafx.h"
#include<iostream>

int Add(int a, int b, int c)
{
	std::cout << "Add(int, int, int): ";

	return a + b + c;
}

int Add(int a, int b)
{
	std::cout << "Add(int, int): ";

	return a + b;
}

double Add(double a, double b)
{
	std::cout << "Add(double, double): ";
	
	return a + b  ;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << Add(3, 4) << std::endl;
	std::cout << Add(3, 4, 5) << std::endl;
	std::cout << Add(3.5, 2.3) << std::endl; // 3/2, 7/2이런식으로 입력해도 될것 같지만 정수의 나눗셈으로 계산해서 너머지는 버려버리고 그다음에 더블로 대입해줘서 틀린갑이 나온다.
                                           // 또한 한쪽값만 3/2.0 이런식으로하면 1번째 Add함수랑 선택을 못하므로 에러가 난다.

	return 0;
}
