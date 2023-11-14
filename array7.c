#include<stdio.h>
void Ref(int y[5],int x);
main()
{
	int array[5]={1,2,3,5,6};
	Ref(array,4);//function call which is having parameter as an array
		
}
void ref1(int x[],int size)
{
printf("%d",x);
int min=x[0];
int i=0;
for(i=0;i<6;i++)
{
	if(min>x[i])
	{
		min=x[i];
	}
}
printf("\n The smmallest number is %d",min);
}

