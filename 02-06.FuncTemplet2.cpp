#include"stdafx.h"
#include<iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << Add(3, 4) << std::endl;
	std::cout << Add(3.3, 3.7) << std::endl;

	return 0;
}

//7 번째 줄은 중단점 설정 후 디버그 - 호출스택에 들어가보면 Add<int>(int a, int b)로 확정된다
//따라서 12번줄의 Add(3,4)는 Add<int>(3,4)로 치환 가능하다
