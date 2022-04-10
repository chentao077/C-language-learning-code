#include<stdio.h>
char* my_strcat(char* p1, char* p2)
{
	char* ret = p1;
	//找arr1中的\0
	while (*p1)
	{
		p1++;
	}
	//追加
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = *p2;//拷贝\0
	/*while(*p1++ =*p2++)
	{ ; }*/
	//追加的简写
	return ret;
}
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "abc";
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}