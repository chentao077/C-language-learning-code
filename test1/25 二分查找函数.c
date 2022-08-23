#include<stdio.h>
int search(int arr[],int k,int sz)//int arr[]传递的是arr数组中的第一个元素的地址，本质上是一个指针，而不是传递一个数组过去。
//所以size of（arr）在这个地方不能计算数组长度，而是计算指针长度，需要在函数外计算。
{
	int right = 0;
	int left = sz - 1;
	
	while (right <= left)
	{
		int mid = (right + left) / 2;
		if (arr[mid] > k)
		{
			left = mid - 1;
		}
		else if (arr[mid] < k)
		{
			right = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//长度需要在函数外计算。
	int pd = search(arr, k, sz);
	if (pd == -1)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", pd);
	}
	return 0;
}