#include"stdafx.h"
#include<iostream>
using namespace std;

//제작자 코드

class CMyData
{
  //기본 접근 제어 지시자는 'private'이다.
  int m_nData;
  
 public:
  int GetData(void) {return m_nData; }
  void SetData(int nParam){m_nData = nParam; }
};

//사용자 코드
int _tmain(int argc, _TCHAR*argv[])
{
  CMyData data;
  data.SetData(10);
  cout<<data.GetData()<<endl;
  
  return 0;
}

//20번쨰 줄에 data.m_nData = 10 는 private이므로 허용되지 않는 문법이다.
//멤버 함수의 경우에는 private 멤버에 접근하는 것이 자유롭다.
//생상자를 생성하기 전에 public 선언을 해주지 않으면 생성자 또한 private으로 설정된다.
