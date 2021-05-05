#include"stdafx.h"
#include<iostream>

#define ADD(a,b)((a)+(b))

int Add(int a, int b)
{
	return a + b;
}

inline int AddNew(int a, int b)
{
	return a + b;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	scanf_s("%d%d", &a, &b);

	printf("ADD(): %d\n", ADD(a, b));
	printf("Add(): %d\n", Add(a, b));
	printf("AddNew(): %d\n", AddNew(a, b));

	return 0;
}
/*
인라인 함수는 매크로의 장점과 함수의 장점을 모두 갖춘 함수이다.
매크로는 매개변수 형식을 지정할 수 없고 함수는 오버헤드가 나는데
인라인 함수는 매개변수 형식도 지정할 있고 가벼워 오버헤드도 막아준다.
*/
