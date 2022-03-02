#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int Binary_search(int arr[], int sz, int key)
{
	int left = 0;
	int right = 0;
	int mid = 0;

	right = sz - 1;

	for (; left <= right; )
	{
		mid = (left + right) / 2;

		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			if (key < arr[mid])
			{
				right = mid - 1;
			}
			else
			{
				return mid;
			}
		}
	}
	return -1;
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;
	int sz = 0;
	int mid = 0;

	sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &key);
	mid = Binary_search(arr, sz, key);
	if (mid >= 0)
	{
		printf("找到了，下标是%d\n", mid);
	}
	else
	{
		printf("没找到\n");
	}

	return 0;
}