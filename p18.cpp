/*write a C prgm to display following variables.
a+ c,x + c,dx + x,((int) dx) + ax,a + x,s + b, ax + b,s + c,ax+c,ax+ux
variable declerationp:
int a=125,b=12345;
long ax=1234567890;
short s=4043;
float x=2.13459;
double dx=1.1415927;
char c='W';
unsigned long ux=2541567890; */

#include<stdio.h>
int main()
{
int a=125,b=12345;
long ax=1234567890;
short s=4043;
float x=2.13459;
double dx=1.1415927;
char c='W';
unsigned long ux=2541567890;
printf("a + c=%d",a + c);
printf("\nx + c=%f",x + c);
printf("\ndx + x=%f",dx + x);
printf("\na + c=%d",a + c);
}
