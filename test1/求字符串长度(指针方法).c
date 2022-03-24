#include <stdio.h>
int my_strlen(char* arr)
{
	char* star = arr;
	char* end = arr;
	while (*end != '\0')
	{
		end++;
	}
	return end - star;
}
int main()
{
	char arr[] = "bite";
	int len = my_strlen(arr);
	printf("%d\n", len);
}