#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印的字符串的长度，首先第三个printf打印43,返回2
	//第二个printf打印2，返回1，第三个printf打印1，最后输出的结果是4321。
}