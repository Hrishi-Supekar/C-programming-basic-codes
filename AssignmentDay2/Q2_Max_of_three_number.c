//2.	Write a C program to find maximum between three numbers.

#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the 1st number:");
	scanf("%d",&num1);
	printf("Enter the 2nd number:");
	scanf("%d",&num2);
	printf("Enter the 3rd number:");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("Number %d is maximum",num1);
	}
	else if(num2>num1 && num2>num3)
	{
		printf("Number %d is maximum",num2);
	}
	else
	{
		printf("Number %d is maximum",num3);
	}
	return 0;
}
