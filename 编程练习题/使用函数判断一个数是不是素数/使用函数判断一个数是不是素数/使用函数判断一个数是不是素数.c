#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int Is_prime(int m)
{
	int i = 0;

	for (i = 2; i <= sqrt(m); i++)
	{
		if (0 == m % i)
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
		if (1 == Is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);


	return 0;
}