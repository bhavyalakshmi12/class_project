#include<stdio.h>
 int main()
{
int arr[25],i,n;
printf("Ente the number of elements to be stored in the array:");
scanf("%d",&n);

printf("Enter elements :\n");
for(i=0;i<n;i++)
{
	printf("element %d: ",i);
	scanf("%d",arr+i);
}
printf("The elements entered are\n");
for(i=0;i<n;i++);
{
printf("The elements are %d:%d",n,*(arr+i));
}
return 0;
}

