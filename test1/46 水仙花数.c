#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for ( i = 0; i < 100000; i++)
	{
		//1.����λ��
		int tmp = i;
		int n = 1;
		int sum = 0;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2.�����λ֮��
		//123,3
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);//����η�����
			tmp /= 10;
		}
		//�ж��Ƿ����
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}