#define _CRT_SECURE_NO_WARNINGS 1
//N子棋
#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[][COL], int row, int col)
{
	int i = 0;

	{
		printf("|");
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("---");
			//if (j < col - 1)
			{
				printf("|");
			}
		}
	}
	printf("\n");

	for (i = 0; i < row; i++)
	{
		int j = 0;
		printf("|");
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			//if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");

		printf("|");
		//if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				//if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
		

	}
}

//玩家下棋
void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("轮到玩家下棋！\n");

	while (1)
	{
		//printf("请输入下棋的位置：\n");
		printf("\n----------------------------------------------------------\n");
		printf("提示：\n");
		printf("*代表玩家的棋子，#代表电脑的棋子\n");
		printf("先输入行，然后输入列，中间用空格分隔，输完按回车继续\n");
		printf("例如：输入2 3表示下在第二行第三列的位置\n");
		printf("----------------------------------------------------------\n\n");
		printf("请输入下棋的位置：\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && y <= COL)
		{
			if (' ' == board[x - 1][y - 1])
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("\n该位置已有棋子，请重新下棋！\n");
			}
		}
		else
		{
			printf("\n输入错误，请重新输入！\n");
		}
	}

}


//电脑下棋
void ComputerMove(char board[][COL])
{
	int x = 0;
	int y = 0;
	printf("轮到电脑下棋！\n");
	printf("正在加载......\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (' ' == board[x][y])
		{
			board[x][y] = '#';
			break;
		}
	
	}
	printf("加载完成\n");
	printf("电脑已下完棋！\n\n");


}

//判断当前棋局状况
	//玩家赢 *
	//电脑赢 #
	//平局   Q
	//游戏继续 C
char Iswin(char board[][COL])
{
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;
	int l = 0;
	//判断行列
	for (i = 0; i < ROW; i++)
	{
		int count = 0;
		for (j = 0; j < COL-1; j++)
		{
					
			if (board[i][j] == board[i][j + 1] &&  board[i][j] != ' ')
			{
				count++;
			}
			else
			{
				break;
			}
			
		}
		if (COL - 1 == count)
		{
			return board[i][j];
		}

		count = 0;
		for (l = 0; l < COL - 1; l++)
		{

			if (board[l][i] == board[l + 1][i] && board[l][i] != ' ')
			{
				count++;
			}
			else
			{
				break;
			}

		}
		if (COL - 1 == count)
		{
			return board[l][i];
		}
	}

	//判断对角线
	int count = 0;
	for (i = 0; i < ROW - 1; i++)
	{

		if (board[i][i] == board[i + 1][i + 1] && board[i][i] != ' ')
		{
			count++;		
		}
		if (COL - 1 == count)
		{
			return board[i][i];
		}
		//else
		//{
		//	break;
		//}
	}

	count = 0;
	for (i = 0, j = ROW - 1; i < ROW - 1; i++, j--)
	{


		if (board[i][j] == board[i+1][j - 1] && board[i][j] != ' ')
		{
			count++;
		}
		if (COL - 1 == count)
		{
			return board[j][j];
		}
		//else
		//{
		//	break;
		//}	
	}
	int ret = Isfull(board);
	return ret;
}

//判断棋盘是否下满
//没满返回'C'
//满了返回'Q'
char Isfull(char board[][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (' ' == board[i][j])
			{
				return 'C';
			}
		}
	}
	return 'Q';
}