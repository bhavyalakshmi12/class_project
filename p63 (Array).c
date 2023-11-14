//Create 7 int type different variables and same data in them. Display the data saved in them.

#include<stdio.h>
main()
{
	int n;
	printf("Enter the no. of elements for array:");
	scanf("%d",&n);
	int x[]={1,3,5,6,8};

	
	
	// using for loop
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",x[i]);
	}
}

