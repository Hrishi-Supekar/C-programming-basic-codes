//14)Write a C program to find Factorial of given number 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void factorial();
int main()
{
	factorial();
	return 0;
}
void factorial()
{
	int i,fact=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("The factorial of number is:%d",fact);
}
