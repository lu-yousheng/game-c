#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("*******   1.paly   *****\n");
	printf("*******   0.exit   *****\n");
	printf("************************\n");
}
void game()
{
	//�洢���ݣ�������ά����
	char Board[ROW][COL];

	//��ʼ������
	InitBoard(Board, ROW, COL);

	//��ӡ����
	DisplayBoard(Board, ROW, COL);

	//�淨
	while (1)
	{
		//�������
		printf("������壬����������->\n");
		PlayerMove(Board, ROW, COL);
 		DisplayBoard(Board, ROW, COL);
		char abc = Is_Win(Board, ROW, COL);
		if (abc == '#')
		{
			printf("����Ӯ��\n");
			break;
		}
		else if (abc == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (abc == 'Q')
		{
			printf("ƽ��\n");
			break;
		}

		//��������
		printf("��������=>\n");
		ComputerMove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);

		//�ж��Ƿ���Ӯ
		if (abc == '#')
		{
			printf("����Ӯ��\n");
			break;
		}
		else if (abc == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (abc == 'Q')
		{
			printf("ƽ��\n");
			break;
		}
	}
	DisplayBoard(Board, ROW, COL);


}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("��ѡ��->");
		//scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
  			game();
			break;
		case 0:
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}