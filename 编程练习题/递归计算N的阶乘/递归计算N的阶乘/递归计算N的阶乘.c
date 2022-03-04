#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Fac(int n)
{
	if (1 == n)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}


int main(void)
{
	int n = 0;
	
	scanf("%d", &n);

	printf("%d\n", Fac(n));



	return 0;
}