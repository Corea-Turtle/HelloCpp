#include<stdio.h>

//제작자의 코드
typedef struct USERDATA
{
	int nAge;
	char szName[32];
} USERDATA;

//사용자의 코드
int main(void)
{
	USERDATA user = { 20,"철수" };
	printf("%d,%s\n", user.nAge, user.szName);
	
	return 0;
}


//절차적 프로그래밍의 전형적인 예 - 사용자 입장에서 매우 쓰기 불편하다.
//구조체와 표현 방식 모두 사용자가 숙지하고 있어야함
