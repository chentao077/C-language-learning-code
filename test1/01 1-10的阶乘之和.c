#include<stdio.h>
int main()
{
	int n = 1;
	int sum = 0;
	int ch = 1;
	for (n = 1; n <= 10; n++)
	{
		ch = ch * n;
		sum = sum + ch;
	}
	printf("%d\n", sum);
	return 0;
}