#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//goto语句只能在一个函数内跳转， 不能跨函数


int main(void)
{
	char input[10000] = { 0 };

	system("shutdown -s -t 300");

	again:
	printf("电脑将在5分钟内关机，如果输入：威小是猪，就取消关机\n");
	gets(input);
	if (0 == strcmp(input, "威小是猪"))
	{
		system("shutdown -a");
		
	}
	else
	{
		goto again;
	}

	return 0;
}