#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("���������룺");
	scanf_s("%s",password,20);
	/*getchar();*/
	while ((getchar())!='\n')
	{
		;
	}
	printf("��ȷ�ϣ�A\B��:");
	ret = getchar();
	if (ret == 'A')
		printf("ȷ�ϳɹ�");
	else
	{
		printf("����ȷ��");
	}
	return 0;
}




