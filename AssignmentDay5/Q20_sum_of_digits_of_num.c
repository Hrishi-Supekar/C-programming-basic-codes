//20)Write a C program to find sum of digits in a number.

#include<stdio.h>
void main()
{
	int n,r,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The addition of num:%d",sum);	
}

