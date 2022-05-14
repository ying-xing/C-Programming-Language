#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int main(void)
{
	int arr[] = { 91, 122, 3, 44, 55,112, 451, 23, 31, 51, 991, 22, 0 , 999 };
	int max = arr[0];
	int smax = arr[1];

	if (max < smax)
	{
		int t = max;
		max = smax;
		smax = t;
	}

	for (int i = 2; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] > max)
		{
			smax = max;
			max = arr[i];
		}
		else
		{
			if (arr[i] > smax && arr[i] < max)
			{
				smax = arr[i];
			}
		}
	}

	printf("%d %d", max, smax);


	printf("\n");
	system("pause");

	return 0;
}