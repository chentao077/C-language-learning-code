#include<stdio.h>
struct book
{
	char name[20];
	int price;
};
int main()
{
	struct book a = { "C���Գ������",55 };
	printf("������%s\n", a.name);
	printf("�۸�%d\n", a.price);
	a.price = 15;
	printf("�޸ĺ�ļ۸��ǣ�%d\n", a.price);
	return 0;

}