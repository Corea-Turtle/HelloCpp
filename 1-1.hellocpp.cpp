#include "stdafx.h"
#include <string.h>
#include <iostream>

int _tmain(int argc, _TCHAR * argv[])
{
    std::cout << 10 << std::endl;
    std::cout << 10U << std::endl;
    std::cout << "Hello World!" << std::endl;
    std::string strData = "Test String";
    std::cout << "Sample Data" << std::endl;
    std::cout << strData << std::endl;

    strData = "New String";
    std::cout << strData << std::endl;

    std::cout << "저는 " << 20 << "살" << "입니다." << std::endl;



    return 0;

}

/*stdafx가 프로젝트에 포함되어 있지 않으므로 직접 설정해주어야한다.
미리 컴파일된 헤더를 프로젝트 설정에서 사용으로 바꾸고
헤더파일에 stdafx.h 소스파일에 stdafx.cpp를 만들어준다.
stdafx.cpp 설정에서 미리 컴파일된 헤더를 만들기로 바꾼다.
그리고 stdafx.h파일에 
#pragma once

#define WIN32_LEALN_AND_MEAN
#include<windows.h>

#include<stdlib.h>
#include<malloc.h>
#include<memory.h>
#include<tchar.h>
등의 내용을 넣어 놓으면 편하게 쓸 수 있다.
*/ 
