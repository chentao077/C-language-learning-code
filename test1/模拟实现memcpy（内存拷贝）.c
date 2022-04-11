//#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
void* my_memcpy(void* dest, const void* src, int size)
{
	char* ret = dest;
	while (size--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//== ((char*)dest)++
		++(char*)src;//==((char*)src)++
	}
	return ret;
}
struct s
{
	char name[20];
	int age[5];
};
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[10] = { 0 };
	struct s arr3[2] = {{"zhangsan",20},{"lisi",10}};
	struct s arr4[5] = { 0 };
	memcpy(arr2, arr1, sizeof(arr1));//memcpy������ʹ�ã���һ��Ŀ�ĵص�ַ���ڶ���Դͷ��ַ�����������Ĵ�С
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}