#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char s1[20]="I am Bhavya";
	int i;
	char f,g,h;
	i=strlen(s1);
	printf("%d\n",i);
	f=strupr(s1);
	printf("%s\n",f);
	g=strlwr(s1);
	printf("%s\n",g);
	h=strrev(s1);
	printf("%s\n",h);
		
}
