#include<stdio.h>
main()
{
	int days,years,weeks;
	printf("Enter the no of days:");
	scanf("%d",&days);
	years=days/365;
	printf("The no of years is=%d\n",years);
	weeks=days/7;
	printf("The no of weeks is =%d\n",weeks);
	
}
