#include<stdio.h>
main()
{
	int arr[5] ={1, 2, 5 ,6, 8};
	int N=5;
	int i=0;
	int ind=3;
	int v=3;
	printf(" \n Printing the elements of the array before insertion \n");
	for(i=0;i<N;i++)
	{
		printf("%d", arr[i]);
	}
	for(i=N;i>=ind;i--);
	{
		arr[i+1]=arr[i];
		
	}
	arr[ind]=v;
	N++;
	printf("\n print the elements of the array after insertion \n");
	for(i=0;i<N;i++)
	{
		printf("%d",arr[i]);
}
}

