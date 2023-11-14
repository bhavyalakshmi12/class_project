/* Write a C prgm that accepts an employees ID 
total worked hrs in a month & the amt received per hrs.
print the ID and salary(with 2 decimal pts) of the employees for a particular month

Test data:
Input the employee ID(max 10 char):0342
Input the working hrs:8
salary amt/hr:15000

Expected output:
Employee ID= 0342
Salary=U$ 120000.00 */

#include<stdio.h>
main()
{
	char ID[10];
	int hrs;
	double value,salary;
	printf("Input the Employee ID(Max 10 chars):");
	scanf("%s",&ID);
	printf("\nEnter the no. of worked hrs:");
	scanf("%d",&hrs);
	printf("\nEnter the salary amt/hr:");
	scanf("%lf",&value);
	salary=value*hrs;
	printf("\nEmployee ID=%s \nSalary=U$%.2lf\n",ID,salary);
	
}

