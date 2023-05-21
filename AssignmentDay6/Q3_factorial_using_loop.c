//3)Write a C program to calculate factorial of a number.

#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("The factorial of number is:%d",fact);
	return 0;
}

