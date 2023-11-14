#include<stdio.h>//replace the blank spaces with dollar sign in the string
#include<string.h>
#include<stdlib.h>
main()
{
	char x[100];
	int i=0;
	printf("Enter string\n");
	gets(x);
	while(x[i]1='\0')
	{
		if (x[i]=='')
		{
		
		x[i]='$';
	}
	i++
	}

