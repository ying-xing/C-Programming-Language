#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Print_table(int n)
{
	int i = 0;
	int j = 0;

	for (i = 1; i <= n; ++i)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%-2d=%-3d ", j, i, i*j);
		}
		printf("\n");
	}
}

int main(void)
{
	int n = 0;

	scanf("%d", &n);

	Print_table(n);

	return 0;
}