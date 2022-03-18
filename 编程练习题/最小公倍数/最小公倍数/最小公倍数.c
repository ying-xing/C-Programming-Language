#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	for (int i = 1; ; i++)
	{
		if (0 == a * i % b)
		{
			printf("%d\n", a * i);
			break;
		}
	}
	

	system("pause");

	return 0;
}