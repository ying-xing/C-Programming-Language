#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

void Tmp_arr(int arr1[], int arr2[],int sz)
{
	int i = 0;
	int tmp = 0;

	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	int sz = 0;

	sz = sizeof (arr1) / sizeof(arr1[1]);
	Print(arr1, sz);
	Print(arr2, sz);
	Tmp_arr(arr1, arr2, sz);
	Print(arr1, sz);
	Print(arr2, sz);

	return 0;
}