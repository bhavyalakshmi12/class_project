#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int *ptr[5],i;
	for(i=0;i<5;i++)
	{
		ptr[i]=&a[i];
	}
	printf("prints the elements using pointer");
	for(i=0;i<5;i++)
	{
		printf("%d",*ptr[i]);
	}
}
