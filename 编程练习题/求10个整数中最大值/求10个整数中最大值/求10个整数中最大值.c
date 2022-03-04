#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int max = 0;
	int i = 0;
	
	scanf("%d", &arr[0]);
	max = arr[0];

	for (i = 1; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);

	return 0;
}