#include<stdio.h>
int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void swap(char* e1, char* e2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}
void my_qsort(void* start, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟
		int j = 0;
		//每一趟比较的对数
		for (j = 0; j < sz - 1 - i; j++)
			//比较
		{
			if (cmp((char*)start + j * width, (char*)start + (j + 1) * width) > 0)
			{
				//交换
				swap((char*)start + width * j, (char*)start + width * (j + 1), width);
			}
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
	return 0;
}