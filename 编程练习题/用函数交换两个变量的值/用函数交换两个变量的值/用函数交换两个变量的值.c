#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Swap(int *a, int *b)
{
	int z = 0;

	z = *a;
	*a = *b;
	*b = z;
}


int main(void)
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);

	Swap(&a, &b);

	printf("%d %d\n", a, b);



	return 0;
}