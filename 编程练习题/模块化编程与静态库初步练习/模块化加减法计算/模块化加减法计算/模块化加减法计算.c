#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "add.h"
#include "sub.h"

//导入静态库
#pragma comment(lib, "静态库减法计算.lib")//导入静态库,第二个是静态库文件名

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	a = 10;
	b = 5;

	c = Add(a, b);

	printf("%d\n", c);

	c = Sub(a, b);
	printf("%d", c);

	return 0;
}