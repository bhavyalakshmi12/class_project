#include<stdio.h>
main()
{
	int ar[5]={2,4,6,8,10};
	ar[5]=9;
	printf("The addresses are: %u %u %u",ar,&ar,&ar[0]);
	
	int i;
	for(i=0;i<5;i++)
	{
		printf(" \n%u ", &ar[i]);
	}
}
