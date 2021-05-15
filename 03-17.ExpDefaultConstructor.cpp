#include"stdafx.h"
#include<iostream>
using namespace std;

class CTest
{
public:
  //디폴트 생성자 선언
  CTest(void);
  int m_nData = 5;
};

//클래스 외부에서 디폴트 생성자 정의
CTest::CTest(void) { }
  
int _tmain(int argc, _TCHAR*argv[])
{
  CTest a;
  cout<< a.m_nData<<endl;
  
  return 0;
}

//14줄에 생성자 정의 대신 9줄에 CTest(void) = default; 이렇게 선언과 정의를 동시에 할 수 있다.
