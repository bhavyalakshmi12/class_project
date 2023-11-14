#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
struct student
{
    char name[20];
    int rollno;
    float 	cgpa;
}s1={"abc",20,9};
printf("%s %d %f",s1.name,s1.rollno,s1.cgpa);
}
