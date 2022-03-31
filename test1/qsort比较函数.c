#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_float(const void* e1, const void* e2)
{
	//方法1：当两个数差值小于1时无法比较
	//return ((int)(*(float*)e1 - *(float*)e2));
	//方法2：
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
void test2()
{
	float arr[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), cmp_float);
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_struct_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_struct_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
	//比较字符串的第一个字符的asscii码值，大于返回1，相等返回0，小于返回-1
	//汉字也可以比较
}
void test3()
{
	struct Stu s[3] = { {"张三",30},{"李四",20},{"王五",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	//按年龄排序
	//qsort(s, sz, sizeof(s[0]),cmp_struct_age);
	//按姓名排序，用strcmp函数
	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
}
int main()
{
	test1();//整形数组排序
	printf("\n");
	test2();//浮点型数组排序
	printf("\n");
	test3();//结构体数组比较
	return 0;
}