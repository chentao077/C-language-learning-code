#include<stdio.h>
int Sum(unsigned int num)
{
	if (num > 9)
	{
		return Sum(num / 10) + Sum(num % 10);
	}
	if (num < 9)
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	int ret = 0;
	printf("请输入一个非零整数：");
	scanf_s("%d", &num);
	ret = Sum(num);
	printf("sum=%d", ret);
	return 0;
}