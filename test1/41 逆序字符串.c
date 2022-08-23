#include<stdio.h>
int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}
void revese_string(char* arr)
{
	int len = my_strlen(arr);
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdef";
	revese_string(arr);
	printf("%s", arr);
	return 0;
}