#include <stdio.h>
int main()
{
	int input = 0;
	printf("请输入你的数字");
	scanf_s("%d", &input);
	while (input <=10)
	{
		printf("+1,现在的数字是：%d\n", input);
		input++;
	}
	if (input >= 10)
		printf("你的数字已经大于等于10");
	return 0;
}