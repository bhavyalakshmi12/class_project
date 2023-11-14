#include<stdio.h>
main()
{
	printf("\n char=%d", sizeof (char));
	printf("\n int=%d", sizeof (int));
	printf("\n float=%d", sizeof (float));
	
	double x[]={1,4};
	printf("\n array %d", sizeof(x));
}
