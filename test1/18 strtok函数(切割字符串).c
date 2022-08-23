#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "1500484322@qq.com";
	char* p = "@.";
	char buf[1024] = { 0 };
	char* ret = NULL;
	//¿½±´×Ö·û´®
	strcpy(buf, arr);
	//·Ö¸î×Ö·û´®
	for (ret=strtok(buf,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
	return 0;
}