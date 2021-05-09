#include<stdio.h>

//제작자의 코드
typedef struct USERDATA
{
	int nAge;
	char szName[32];
} USERDATA;

void PrintData(USERDATA* pUser)
{
	printf("%d,%s\n", pUser->nAge, pUser->szName);
}

//사용자의 코드
int main(void)
{
	USERDATA user = { 20,"철수" };
	
	PrintData(&user);
		
	return 0;
}

//제작자가 사용자의 편의를 생각한 코드
