#include<stdio.h>
int main()
{
	int input1 = 0;
	int input2 = 0;
	int max = 0;
	printf("请输入第一个数字：");
	scanf_s("%d", &input1);
	printf("请输入第二个数字：");
	scanf_s("%d", &input2);
	max = (input1 > input2 ? input1 : input2);//三目运算
	printf("%d\n", max);
	return 0;
}