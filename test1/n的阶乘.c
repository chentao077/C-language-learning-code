#include<stdio.h>
int main()
{
	int ch = 0;
	int i = 0;
	int sum = 1;
	printf("������������֣�");
	scanf_s("%d", &ch);
	for (i = 1; i <= ch; i++)
	{
		sum = sum * i;
	}
	printf("�����%d\n", sum);
	return 0;
}