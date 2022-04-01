#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			flag = 0;
		}
		if (flag == 1)
		{
			break;
		}
	}

}
int main()
{
	int arr[] = { 1,2,4,6,8,3,7,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz);
	for (i = 0; i < sz - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}