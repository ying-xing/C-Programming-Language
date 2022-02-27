#define _CRT_SECURE_NO_WARNINGS 1

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成功，如果三次均输入错误，则退出程序。
//假设正确是123456

#include <stdio.h>
#include <string.h>

int main(void)
{
	char password[20] = "";
	int j = 0;

	for (; ; )
	{
		j++;
		printf("请输入密码：");
		gets(password);
		if (strcmp(password, "123456") == 0) //strcmp用于判断两个字符串是否相等，如果相等返回0；
		{
			printf("输入正确！");
			break;
		}
		else
		{
			printf("输入错误,重新输入\n");
			if (j >= 3)
			{
				printf("输入超过三次,程序退出");
				break;
			}
		}
	}
	
	return 0;
}