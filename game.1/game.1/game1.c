#define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("********************\n");
	printf("********1.paly******\n");
	printf("********2.exit******\n");
	printf("********************\n");
}
int game()
{

	int a = rand() % 100 + 1;
	int b = 0;
	printf("�²�a�Ƕ��٣�->\n");
	while (a != b)
	{
		scanf("%d", &b);
		if (b > a)
		{
			printf("�´���,����������->\n");
		}

		else if (b < a)
		{
			printf("��С�ˣ�����������->\n");
		}

	}
	printf("�¶��ˣ�a��%d\n", a);
	return 0;
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}