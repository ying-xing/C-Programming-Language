#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>//Sleep函数的头文件
#include <string.h>

int main(void)
{
	char arr1[] = {"Hello Word!!!!"};
	char arr2[] = {"##############"};
	int left = 0;
	int right = strlen(arr1) - 1;

	for (left = 0; left <= right; left++, right--)
	{
		printf("%s\n", arr2);

		Sleep(1000);//Sleep函数单位是ms(毫秒)，该语句是休眠(停顿)1秒
		system("cls");//该语句作用是清空屏幕

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
	}
	printf("%s\n", arr2);

	return 0;
}