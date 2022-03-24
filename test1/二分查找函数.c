#include<stdio.h>
int search(int arr[],int k,int sz)//int arr[]���ݵ���arr�����еĵ�һ��Ԫ�صĵ�ַ����������һ��ָ�룬�����Ǵ���һ�������ȥ��
//����size of��arr��������ط����ܼ������鳤�ȣ����Ǽ���ָ�볤�ȣ���Ҫ�ں�������㡣
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
	int sz = sizeof(arr) / sizeof(arr[0]);//������Ҫ�ں�������㡣
	int pd = search(arr, k, sz);
	if (pd == -1)
	{
		printf("û���ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", pd);
	}
	return 0;
}