#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int NumberOf1(int ret)
{
	int count = 0;
	for ( ; 0 != ret; count++)
	{
		ret = ret & (ret - 1);
	}
	return count;
}

int main(void)
{
	int a = 0;
	int b = 0;
	int count = 0;

	scanf("%d %d", &a, &b);

	int ret = a ^ b;
	count = NumberOf1(ret);

	printf("%d\n", count);

	system("pause");

	return 0;
}