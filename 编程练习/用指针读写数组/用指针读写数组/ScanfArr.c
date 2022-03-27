#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "ScanfArr.h"
//功能：给一个整型数组从键盘上赋值
//形参1：该数组的首元素地址
//形参2：该数组的长度
void ScanfArr(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &(*(arr + i)));
	}
}
