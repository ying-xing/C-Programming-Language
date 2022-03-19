#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int CheckSys(void)
{
	int i = 1;
	char* p = (char*)&i;
	return *p;//返回1是小端，0是大端
}

int main(void)
{
	int ret = CheckSys();

	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}


	system("pause");

	return 0;
}