#include<stdio.h>
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int input1 = 0;
	int input2 = 0;
	int sum = 0;
	int max = 0;
	printf("�������һ�����֣�");
	scanf_s("%d", &input1);
	printf("������ڶ������֣�");
	scanf_s("%d", &input2);
	sum = add(input1, input2);
	printf("%d\n", sum);
	return 0;
}