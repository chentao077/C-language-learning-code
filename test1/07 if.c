#include <stdio.h>
int main()
{
	int input = 0;
	printf("�������������");
	scanf_s("%d", &input);
	while (input <=10)
	{
		printf("+1,���ڵ������ǣ�%d\n", input);
		input++;
	}
	if (input >= 10)
		printf("��������Ѿ����ڵ���10");
	return 0;
}