#define _CRT_SECURE_NO_WARNINGS 1
//N子棋
#include "game.h"

void menu(void)
{
	printf("******************************************************\n");
	printf("********************* 1.开始游戏 *********************\n");
	printf("********************* 2.退出游戏 *********************\n");
	printf("**************该游戏最难玩法：让电脑获胜**************\n");
	printf("******************************************************\n");
}

void game()
{
	//创造棋盘
	char board[ROW][COL] = { 0 };

	//初始化棋盘 初始化空格
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	char ret = 'C';//接收游戏状态
	while (1)
	{

		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board);
		DisplayBoard(board, ROW, COL);
		ret = Iswin(board);
		if (ret != 'C')
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("玩家获胜！\n");
		DisplayBoard(board, ROW, COL);
		printf("恭喜你赢了！有没有兴趣挑战一下最难玩法？\n\n");
	}
	if ('#' == ret)
	{
		printf("电脑获胜！\n");
		DisplayBoard(board, ROW, COL);
		printf("你太棒了，在你的操作下让电脑获胜了！！！\n\n");
	}
	if ('Q' == ret)
	{
		printf("平局！\n");	
		DisplayBoard(board, ROW, COL);
		printf("你太棒了，在你的操作下让棋盘平局了！！\n有没有兴趣挑战一下最难玩法？\n\n");
	}

	printf("\n\n\n");
}

int main(void)
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("\n请根据上述提示输入,输完按回车键！\n\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n游戏开始!\n");
			game();
			break;
		case 2:
			printf("\n游戏已退出！\n");
			break;
		default:
			printf("\n输入错误，请重新输入!\n");
		}
		printf("\n\n");

	} while (2 != input);


	return 0;
}