#include<stdio.h>
extern int a=10;
fun1()
{
	printf("value of global inside main %d",a);
	a++;
}
main()
{
fun1();

	
