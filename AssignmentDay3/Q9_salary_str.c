//9.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
void main()
{
	float BS,HRA,DA,GS;
	printf("Enter the basic salary:");
	scanf("%f",&BS);
	
	if(BS<=10000)
	{
		HRA = BS*0.2;
		DA = BS*0.8;
		GS = BS+HRA+DA;
		printf("The gross salary is %0.2f",GS);
	}
	else if(BS<=20000)
	{
		HRA = BS*0.25;
		DA = BS*0.9;
		GS = BS+HRA+DA;
		printf("The gross salary is %0.2f",GS);		
	}
	else
	{
		HRA = BS*0.3;
		DA = BS*0.95;
		GS = BS+HRA+DA;
		printf("The gross salary is %0.2f",GS);
	}
}

