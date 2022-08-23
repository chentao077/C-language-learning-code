#include<stdio.h>
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf_s("%s",password,20);
	/*getchar();*/
	while ((getchar())!='\n')
	{
		;
	}
	printf("请确认（A\B）:");
	ret = getchar();
	if (ret == 'A')
		printf("确认成功");
	else
	{
		printf("放弃确认");
	}
	return 0;
}




