#include<stdio.h>
void swap(int*,int*);
main()
{
	int a=7,b=9;
	printf("before swapping values of a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("after swapping values of a=%d b=%d\n",a,b);
	
	}
void swap(int *x,int *y)
{
int temp;
int *ptemp=&temp;
*ptemp=*x;
*x=*y;
*y=*ptemp;
printf("values of a =%d b=%d",*x,*y);	
}
	
	
	
	
	
		
