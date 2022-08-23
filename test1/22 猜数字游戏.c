#include<stdio.h>
#include<time.h>
void menu()
{
	printf("###########################\n");
	printf("##### play:1   exit:0 #####\n");
	printf("###########################\n");
}
void game()
{
	int ret = 0;
	int gess = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字：");
		scanf_s("%d", &gess);
		if (gess > ret)
		{
			printf("猜大了\n");
		}
		else if (gess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//以时间戳设置rand（）随机函数起点
	do
	{
		menu();
		printf("请选择");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}