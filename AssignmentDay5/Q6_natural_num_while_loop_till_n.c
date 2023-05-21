//6)Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
void main()
{
	int n,num=1,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(num<=n)
	{
		sum=sum+num;
		num++;
	}
	printf("%d",sum);
}

