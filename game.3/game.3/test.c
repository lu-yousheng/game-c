#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("*************  1.play  ***********\n");
	printf("*************  0.exit  ***********\n");
	printf("**********************************\n");
}
void game()
{
	//����������ά���飬һ���Ƿ��׵ģ�һ������ʾ��
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ������������ 
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	//DispalyBoard(mine, ROW, COL);
	DispalyBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DispalyBoard(mine, ROW, COL);

	//�ų���
	FindMine(mine, show, ROWS, COLS);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ��\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ���������������->");
			break;
		}
	} while (input);
	return 0;
}