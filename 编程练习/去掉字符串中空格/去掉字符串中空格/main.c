#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "all.h"

int main(void)
{
	char str[100] = { 0 };

	gets(str);

	StrNoSpace(str);

	puts(str);

	system("pause");

	return 0;
}