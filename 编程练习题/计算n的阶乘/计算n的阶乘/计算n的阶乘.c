# define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main(void)
{
	int n = 0;
	int i = 0;
	int avg = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		avg *= i;
	}

	printf("%d", avg);

	return 0;
}