#include<stdio.h>
int Max(int a ,int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int input1 = 0;
	int input2 = 0;
	int max = 0;
	printf("�������һ�����֣�");
	scanf_s("%d", &input1);
	printf("������ڶ������֣�");
	scanf_s("%d", &input2);
	max = Max(input1, input2);
	printf("%d\n", max);
	return 0;
}