#define _CRT_SECURE_NO_WARNINGS 1

//计算1 / 1 - 1 / 2 + 1 / 3 – 1 / 4 + 1 / 5 …… + 1 / 99 – 1 / 100的值

#include <stdio.h>


int main(void)
{
	int i = 0;
	float sum = 0.0;
	int flag = 1;

	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%f", sum);


	return 0;
}