#include<stdio.h>
double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}	else if (k <= 0)
	{
		return 1 / Pow(n, -k);
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("½á¹ûÊÇ£º%lf",ret);
}