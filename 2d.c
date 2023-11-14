#include<stdio.h>
main()
{
	int a[2][2]={{1,2},{5,6}};
	int a1[2][2]={5,6,7,8};
	int a2[2][2]={{1},{5,6}};
	int a3[2][2]={0};
	int a4[][2]={2,3,4};
	int i,j;

	printf("The elements of the array are \n");
	scanf("%d",&i);
	for(i=0;i<2;i++)
	{	for(j=0;j<2;j++)
       	{
		printf("%d ",a1[i][j]);
	    }
	    printf("\n");
	}
}
	
	
