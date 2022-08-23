#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for ( i = 0; i < 100000; i++)
	{
		//1.计算位数
		int tmp = i;
		int n = 1;
		int sum = 0;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2.计算各位之和
		//123,3
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);//计算次方函数
			tmp /= 10;
		}
		//判断是否相等
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}