//11)Write a C program to find Sum of all even numbers between 1 to n 
//(Using Function without return type without parameter values.).

#include<stdio.h>
void sum_of_all_even();
int main()
{
	sum_of_all_even();
	return 0;
}
void sum_of_all_even()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		if(i%2==0)
		{
			sum=sum+i;	
		}
	}
	printf("The sum of even digits is:%d",sum);
}
