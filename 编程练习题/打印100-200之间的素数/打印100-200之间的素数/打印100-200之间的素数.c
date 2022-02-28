#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>




int main(void)
{
	int i = 0;
	int count = 0;

	for (i = 101; i <= 200; i += 2)
	{
		int j = 0;
		int flag = 1;

		for (j = 2; j <= sqrt(i); j++)
		{
			if (0 == i % j)
			{
				flag = 0;
				break;
			}
			
		}
		if (1 == flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);


	return 0;
}