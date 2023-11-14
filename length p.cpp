#include <stdio.h>

 
 main() 
{
	
   char str[25];
   int i;

   printf(" Input a string : ");
   gets(str);
   
   i = 0;
   printf(" The length of the given string %s is : %d ", str, i-1);
  
char *ch;
int ctr;
  
   while (*ch != '\0') 
   {
      ctr++;
      ch++;
   }
   return ctr;
}

