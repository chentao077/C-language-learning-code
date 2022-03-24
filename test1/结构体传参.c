#include<stdio.h>
typedef struct stu
{
	char name[20];
	short age;
	char tele[18];
	char sex[4];
}stu;
void print1(stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age:  %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex:  %s\n", tmp.sex);
}
void print2(stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age:  %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex:  %s\n", ps->sex);
}
int main()
{
	stu s = { "张三",40,"13484077077","男" };
	print1(s);
	print2(&s);//print2好于print1
	return 0;
}