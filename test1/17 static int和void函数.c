#include<stdio.h>
void test()
{
	static int a = 1;//static���ξֲ�����ʹ���������ڱ䳤���������޸ı������ߺ������������ԣ�ֻ�������ڵ�Դ�ļ�������
	a++;
	printf("a = %d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
}