#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

void print(int arr[],int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void init(int arr[],int sz)
{
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;

	for (left = 0; left < right; left++, right--)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;		
	}
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = 0;

	sz = sizeof (arr) / sizeof (arr[0]);

	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}