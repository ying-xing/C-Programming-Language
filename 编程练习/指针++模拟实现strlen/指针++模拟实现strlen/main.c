#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "all.h"

int main(void)
{
	char str[] = "hello你好";
	int len = MyStrlen(str);//求字符串长度

	printf("%d\n", len);

	system("pause");

	return 0;
}