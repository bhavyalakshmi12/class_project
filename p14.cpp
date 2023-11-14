#include<stdio.h>
main()
{
	int a=5,b=5,c=10,d,e,f ;
	d=(a==b) &&(c<b);   //and operator
	printf("The value of (a==b) &&(c<b)= %d\n",d);
	
	e=(a==b) ||(c<b);    // or operator
	printf("The value of (a==b) ||(c<b)=%d\n",e);
	
	f=a&&b||c-2;
	printf("%d",d);
}
