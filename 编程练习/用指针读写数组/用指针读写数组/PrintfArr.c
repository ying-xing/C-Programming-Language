#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "PrintfArr.h"
/*
	功能：打印一个数组
	形参1：该数组的首元素地址
	形参2：该数组的长度
*/
void PrintfArr(int* p, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(p++));
	}
	printf("\n");
}