#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Is_leap_year(int m)
{
	//if (((0 == m % 4) && (0 != m % 100)) || (0 == m % 400))
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}
	return ((0 == m % 4) && (0 != m % 100)) || (0 == m % 400);
}


int main(void)
{
	int year = 0;
	int count = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (1 == Is_leap_year(year))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);


	return 0;
}