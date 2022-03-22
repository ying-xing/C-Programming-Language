#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int main(void)
{
	int num = 100;
	int ge = 0;
	int shi = 0;
	int bai = 0;

	do
	{
		ge = num % 10;
		shi = num / 10 % 10;
		bai = num / 100;

		if (num == ge * ge * ge + shi * shi * shi + bai * bai * bai)
		{
			printf("%d\n", num);
		}

		num++;
	} while (num < 1000);


	system("pause");

	return 0;
}