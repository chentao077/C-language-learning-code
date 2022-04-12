#include<string.h>
#include<assert.h>
void* my_memmove(void* dest,const void* src,unsigned int num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//��ǰ���
	if (src>dest)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	//�Ӻ���ǰ
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//memmove(arr , arr+ 3, 20);
	my_memmove(arr , arr+ 3, 20);
	return 0;
}