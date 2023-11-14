#include<stdio.h>
main()
{
	
	int i,n,fact=1;
	int *pf,*pfact;
                                                                                                                             pf=&n;
	pfact=&fact;
	printf("Enter the number:");
	scanf("%d",pf);
	for(i=1;i<=*pf;i++)
	{
		*pfact=*pfact*i;
	}
	
	printf("The factorial is %d",*pfact);
	
	
	
	
	
	
	
}
