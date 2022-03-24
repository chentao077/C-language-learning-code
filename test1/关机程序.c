#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 10");
again:
	printf("注意你的电脑将在10秒以后关机，如果输入：我是猪，则取消关机\n");
	scanf_s("%s", arr,20);
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}