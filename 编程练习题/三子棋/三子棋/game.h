#pragma once
//N����
//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���ŵĶ���
#define ROW 6//��
#define COL 6//��


//����������

	//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);//ȫ�ǿո�
	//��ӡ����
void DisplayBoard(char board[][COL], int row, int col);
	//�������
void PlayerMove(char board[][COL], int row, int col);
	//��������
void ComputerMove(char board[][COL]);


	//�жϵ�ǰ���״��
		//���Ӯ *
		//����Ӯ #
		//ƽ��   Q
		//��Ϸ���� C
char Iswin(char board[][COL]);

//�ж������Ƿ�����
//û������'C'
//���˷���'Q'
char Isfull(char board[][COL]);
