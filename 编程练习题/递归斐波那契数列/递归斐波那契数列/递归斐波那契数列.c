#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Fac(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fac(n - 1) + Fac(n - 2);
	}
}

int main(void)
{
	int n = 0;
	
	scanf("%d", &n);
	printf("%d\n", Fac(n));


	return 0;
}