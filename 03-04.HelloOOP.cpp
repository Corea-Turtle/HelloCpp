#include"stdafx.h"
#include<iostream>


//제작자의 코드
class USERDATA
{
public:
	//멤버 변수 선언
	int nAge;
	char szName[32];
	//멤버 함수 선언 및 정의
	void Print(void)
	{
		//nAge와 szName은 Print의 지역변수가 아니다
		printf("%d,%s\n", nAge, szName);
	}
};
//사용자의 코드
int _tmain(int argc, _TCHAR* argv[])
{
	USERDATA user = { 10,"철수" };
	user.Print();

	return 0;
}

/*
class 정의

class 클래스이름
{
  접근제어지시자:
    멤버변수선언;
    멤버함수선언 및 정의;
};



 hidden parameter - 클래스 내에 함수를 사용했을때 호출자에서 함수를 사용하면 매개변수가 없어보이는데 실제로는 &a(a의 주소)값을 불러와있다.
this - 와 이어지는 개념이다.
*/
