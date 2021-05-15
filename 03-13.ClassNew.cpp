#include"stdafx.h"
#include<iostream>
using namespace std;

class CTest
{
  int m_nData;
  
  public:
  CTest()
  {
  cout<<"CTest::CTest()"<<endl; 
  }
  
  ~CTest()
  {
    cout<<"~CTest::CTest()"<<endl;
  }
};

int _tmain(int argc, _TCHAR*argv[])
{
  cout<<"Begin"<<endl;
  
  //new 연산자를 이용해 동적으로 객체를 생성한다.
  CTest *pData = new CTest;
  cout<<"Test"<<endl;
  
  //delete 연산자를 이용해 객체를 삭제한다.
  delete pData;
  cout <<"End"<<endl;
  
  return 0;  
}

//26번째 줄을 배열로 동적 생성할 수도 있다. CTest *pData = new CTest[3] 
// 배열로 생성한 객체는 배열로 메모리 삭제를 해줘야한다 . delete[] pData;
// 만약 배열로 메모리 해제를 해주지 않으면 첫번째 메모리만 해제되고 나머지는 해제 되지 않으면서 메모리 누수(leak)가 발생한다.
