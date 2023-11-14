#include<stdio.h>
main()
{
	int a=10,b=9;
	char c='A';
	void *ptr;
	ptr=&a;
	printf("the values at generic pointer is %d\n",*(int*)ptr);
	ptr=&c;
	printf("the values at generic pointer is %c\n",*(char*)ptr);
}
