#include<stdio.h>
void print(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			printf("%d ",( * (p + i))[j]);
			printf("%d ", *(p[i] + j));
			printf("%d ", *(*(p+i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);
}