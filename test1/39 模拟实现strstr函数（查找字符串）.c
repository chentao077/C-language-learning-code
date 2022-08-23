#include<stdio.h>
#include<assert.h>
char* my_arrarr(char* p1,char* p2)
{
	assert(p1);
	assert(p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	if (p2 == '\0')
	{
		return p1;
	}
	while (p1)
	{
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到子串
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		cur++;
	}
	return NULL;//找不到子串
}
int main()
{
	char* arr1 = "abbbcef";
	char* arr2 = "bbc";
	char* arr = my_arrarr(arr1, arr2);
	if (arr == NULL)
	{
		printf("找不到子串");
	}
	else
	{
		printf("%s", arr);
	}
	return 0;
}