#include<stdio.h>
struct book
{
	char name[20];
	int price;
};
int main()
{
	struct book a = { "C语言程序设计",55 };
	printf("书名：%s\n", a.name);
	printf("价格：%d\n", a.price);
	a.price = 15;
	printf("修改后的价格是：%d\n", a.price);
	return 0;

}