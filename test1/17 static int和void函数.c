#include<stdio.h>
void test()
{
	static int a = 1;//static修饰局部变量使其生命周期变长，还可以修改变量或者函数的链接属性，只能在所在的源文件起作用
	a++;
	printf("a = %d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
}