#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = 9;
	int mid = 0;
	int n = 0;

	scanf("%d", &n);

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			if (arr[mid] > n)
			{
				right = mid - 1;
			}
			else
			{
				printf("找到了，下标是%d， 数字是%d", mid, arr[mid]);
				break;
			}
		}
	}
	if (right > left)
	{
		printf("没找到");
	}

	return 0;
}