#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]="I am a student";
	char temp;
	int i;
	int j=strlen(s1)-1;
	while(i<j)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
		i++;
		j--;
		
	}
	printf("The reversed string is %s ",s1);
}
