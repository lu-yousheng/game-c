#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//������ά����
void InitBoard(char Board[ROW][COL], int row, int col);
//��ӡ���̵ĺ���
void DisplayBoard(char Board[ROW][COL], int row, int col);
//�������ĺ���
void PlayerMove(char Board[ROW][COL], int row, int col);
//��������ĺ���
void ComputerMove(char Board[ROW][COL], int row, int col);
//�ж���Ӯ
char Is_Win(char Board[ROW][COL], int row, int col);
//�ж������Ƿ�����
char Is_Full(char Board[ROW][COL], int row, int col);