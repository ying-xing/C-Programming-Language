﻿#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int year = 0;
	int count = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if (((0 == year % 4) && (0 != year % 100)) || (0 == year % 400))
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);


	return 0;
}