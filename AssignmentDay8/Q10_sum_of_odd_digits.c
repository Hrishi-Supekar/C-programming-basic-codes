//10)Write a C program to find Sum of all odd numbers between 1 to n
//(Using Function without return type without parameter values.).

#include<stdio.h>
void sum_of_all_odd();
int main()
{
	sum_of_all_odd();
	return 0;
}
void sum_of_all_odd()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		if(i%2!=0)
		{
			sum=sum+i;	
		}
	}
	printf("The sum of odd digits is:%d",sum);
}

