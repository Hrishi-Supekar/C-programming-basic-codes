//10)Write a C program to count number of digits in a number.

#include<stdio.h>
void main()
{
	int i,n,cnt=0;
	printf("Enter the num:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		n=n/10;
		cnt++;
	}
	printf("%d",cnt);
}

