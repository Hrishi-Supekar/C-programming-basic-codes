// 1.Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
void main()
{
	int n;
	int i =1;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The all natural number are till %d:\n",n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
