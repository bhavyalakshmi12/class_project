#include<stdio.h>
#include<string.h>
union data
{ 
	int i;
	float f;
	char str[30];

	
};
struct meta
{ 
	int i;
	float f;
	char str[30];

};
main()
{
union data d;
struct meta m;

printf("size of union is %d \n",sizeof(d));

printf("size of structure is %d",sizeof(m));


	
}
