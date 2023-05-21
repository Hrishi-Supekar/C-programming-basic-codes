//15)Write a C program to find all factors of a number.

#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The factors are:");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
}
