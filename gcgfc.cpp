#include<stdio.h>
main()
{
	int a,b,*p,*p1,sum;
	printf("Enter the first number");
	scanf("%d",&a);
		printf("Enter the second number");
	scanf("%d",&b);
	p=&a;
	p1=&b;
	sum=*p+*p1;
	printf("sum=%d",sum);
	
}
