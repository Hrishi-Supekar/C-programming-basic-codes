// 2.Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int i = n;
	printf("The all natural number in reverse order till %d:\n",n);
	while(i>=1)
	{
		printf("%d ",i);
		i--;
	}
}
