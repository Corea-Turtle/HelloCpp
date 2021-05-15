#include"stdafx.h"
#include<iostream>
using namespace std;

//제작자 코드
class CTest
{
  public:
  //생성자 초기화 목록을 이용한 멤버 초기화
  CTest()
    :m_nData1(10), m_nData2(20)
  {}
  
  //두 개의 멤버 데이터 선언
  int m_nData1;
  int m_nData2;
  
  //멤버함수 선언 및 정의
  void PrintData(void)
  {
    // 두 개의 멤버 데이터에 접근하고 값을 출력한다.
    cout<<m_nData1<<endl;
    cout<<m_nData2<<endl;
  }
};

//사용자 코드
int _tmain(int argc,_TCHAR*argv[])
{
  CTest t;
  t.PrintData();
  
  return 0;
}

//생성자 초기화 부분은 11번 행처럼 함수 원형 부분과 몸체를 이루는 블록 범위 사이에 위치
//초기화 목록을 이용하려면 반드시 함수 원형 다음에 콜론(:)을 기술해야한다.
//멤버변수(초깃값) 형식으로 기술
//초기화하려는 멤버변수가 여러개면 쉼표(,)를 찍고 이어서 작성
//멤버 변수가 참조자 형식이면 반드시 초기화 목록을 이요해 초기화해야한다.
