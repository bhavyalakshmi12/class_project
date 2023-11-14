#include<stdio.h>
main()
{ int a[5];
  int *ptr,i;
ptr=a;
  printf("Enter the elements");
  for(i=0;i<5;i++)
  {
 
  	scanf("%d",ptr+i);
  	
  }
  
	 	printf(" the elements are");
	 	for(i=0;i<5;i++)
	 	{
	 		printf("%d",*(ptr+i));
		 }
	
	
	
	
	
	
}
