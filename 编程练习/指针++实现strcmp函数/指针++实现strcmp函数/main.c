#define _CRT_SECURE_NO_WARNINGS 1		//解决scanf函数在VS中报错

#include "all.h"

int main(void)
{
	char str1[100] = { '\0' };
	char str2[100] = { '\0' };

	printf("输入字符串1：\n");
	gets(str1);

	printf("输入字符串2：\n");
	gets(str2);

	//比较两个字符串大小
	int ret = MyStrcmp(str1, str2);

	//打印两个字符串谁大
	switch (ret)
	{
		case -1:
			printf("字符串1 < 字符串2\n");
			break;
		case 0:
			printf("字符串1 = 字符串2\n");
			break;
		case 1:
			printf("字符串1 > 字符串2\n");
			break;
		default:
			printf("异常\n");
			break;
	}
	system("pause");

	return 0;
}