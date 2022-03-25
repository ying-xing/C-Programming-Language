#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>
#include <Windows.h>

int main(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				printf("%02d:%02d:%02d\n", i, j, k);
				Sleep(980);
				system("cls");
			}
		}
	}

	system("pause");

	return 0;
}