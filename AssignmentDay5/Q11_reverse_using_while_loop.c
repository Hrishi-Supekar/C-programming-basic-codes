//11)Write a C program to enter a number and print its reverse.

#include<stdio.h>
void main()
{
	int n,i,sum=0,r;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	printf("%d",sum);
}

