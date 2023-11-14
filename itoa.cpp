#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	int a=345;
	char str[20];
	itoa(a,str,2);
	itoa(a,str,10);
	printf("Binary value is %s\n",str);
    printf("Decimal value is %s",str);
}

