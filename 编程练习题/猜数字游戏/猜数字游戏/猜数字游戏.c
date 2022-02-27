#define _CRT_SECURE_NO_WARNINGS 1

//写一个猜数字游戏
//1. 自动产生一个1-100之间的随机数
//2. 猜数字
//  a. 猜对了，就恭喜你，游戏结束
//  b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3. 游戏一个一直玩，除非退出游戏

#include <stdio.h>
#include <stdlib.h>//调用rand函数，srand函数
#include <time.h>//调用time函数

void Menu(void)
{
	printf("猜数字游戏菜单\n");
	printf("####################################\n");
	printf("############ 1 开始游戏 ############\n");
	printf("############ 2 退出游戏 ############\n");
	printf("####################################\n");

}

void Game(void)
{
	int ret = 0;//系统生成随机值
	int guess = 0;//用户猜的值

	ret = rand() % 101;//头文件<stdlib.h>，需要srand函数给它一个初始值，否则伪随机
	//printf("%d\n", ret);
	while (1)
	{
		printf("请输入你猜的数：");
		scanf("%d", &guess);
		if (ret == guess)
		{
			printf("猜对了！！！\n\n\n");
			break;
		}
		else
		{
			if (guess < ret)
			{
				printf("猜小了\n");
			}
			else
			{
				printf("猜大了\n");
			}
		}
	}
}

int main(void)
{
	int menu_gets = 0;
	srand((unsigned)time(NULL));//time函数返回一个时间戳，

	do
	{
		Menu();
		printf("请输入上述选项：");
		scanf("%d", &menu_gets);
		switch (menu_gets)
		{
			case 1:
				Game();
				break;
			case 2:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新开始\n");

		}

	} while (2 != menu_gets);

	return 0;
}