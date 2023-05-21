//19)Write a C program to find Factorial of given number 
//(Using Function without return type with parameter values).


#include<stdio.h>
void factorial(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	factorial(n);
	return 0;
}
void factorial(int n)
{
	int i,fact=1;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("The factorial of number is:%d",fact);
}
