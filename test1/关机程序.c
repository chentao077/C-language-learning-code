#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 10");
again:
	printf("ע����ĵ��Խ���10���Ժ�ػ���������룺��������ȡ���ػ�\n");
	scanf_s("%s", arr,20);
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}