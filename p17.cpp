//write a c prgm to compute the perimeter and area
//And the area of rect with a ht=5inch & wdt=4inchs.

#include<stdio.h>
main()
{
	int h=5, w=4,p,a;
	p=2*(h+w);
	a=h*w;
	printf("Perimeter is=%d",p);
	printf("\nArea is=%d",a);
}
