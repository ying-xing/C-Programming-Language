#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "all.h"

int main(void)
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//功能：给一个整型数组从键盘上赋值
	ScanfArr(arr, len);
	
	//功能：从屏幕上打印数组
	PrintfArr(arr, len);

	system("pause");

	return 0;
}