//6.Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
void main()
{
	int i,n,x=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		x=x+i;
	}
	printf("The addition of all natural num is:%d",x);
}
