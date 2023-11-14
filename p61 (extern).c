#include<stdio.h>
void print1()
{
	extern int x;
	printf("Value is: %d",x);
	x=x+10;
}
