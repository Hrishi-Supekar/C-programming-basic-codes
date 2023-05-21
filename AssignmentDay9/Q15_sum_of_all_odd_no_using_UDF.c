//15)Write a C program to find Sum of all odd numbers between 1 to n 
//(Using Function without return type with parameter values).

#include<stdio.h>
void sum_of_all_odd(int);
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	sum_of_all_odd(n);
	return 0;
}
void sum_of_all_odd(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{	
		if(i%2!=0)
		{
			sum=sum+i;	
		}
	}
	printf("The sum of odd digits is:%d",sum);
}
