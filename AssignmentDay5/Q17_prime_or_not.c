//17)Write a C program to check whether a number is Prime number or not.

#include<stdio.h>
void main()
{
	int i=2,n,flag=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
			{
				flag++;
			}
		i++;
	}
	if(flag==1)
	{
		printf("The number is prime!!");
	}
	else
	{
		printf("The number is not prime!!");
	}
}

