//7)Write a C program to find sum of digits in a number.

#include<stdio.h>
int main()
{
	int i,r,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The addition of number is %d",sum);
	return 0;
}

