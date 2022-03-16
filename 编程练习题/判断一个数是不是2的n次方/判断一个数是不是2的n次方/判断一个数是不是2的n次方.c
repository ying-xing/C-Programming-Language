#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int PowerOf(int n)
{
	return ((n & (n - 1)) == 0);
}

int main(void)
{

	for (int i=0; i<=300; i++)
		if ( 1 == PowerOf(i) )
		{
			printf("%d\n", i);
		}

	system("pause");

	return 0;
}