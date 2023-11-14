#include<stdio.h>
int main()
{
int i=0;
for(;;)
{
 i++;
 if(i%3==0)
 continue;
 else if(i%5==0)
 break;
 printf("%d ",i);
}
return 0;
}

