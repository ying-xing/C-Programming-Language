#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "head.h"

int main(void)
{
	int a = 0;
	int b = 0;

	printf("请输入两个数，用空格分隔开，回车结束输入:\n");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));

	return 0;
}