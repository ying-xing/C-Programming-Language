#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Get_max(int a, int b)
{
	int max = 0;

	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;
}



int main(void)
{
	int a = 0;
	int b = 0;
	int max = 0;

	scanf("%d %d", &a, &b);

	max = Get_max(a, b);

	printf("%d", max);


	return 0;
}