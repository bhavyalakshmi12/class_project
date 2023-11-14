//write a C prgm to convert specified days to years, weeks and days.
#include<stdio.h>
main()
{
	int d,w,y;
	printf("Enter the no. of days=");
	scanf("%d",&d);
	w=d/7;
	y=d/365;
	printf("The no. of weeks=%d",w);
	printf("\nThe no. of years=%d",y);
	
}
