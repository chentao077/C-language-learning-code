#include<stdio.h>
void add(int* p)
{
	(*p)++;//++的计算优先级高于*
}
int main()
{
	int num = 0;
	add(&num);
	printf("num = %d\n", num);
	add(&num);
	printf("num = %d\n", num);
	add(&num);
	printf("num = %d\n", num);
	return 0;
}