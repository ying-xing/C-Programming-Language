#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if (0 == i % 3)
		{
			printf("%d ", i);

		}
	}
	
	printf("\n\n");

	for (i = 3; i <= 100; i += 3)
	{
		printf("%d ", i);
	}

	return 0;
}