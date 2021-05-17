#include"stdafx.h"
#include<iostream>
using namespace std;

void TestFunc(int nParam)
{
  cout<<nParam<<endl;
}

int _tmain(int argc, _TCHAR*argv[])
{
  TestFunc(10);
  TestFunc(5.5);
  
  return 0;
}

//double이 int형 자료반환으로 5로 잘려서 나옴 따라서 다중 정의를 해줘야함
