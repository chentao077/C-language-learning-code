#include<stdio.h>
#include<stdlib.h>
struct S
{
	int i;
	int arr[];//����������ɣ����һ��Ԫ��������δ֪��С������
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	//sizeof����ṹ���С��������������Ĵ�С
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