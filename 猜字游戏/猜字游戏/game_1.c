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
	int ret = rand() % 100 + 1;//生成范围1-100的随机数
	int guess = 0;             
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}  
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数种子
	do
	{
		menu();//打印菜单
		printf("请输入:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
			game();//实现猜字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}

	} while (input);

	return 0;
}