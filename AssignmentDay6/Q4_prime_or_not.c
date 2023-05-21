//4)Write a C program to check whether a number is Prime number or not.

#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
	if(flag==1)
	{
		printf("The number is prime number!!");
	}
	else
	{
		printf("The number is not prime number!!!");
	}
	return 0;
}

