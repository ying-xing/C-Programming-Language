#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int DigitSum(int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}

int main(void)
{
	long long num = 0;
	int sum = 0;
	scanf("%d", &num);

	sum = DigitSum(num);

	printf("%d\n", sum);


	return 0;
}