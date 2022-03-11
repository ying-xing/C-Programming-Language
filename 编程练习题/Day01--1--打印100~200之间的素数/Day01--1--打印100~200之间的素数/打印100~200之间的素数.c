# define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <math.h>

//判断一个数是不是素数，如果是，返回1，如果不是返回0
int Is_prime_number(const int *n)
{
	int i = 0;

	for (i = 2; i <= sqrt(*n); i++)
	{
		if (0 == *n % i)
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	int i = 0;
	int count = 0;

	for (i = 101; i <= 200; i += 2)
	{
		if (1 == Is_prime_number(&i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);

	return 0;
}