#include<stdio.h>
#include<stdlib.h>
struct S
{
	int i;
	int arr[];//柔性数组组成，最后一个元素允许是未知大小的数组
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	//sizeof计算结构体大小不包含柔性数组的大小
	p->i = 100;
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		p->arr[i] = i;
	}
	struct S* ptr = (struct S*)realloc(p, sizeof(struct S) + 10 * sizeof(int));
	if (ptr != NULL)
	{
		p = ptr;
		ptr = NULL;
	}
	for ( i = 5; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;
	return 0;
}