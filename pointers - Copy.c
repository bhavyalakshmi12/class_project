#include<stdio.h>
main()
{
int a=7;
int *ptr;
ptr=&a;
printf("Value of a is %d",a);
printf("\n Address of a is %d",&a);
printf("\n Address of pointer ptr is %d",&ptr);
printf("\n Address of a is %d\n",ptr);
printf("\n value of ptr is %d",*ptr);
}
