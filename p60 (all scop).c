#include<stdio.h>
extern int n=9;
int y=8;
main()
{
	int w;
	static int d;
	register int x=7, m;
	auto int k;
k=y*y;
printf("Value of k is: %d\n",k);
m=x*x;
printf("Value of m is: %d\n",m);	
    mystatic();
    mystatic();
	mystatic();
}
    mystatic()
    {
    	static int j=5;
    	printf("Value of static variable inside function is: %d\n",j);
    	j++;
    	printf("Value of exter n is: %d\n",n);
    	n++;
	}
