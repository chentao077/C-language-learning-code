#include<stdio.h>
int main()
{
	int input1 = 0;
	int input2 = 0;
	int max = 0;
	printf("�������һ�����֣�");
	scanf_s("%d", &input1);
	printf("������ڶ������֣�");
	scanf_s("%d", &input2);
	max = (input1 > input2 ? input1 : input2);//��Ŀ����
	printf("%d\n", max);
	return 0;
}