#include<stdio.h>
#define line 5
#define wide 5
int main()
{
	int arr[line][wide] = { 0 };
	int i = 0;
	int j = 0;
	for ( i = 0; i < line; i++)
	{
		for ( j = 0; j < wide; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//´òÓ¡
	for (i = 0; i < line; i++)
	{

		int k = 0;
		for ( k = 0; k < wide-1-i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}