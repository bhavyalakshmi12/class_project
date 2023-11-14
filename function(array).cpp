#include<stdio.h>
void Ref(int y);
main()
{
	int arr[5]={1,2,3,5,6};
	Ref(arr[0]);//function call which is having parameter as an array
		
}
void Ref(int y)
{
	printf("%d",y);

}
