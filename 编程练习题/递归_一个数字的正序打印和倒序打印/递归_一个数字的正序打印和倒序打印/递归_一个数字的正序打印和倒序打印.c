#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void printf1(int num)
{
	if (num > 9)
	{
		printf1(num / 10);
	}
	printf("%d", num % 10);
}

void printf2(int num)
{
	printf("%d", num % 10);
	if (num > 9)
	{		
		printf2(num / 10);
	}
	
}

int main(void)
{
	unsigned int num = 0;

	scanf("%u", &num);

	printf1(num);
	printf("\n");
	printf2(num);

	return 0;
}