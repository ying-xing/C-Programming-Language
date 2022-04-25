#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

/*
	输入一个整数a, 计算a+aa+aaa...一直到第n项的和， n由键盘输入
*/

#include "all.h"

int main(void)
{
	int a = 0;
	int n = 0;
	unsigned long long sum = 0;

	printf("请先输入a的值，后输入n的值，中间以空格分隔：\n");
	scanf("%d %d", &a, &n);

	sum = Sum(&a, &n);

	printf("=%lld\n", sum);

	printf("\n");
	system("pause");

	return 0;
}