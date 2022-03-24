#include<stdio.h>
int main()
{
	int ch = 0;
	int i = 0;
	int sum = 1;
	printf("请输入你的数字：");
	scanf_s("%d", &ch);
	for (i = 1; i <= ch; i++)
	{
		sum = sum * i;
	}
	printf("结果是%d\n", sum);
	return 0;
}