//7.Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>
int main()
{
	int i,n,x=0;
	printf("Enter the num:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
		if(i%2==0)
		{
			x=x+i;
		}
	}
	printf("The Addition of number is:%d",x);
	return 0;
}
