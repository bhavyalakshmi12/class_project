#include<stdio.h>
main()
{
	int a=5,b=5,c=10,d,e,f,g;
	e=(a==b)||(c>b);
	printf("the (a==b)||(c>b=%d\n",e);
	f =!(a==b);
	printf("OR operation %d\n",f);
	g=a&&b||c-2;
	printf("a&&b||c-2 is=%d",g);
}
