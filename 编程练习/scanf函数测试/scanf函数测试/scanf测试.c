#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int main(void)
{
	int a = 0;

	scanf("%d\n", &a);	//需要输入一个数和/

	printf("%d\n", a);

	system("pause");

	return 0;
}