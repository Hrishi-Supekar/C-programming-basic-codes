//14)Write a C program to find Sum of 1 to n 
//(Using Function without return type with parameter values).

#include<stdio.h>
void sum_one_to_n(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	sum_one_to_n(n);
	return 0;
}
void sum_one_to_n(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;	
	}
	printf("The sum is :%d",sum);
}
