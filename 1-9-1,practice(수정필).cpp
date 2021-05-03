//자신의 이름과 나이를 입력 받고 "나의 이름으 홍길동이고, 20살입니다."라고 출력하는 프로그램을 작성하세요

#include"stdafx.h"
#include<string>
#include<iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	std::string name;
	int nAge;

	std::cout << "이름을 입력하세요 : " << ' ';
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "나이를 입력하세요 : " << ' ';
	std::cin >> nAge;
	std::cout << std::endl;
	std::cout << "나의 이름은 " << name << "이고, " << nAge << "살 입니다." << std::endl;

	return 0;
}

//c++11에서 auto 예약어는 어떤 의미인지 쓰고 코드로 예를 보이시오.

//auto는 요소의 자료형을 자동으로 찾아서 적용해주는 예약어이다.

int a(10);
int b(a);
auto c(b);

//char[12] 배열 메모리를 new연산자로 동적할당하고 해제하는 코드 예를 작성하시오

int *arr = new char[12];
delete[] arr;

//int에 대한 참조형식을 매개변수로 받고 두 변수의 값을 교환하는 함수를 작성하세요. 함수 원형은 void Swap(int &a, int &b)입니다.

#include"stdafx.h"
#include<iostream>
using namespace std;

void Swap(int &a,int &b)
{
  int nTmp = a;
  a = b;
  b = nTmp;
}

int _tmain(int argc, _TCHAR*argv[])
{
  int x = 10 , y = 20;
  
  Swap(x,y);
  
  cout<<x<<endl;
  cout<<y<<endl;
  
  return 0;
}

//상수형 참조가 기존의 참조 형식과 크게 다름 점이 무엇인가

리터럴을 참조할 수 있다

#include"stdafx.h"
#include<iostream>
using namespace std;

void Swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int aList[5] = { 10, 30, 20, 50 , 40 };
	for (auto n : aList)
		for(auto m : aList)
		if (aList[n] > aList[m]) {
			Swap(aList[n], aList[m]);
		}

	for(auto n: aList)
	cout << n << ' ';
	cout << endl;

	return 0;
}

/*
안 바꿔지므로 다시 해보기 

참조 사이트 https://m.blog.naver.com/PostView.nhn?blogId=dntkrl79&logNo=70180205049&proxyReferer=https:%2F%2Fwww.google.com%2F 
*/

