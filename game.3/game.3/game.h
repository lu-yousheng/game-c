#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//�����ַ�
#define ROW 9 //������Ҫ�õ�������
#define COL 9
#define ROWS ROW+2  //��������ȫ��������
#define COLS COL+2
#define Easy_Count 10

//��������
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);//��ʼ������
void DispalyBoard(char Board[ROWS][COLS], int row, int col);//��ӡ����
void SetMine(char Board[ROWS][COLS], int row, int col);//������
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int rows, int cols);//�Ų���