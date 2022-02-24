# define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main(void)
{
	int n = 0;
	long ret = 0;
	long sum = 0;

	for (ret = 1, n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}

	printf("%d", sum);

	return 0;
}