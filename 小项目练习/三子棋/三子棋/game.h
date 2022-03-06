#pragma once
//N子棋
//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的定义
#define ROW 6//行
#define COL 6//列


//函数的声明

	//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);//全是空格
	//打印棋盘
void DisplayBoard(char board[][COL], int row, int col);
	//玩家下棋
void PlayerMove(char board[][COL], int row, int col);
	//电脑下棋
void ComputerMove(char board[][COL]);


	//判断当前棋局状况
		//玩家赢 *
		//电脑赢 #
		//平局   Q
		//游戏继续 C
char Iswin(char board[][COL]);

//判断棋盘是否下满
//没满返回'C'
//满了返回'Q'
char Isfull(char board[][COL]);
