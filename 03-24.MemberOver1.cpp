#include"stdafx.h"
#include<iostream>
using namespace std;

//제작자 코드
class CMyData
{
public:
  CMyData() : m_nData(0) {];
                          
  int GetData(void){ return m_nData; }
  void SetData(int nParam) {m_nData = nParam;}

  //매개변수가 double 자료형인 경우로 다중 정의했다.
  void SetData(double nParam) {m_nData = 0;}

private:
  int m_nData;
};
  
//사용자 코드
int _tmain(int argc,_TCHAR*argv[])
{
  CMyData a;
  
  //CMyData::SetData(int)메서드가 호출된다.
  a.SetData(10);
  cout<<a.GetData()<<endl;
  
  CMyData b;
  
  //CMyData::SetData(double)메서드가 호출된다.
  b.SetData(5.5);
  cout<<b.GetData<<endl;
  
  return 0;       
}

  
//GetData() 반환 형식은 int , 자료를 저장하는 m_nData의 반환형도 int 따라서 double이 지원되지가 않는다.
//따라서 사용자가 실수로 double형을 입력할 경우를 대비해서 double을 다중 정의(오버로드 해서 0이 뜨게 만듬)
