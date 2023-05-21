//12)Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
void main()
{
	int n,i,sum=0,r,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;	
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("The num is palindrome!!!");
	}
	else
	printf("The no is not palindrome!!");
}

