#include<stdio.h>
//int count_sum(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//	
//}
//
int count_sum(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		//n=11
		//1011 n
		//1010 n-1
		//1010 n&(n-1)
		//1010 n
		//1001 n-1
		//1000 n&(n-1)
		//1000 n
		//0111 n-1
		//0000 n&(n-1)
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf_s("%d" , &a);
	int count = count_sum(a);
	printf("count = %d\n", count);
	return 0;
}