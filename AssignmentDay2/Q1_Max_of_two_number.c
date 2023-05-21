//1.	Write a C program to find maximum between two numbers.
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the 1st number:");
	scanf("%d",&num1);
	printf("Enter the 2nd number:");
	scanf("%d",&num2);
	
	if(num1>num2)
	printf("The %d is greater than %d",num1,num2);
	else
	printf("%d is greater than %d",num2,num1);
	return 0;
}
