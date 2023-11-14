#include<stdio.h>
main()
{
int a,b,*p,*p1;
printf("Enter the numbers to be compared: \n");
scanf("%d",&a);
scanf("%d",&b);
p=&a;
p1=&b;
if(*p>*p1)
{printf("%d is greater than ",*p);
}
else
{
printf(	"%d is greater  ",*p1 );}
}

