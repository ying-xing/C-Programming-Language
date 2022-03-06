#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = 0;
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}

int main(void)
{
	int arr[5] = { 0 };
	int sz = 0;

	sz = sizeof(arr) / sizeof(arr[0]);
	//
	{
		int i = 0;
		for (i = 0; i < sz; i++)
		{
			scanf("%d", &arr[i]);
		}
	}

	

	Bubble_sort(arr, sz);
	
	{
		int i = 0;
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}
	}

	return 0;
}