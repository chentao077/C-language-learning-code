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
		printf("������֣�");
		scanf_s("%d", &gess);
		if (gess > ret)
		{
			printf("�´���\n");
		}
		else if (gess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//��ʱ�������rand��������������
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}