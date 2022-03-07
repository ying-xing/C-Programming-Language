#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main(void)
{
	int a = 5;
	int b = 3;

	//方法一：有缺陷，数字太大不行，会溢出
	printf("a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);

	//方法二:不会溢出
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);


	return 0;
}