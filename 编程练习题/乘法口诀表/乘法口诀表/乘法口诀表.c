﻿#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}


	return 0;
}