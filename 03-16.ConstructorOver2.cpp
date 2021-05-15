#include"stdafx.h"
#include<iostream>
using namespace std;

class CMyPoint
{
public:
    CMyPoint(int x)
    {
        cout << "CMyPoint(int)" << endl;
        //x값이 100이 넘는지 검사하고 넘으면 100으로 맞춘다.
        if (x > 100)
            x = 100;

        m_x = 100;
    }

    CMyPoint(int x, int y)
        // x값을 검사하는 코드는 이미 존재하므로 재사용한다.
        :CMyPoint(x)
    {
        cout << "CMyPoint(int, int)" << endl;

        // y값이 200이 넘는지 검사하고 넘은면 200으로 맞춘다.
        if (y > 200)
            y = 200;

        m_y = 200;
    }

    void Print()
    {
        cout << "x:" << m_x << endl;
        cout << "y:" << m_y << endl;
    }

private:
    int m_x = 0;
    int m_y = 0;
};

int _tmain(int argc, _TCHAR* argv[])
{
    //매개변수가 하나인 생성자만 호출한다.
    CMyPoint ptBegin(110);
    ptBegin.Print();

    //이번에는 두 생성자 모두 호출한다.
    CMyPoint ptEnd(50, 250);
    ptEnd.Print();

    return 0;
}

//49번쨰 줄에서 두 인자가 있는 생성자를 호출할 떄 20번째 줄에 의해서 인자 한개 (x)값을 겁사하는 생성자를 호출하고 다음으로 넘어가므로
//CMyPoint(int)
//CMyPoint(int, int)  이렇게 두 문자가 프린트된다.
