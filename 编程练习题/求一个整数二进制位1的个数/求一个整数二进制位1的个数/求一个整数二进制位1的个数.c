#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int NumberOf1(int n)
{
	int count = 0;
	while ( n != 0 )
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main(void)
{
	int n = -1;
	int ret = NumberOf1(n);

	printf("%d\n", ret);

	system("pause");

	return 0;
}