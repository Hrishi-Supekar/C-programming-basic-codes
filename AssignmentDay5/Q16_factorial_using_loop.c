//16)Write a C program to calculate factorial of a number.

#include<stdio.h>
void main()
{
	int n,i=1;
	printf("Enter the number:");
	scanf("%d",&n);
	int fact=1;
	while(i<=n)
	{
	fact = fact*i;
	i++;
	}
	printf("%d",fact);
	
}

