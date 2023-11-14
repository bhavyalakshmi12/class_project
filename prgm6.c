#include<stdio.h>
main()
{
   printf("%d",sizeof(char));
   printf("int=%d",sizeof(int));
   printf( "float=%d",sizeof(float));
   
   double x[]={1,2,3};
   printf("array %d",sizeof(x));
}
