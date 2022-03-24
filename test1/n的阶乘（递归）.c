#include<stdio.h>
int fac(int x)
{
	if (x <= 1)
	{
		return 1;
	}
	else
	{
		return x * fac(x - 1);
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
	ret = fac(n);
	printf("%d\n", ret);
	return 0;
}