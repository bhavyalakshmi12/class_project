#include<stdio.h>
main()
{
int sum=0;
int sum1=0;
int sum2=0;
int arr[6];
int i;
printf("Enter the elements\n");
for(i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
}
printf("\n the elements are ");
for(i=0;i<5;i++)
{
	printf("\n%d",arr[i]);
	sum=sum+arr[i];	
}
printf("\n the sum is%d",sum);
for(i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		printf("\nthe even number is %d",arr[i]);
		sum1=sum1+arr[i];
	}
	else
	{
		printf("\nThe odd number is %d",arr[i]);
		sum2=sum2+arr[i];	
	}
}
printf("\nThe sum of even numbers is %d",sum1);
printf("\nThe sum of odd numbers is %d",sum2);
}

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
