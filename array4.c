#include<stdio.h>
main()
{
	int arr[5];
	int n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements in the array");
	int i;
	for(i=0;i<n;i++)
	{	
	scanf("%d",&arr[i]);
	}
	printf("show thw elements in the array");
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
}

