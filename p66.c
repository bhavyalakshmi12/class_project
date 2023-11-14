//(1)Declare array with name arr[5].  (2)Take input using for loop.  (3)Show output using for loop.

#include<stdio.h>
main()
{
	int n;
	printf("Enter the no. of elements in array: ");
	scanf("%d",&n);
	int arr[n];
	int i,f;
	for(i=0;i<n;i++)
	{
		printf("Enter elements of the array: ");
		scanf("%d",&arr[i]);
	}
	printf("Showing the elements in the array: ");
	for(f=0;f<n;f++)
	{
		printf("%d ",arr[f]);
		
	}

}
