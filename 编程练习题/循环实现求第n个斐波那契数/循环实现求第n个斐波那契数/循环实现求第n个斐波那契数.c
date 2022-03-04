#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Fib(n)
{
	int a = 1;
	int b = 1;
	int sum = 0;
	int i = 0;

	sum = 1;

	for (i = 3;i<=n && n > 2; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	return sum;
}

int main(void)
{
	int n = 0;

	scanf("%d", &n);

	printf("%d\n", Fib(n));

	return 0;
}