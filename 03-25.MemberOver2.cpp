#include"stdafx.h"
#include<iostream>
using namespace std;

// 제작자 코드
class CMyData
{
public:
    CMyData() : m_nData(0) {};

    int GetData(void) { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }

    //실수로 double 자료형 실인수가 넘어오는 경우를 차단한다.
    void SetData(double dParam) = delete;

private:
    int m_nData;
};

//사용자 코드
int _tmain(int argc, _TCHAR* argv[])
{
    CMyData a;

    // CMyData::SetData(int)메서드가 호출 된다.
    a.SetData(10);
    cout << a.GetData() << endl;

    CMyData b;
    // CMyData::SetData(double)메서드가 호출된다.
    b.SetData(5.5);
    cout << b.GetData() << endl;

    return 0;
}


//애매하게 작동되는 코드보다 오류가 확실히 명시적으로 뜨는 코드가 더 낫다.
//사용자가 5.5와 같은 실인수를 입력하면 에러가뜨도록 double 인자를 입력받으면 메모리가 삭제되도록 오버로딩해서 만든 코드
