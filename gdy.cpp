#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int age;
};
void show(struct student s);
main()
{
	struct student s1={1,21};
show(s1);	};
void show(struct student s)
{
	printf(" id is %d\n",s.id);
	printf(" age is %d",s.age);
	
}
