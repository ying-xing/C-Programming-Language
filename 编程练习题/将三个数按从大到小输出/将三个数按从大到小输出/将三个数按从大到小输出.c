#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		t = b;
		b = a;
		a = t;
	}

	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}



	printf("%d %d %d", a, b, c);

	return 0;
}