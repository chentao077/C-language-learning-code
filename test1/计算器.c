#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*****************************\n");
	printf("***    1.Add     2.Sub    ***\n");
	printf("***    3.Mul     4.Div    ***\n");
	printf("***         0.exit        ***\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：");
			scanf_s("%d%d", &x, &y);
			printf("%d\n", parr[input](x, y));
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("输入错误\n");
		}
	} while (input);
	return 0;
}