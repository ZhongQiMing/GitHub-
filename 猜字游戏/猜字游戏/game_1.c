#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("****************************\n");
	printf("********  1. play  *********\n");
	printf("********  0.exit   *********\n");
	printf("****************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;//���ɷ�Χ1-100�������
	int guess = 0;             
	while (1)
	{
		printf("�������:>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}  
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�������������
	do
	{
		menu();//��ӡ�˵�
		printf("������:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();//ʵ�ֲ�����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}